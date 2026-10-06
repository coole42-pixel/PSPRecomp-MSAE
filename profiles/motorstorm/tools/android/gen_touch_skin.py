#!/usr/bin/env python3
"""Generate the MotorStorm Android touch-control skin as SVG files.

Every asset is a 256x256 transparent canvas with two top-level groups:
  <g id="background" opacity="1">  glass body, rim, halo
  <g id="symbol" opacity="1">      glyph and its glow
Edit either group's opacity to fade that layer.

The SVG uses only paths, basic shapes, linear/radial gradients and group
opacity/transform, so simple rasterizers render it correctly (nanosvg,
Android VectorDrawable conversion, librsvg). Filters, masks, clip paths and
<text> are not used; labels are stroked paths.

Usage: python gen_touch_skin.py [output_dir]
Default output: profiles/motorstorm/android/touch_skin/svg
"""

import math
import os
import sys

C = 128  # canvas center

# Palette. Face colours follow the familiar handheld convention; everything
# else shares one cool accent so the pad reads as one family.
ACCENT = "#8CCBFF"
INK = "#E9EFF8"
PRESSED_INK = "#FFFFFF"
FACE = {
    "triangle": "#4FE3B0",
    "circle": "#FF6E7A",
    "cross": "#7EA6FF",
    "square": "#F48BD0",
}
GLASS_HI = "#3A4252"
GLASS_LO = "#0B0E14"


def f(v):
    """Compact number formatting."""
    s = f"{v:.2f}".rstrip("0").rstrip(".")
    return "0" if s == "-0" else s


class Svg:
    def __init__(self, name, title):
        self.name = name
        self.title = title
        self.defs = []
        self.bg = []
        self.sym = []

    def gid(self, key):
        return f"{self.name}-{key}"

    def _stops(self, stops):
        return "".join(
            f'<stop offset="{f(o)}" stop-color="{c}" stop-opacity="{f(a)}"/>'
            for o, c, a in stops
        )

    def lin(self, key, x1, y1, x2, y2, stops):
        self.defs.append(
            f'<linearGradient id="{self.gid(key)}" gradientUnits="userSpaceOnUse" '
            f'x1="{f(x1)}" y1="{f(y1)}" x2="{f(x2)}" y2="{f(y2)}">'
            f"{self._stops(stops)}</linearGradient>"
        )
        return f"url(#{self.gid(key)})"

    def rad(self, key, cx, cy, r, stops, fx=None, fy=None):
        focus = ""
        if fx is not None:
            focus = f' fx="{f(fx)}" fy="{f(fy)}"'
        self.defs.append(
            f'<radialGradient id="{self.gid(key)}" gradientUnits="userSpaceOnUse" '
            f'cx="{f(cx)}" cy="{f(cy)}" r="{f(r)}"{focus}>'
            f"{self._stops(stops)}</radialGradient>"
        )
        return f"url(#{self.gid(key)})"

    def render(self):
        defs = "\n    ".join(self.defs)
        bg = "\n    ".join(self.bg)
        sym = "\n    ".join(self.sym)
        return (
            '<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" '
            'viewBox="0 0 256 256">\n'
            f"  <title>{self.title}</title>\n"
            f"  <defs>\n    {defs}\n  </defs>\n"
            f'  <g id="background" opacity="1">\n    {bg}\n  </g>\n'
            f'  <g id="symbol" opacity="1">\n    {sym}\n  </g>\n'
            "</svg>\n"
        )


def press_open(pressed, scale=0.955):
    """Group that shrinks a pressed control slightly toward the center."""
    if not pressed:
        return "<g>"
    return f'<g transform="translate({C} {C}) scale({scale}) translate(-{C} -{C})">'


# ---------------------------------------------------------------------------
# Shared building blocks


def glass_disc(s, r, pressed, accent):
    """Round smoky-glass button body, appended to the background group."""
    halo_r = r + 26
    inner = r / halo_r
    if pressed:
        halo = s.rad("halo", C, C, halo_r, [
            (0, accent, 0.55), (inner * 0.96, accent, 0.45), (1, accent, 0)])
    else:
        halo = s.rad("halo", C, C + 4, halo_r, [
            (0, "#000000", 0.30), (inner * 0.96, "#000000", 0.30), (1, "#000000", 0)])
    s.bg.append(f'<circle cx="{C}" cy="{C + (0 if pressed else 4)}" r="{halo_r}" fill="{halo}"/>')

    s.bg.append(press_open(pressed))
    if pressed:
        body = s.rad("body", C, C - r * 0.35, r * 1.45, [
            (0, accent, 0.50), (0.55, "#1A2233", 0.62), (1, GLASS_LO, 0.78)])
        rim = s.lin("rim", 0, C - r, 0, C + r, [
            (0, "#FFFFFF", 0.95), (0.45, accent, 0.75), (1, accent, 0.55)])
    else:
        body = s.rad("body", C, C - r * 0.35, r * 1.45, [
            (0, GLASS_HI, 0.50), (0.6, "#161A23", 0.62), (1, GLASS_LO, 0.72)])
        rim = s.lin("rim", 0, C - r, 0, C + r, [
            (0, "#FFFFFF", 0.60), (0.5, "#FFFFFF", 0.10), (1, "#FFFFFF", 0.26)])
    sheen = s.lin("sheen", 0, C - r, 0, C, [
        (0, "#FFFFFF", 0.20 if not pressed else 0.14), (1, "#FFFFFF", 0)])
    s.bg.append(f'<circle cx="{C}" cy="{C}" r="{r}" fill="{body}"/>')
    s.bg.append(
        f'<circle cx="{C}" cy="{C}" r="{r - 10}" fill="none" stroke="#FFFFFF" '
        f'stroke-opacity="0.07" stroke-width="1.5"/>')
    s.bg.append(
        f'<ellipse cx="{C}" cy="{f(C - r * 0.45)}" rx="{f(r * 0.70)}" ry="{f(r * 0.42)}" '
        f'fill="{sheen}"/>')
    s.bg.append(
        f'<circle cx="{C}" cy="{C}" r="{f(r - 1.5)}" fill="none" stroke="{rim}" '
        f'stroke-width="3"/>')
    s.bg.append("</g>")


def glass_shape(s, d, box, pressed, accent):
    """Smoky-glass body for an arbitrary closed path.

    box = (x0, y0, x1, y1) bounds, used to place gradients.
    """
    x0, y0, x1, y1 = box
    # Stroke-based halo: works in renderers without blur filters.
    if pressed:
        for w, a in ((30, 0.10), (20, 0.16), (10, 0.26)):
            s.bg.append(
                f'<path d="{d}" fill="none" stroke="{accent}" stroke-opacity="{a}" '
                f'stroke-width="{w}" stroke-linejoin="round"/>')
    else:
        for w, a in ((22, 0.10), (12, 0.16)):
            s.bg.append(
                f'<path d="{d}" transform="translate(0 4)" fill="none" stroke="#000000" '
                f'stroke-opacity="{a}" stroke-width="{w}" stroke-linejoin="round"/>')

    s.bg.append(press_open(pressed))
    h = y1 - y0
    if pressed:
        body = s.lin("body", 0, y0, 0, y1, [
            (0, accent, 0.48), (0.55, "#1A2233", 0.64), (1, GLASS_LO, 0.78)])
        rim = s.lin("rim", 0, y0, 0, y1, [
            (0, "#FFFFFF", 0.95), (0.45, accent, 0.75), (1, accent, 0.55)])
    else:
        body = s.lin("body", 0, y0, 0, y1, [
            (0, GLASS_HI, 0.52), (0.55, "#161A23", 0.62), (1, GLASS_LO, 0.74)])
        rim = s.lin("rim", 0, y0, 0, y1, [
            (0, "#FFFFFF", 0.60), (0.5, "#FFFFFF", 0.10), (1, "#FFFFFF", 0.26)])
    sheen = s.lin("sheen", 0, y0, 0, y0 + h * 0.55, [
        (0, "#FFFFFF", 0.18 if not pressed else 0.12), (1, "#FFFFFF", 0)])
    s.bg.append(f'<path d="{d}" fill="{body}"/>')
    s.bg.append(f'<path d="{d}" fill="{sheen}"/>')
    s.bg.append(
        f'<path d="{d}" fill="none" stroke="{rim}" stroke-width="3" stroke-linejoin="round"/>')
    s.bg.append("</g>")


def glow_ramp(pressed):
    """(stroke width multiplier, opacity) layers, widest first, for a soft glow."""
    if pressed:
        return ((3.2, 0.07), (2.6, 0.10), (2.1, 0.14), (1.6, 0.22))
    return ((2.6, 0.04), (2.1, 0.06), (1.6, 0.10))


def glyph(s, paths, width, pressed, color, glow=None, filled=False):
    """Stroked symbol with a soft underglow, appended to the symbol group."""
    glow = glow or color
    ink = PRESSED_INK if pressed else color
    s.sym.append(press_open(pressed))
    for w_mul, a in glow_ramp(pressed):
        for d in paths:
            fill = f'fill="{glow}" fill-opacity="{a}"' if filled else 'fill="none"'
            s.sym.append(
                f'<path d="{d}" {fill} stroke="{glow}" stroke-opacity="{a}" '
                f'stroke-width="{f(width * w_mul)}" stroke-linecap="round" stroke-linejoin="round"/>')
    for d in paths:
        fill = f'fill="{ink}"' if filled else 'fill="none"'
        s.sym.append(
            f'<path d="{d}" {fill} stroke="{ink}" stroke-width="{f(width)}" '
            f'stroke-linecap="round" stroke-linejoin="round"/>')
    s.sym.append("</g>")


def circle_path(cx, cy, r):
    return (f"M {f(cx - r)} {f(cy)} A {f(r)} {f(r)} 0 1 1 {f(cx + r)} {f(cy)} "
            f"A {f(r)} {f(r)} 0 1 1 {f(cx - r)} {f(cy)} Z")


def round_rect(x0, y0, x1, y1, r):
    return (f"M {f(x0 + r)} {f(y0)} H {f(x1 - r)} A {f(r)} {f(r)} 0 0 1 {f(x1)} {f(y0 + r)} "
            f"V {f(y1 - r)} A {f(r)} {f(r)} 0 0 1 {f(x1 - r)} {f(y1)} H {f(x0 + r)} "
            f"A {f(r)} {f(r)} 0 0 1 {f(x0)} {f(y1 - r)} V {f(y0 + r)} "
            f"A {f(r)} {f(r)} 0 0 1 {f(x0 + r)} {f(y0)} Z")


# ---------------------------------------------------------------------------
# Stroke font for labels (glyph box 12 x 20, y down)

FONT = {
    "S": "M 11 4 C 10 2 8.2 1 6 1 C 3.2 1 1.2 2.6 1.2 5.1 C 1.2 7.8 3.6 8.8 6 9.6 "
         "C 8.7 10.5 11 11.6 11 14.6 C 11 17.4 8.8 19 6 19 C 3.6 19 1.7 18 0.9 16",
    "T": "M 0.5 1 H 11.5 M 6 1 V 19",
    "A": "M 0.6 19 L 6 1 L 11.4 19 M 2.6 12.6 H 9.4",
    "R": "M 1.2 19 V 1 H 7 C 9.8 1 11.3 2.8 11.3 5.5 C 11.3 8.2 9.8 10 7 10 H 1.2 "
         "M 6.6 10 L 11.4 19",
    "E": "M 11 1 H 1.2 V 19 H 11 M 1.2 10 H 9.2",
    "L": "M 1.2 1 V 19 H 11",
    "C": "M 11.4 4.6 C 10.4 2.3 8.5 1 6.3 1 C 3 1 0.9 4.5 0.9 10 "
         "C 0.9 15.5 3 19 6.3 19 C 8.5 19 10.4 17.7 11.4 15.4",
}


def label_paths(text, cx, cy, height, spacing=5.5):
    """Return a list of (path, transform) pairs for centered text."""
    k = height / 20.0
    adv = 12 + spacing
    width = (len(text) * 12 + (len(text) - 1) * spacing) * k
    x = cx - width / 2
    y = cy - height / 2
    out = []
    for i, ch in enumerate(text):
        out.append((FONT[ch], f"translate({f(x + i * adv * k)} {f(y)}) scale({f(k)})"))
    return out, k


def label(s, text, cx, cy, height, stroke, pressed, color):
    pieces, k = label_paths(text, cx, cy, height)
    ink = PRESSED_INK if pressed else color
    s.sym.append(press_open(pressed))
    w = stroke / k
    for mul, a in glow_ramp(pressed):
        for d, t in pieces:
            s.sym.append(
                f'<path d="{d}" transform="{t}" fill="none" stroke="{color if not pressed else ACCENT}" '
                f'stroke-opacity="{a}" stroke-width="{f(w * mul)}" stroke-linecap="round" '
                f'stroke-linejoin="round"/>')
    for d, t in pieces:
        s.sym.append(
            f'<path d="{d}" transform="{t}" fill="none" stroke="{ink}" stroke-width="{f(w)}" '
            f'stroke-linecap="round" stroke-linejoin="round"/>')
    s.sym.append("</g>")


# ---------------------------------------------------------------------------
# Assets


def face_button(kind, pressed):
    col = FACE[kind]
    s = Svg(f"{kind}-{'pressed' if pressed else 'idle'}",
            f"{kind.capitalize()} button ({'pressed' if pressed else 'idle'})")
    glass_disc(s, 98, pressed, col)
    if kind == "triangle":
        r = 46
        pts = [(C + r * math.cos(math.radians(a)), C + 4 + r * math.sin(math.radians(a)))
               for a in (-90, 30, 150)]
        d = "M " + " L ".join(f"{f(x)} {f(y)}" for x, y in pts) + " Z"
        paths = [d]
    elif kind == "circle":
        paths = [circle_path(C, C, 38)]
    elif kind == "cross":
        a = 32
        paths = [f"M {C - a} {C - a} L {C + a} {C + a}", f"M {C + a} {C - a} L {C - a} {C + a}"]
    else:
        paths = [round_rect(C - 35, C - 35, C + 35, C + 35, 5)]
    glyph(s, paths, 11, pressed, col)
    return s


def dpad(pressed_dir=None):
    pressed = pressed_dir is not None
    state = f"{pressed_dir}-pressed" if pressed else "idle"
    s = Svg(f"dpad-{state}",
            f"D-pad ({pressed_dir + ' pressed' if pressed else 'idle'})")
    a, b, o1, o2, R, r = 89, 167, 18, 238, 20, 12
    cross = (
        f"M {a + R} {o1} H {b - R} A {R} {R} 0 0 1 {b} {o1 + R} V {a - r} "
        f"A {r} {r} 0 0 0 {b + r} {a} H {o2 - R} A {R} {R} 0 0 1 {o2} {a + R} "
        f"V {b - R} A {R} {R} 0 0 1 {o2 - R} {b} H {b + r} A {r} {r} 0 0 0 {b} {b + r} "
        f"V {o2 - R} A {R} {R} 0 0 1 {b - R} {o2} H {a + R} A {R} {R} 0 0 1 {a} {o2 - R} "
        f"V {b + r} A {r} {r} 0 0 0 {a - r} {b} H {o1 + R} A {R} {R} 0 0 1 {o1} {b - R} "
        f"V {a + R} A {R} {R} 0 0 1 {o1 + R} {a} H {a - r} A {r} {r} 0 0 0 {a} {a - r} "
        f"V {o1 + R} A {R} {R} 0 0 1 {a + R} {o1} Z"
    )
    rot = {"up": 0, "right": 90, "down": 180, "left": 270}

    # Recessed well that ties the four arms together.
    well = s.rad("well", C, C, 126, [
        (0, "#000000", 0.26), (0.82, "#000000", 0.22), (1, "#000000", 0)])
    s.bg.append(f'<circle cx="{C}" cy="{C}" r="126" fill="{well}"/>')
    s.bg.append(
        f'<circle cx="{C}" cy="{C}" r="117" fill="none" stroke="#FFFFFF" '
        f'stroke-opacity="0.08" stroke-width="1.5"/>')

    if pressed:
        glow = s.rad("armglow", C, o1 + 44, 60, [
            (0, ACCENT, 0.50), (1, ACCENT, 0)])
        s.bg.append(
            f'<g transform="rotate({rot[pressed_dir]} {C} {C})">'
            f'<circle cx="{C}" cy="{o1 + 44}" r="60" fill="{glow}"/></g>')

    glass_shape(s, cross, (o1, o1, o2, o2), False, ACCENT)

    # Concave center dimple.
    dimple = s.lin("dimple", 0, C - 18, 0, C + 18, [
        (0, "#000000", 0.40), (1, "#FFFFFF", 0.12)])
    s.bg.append(f'<circle cx="{C}" cy="{C}" r="18" fill="{dimple}"/>')
    s.bg.append(
        f'<circle cx="{C}" cy="{C}" r="18" fill="none" stroke="#FFFFFF" '
        f'stroke-opacity="0.10" stroke-width="1.5"/>')

    if pressed:
        arm = (f"M {a} {a} V {o1 + R} A {R} {R} 0 0 1 {a + R} {o1} H {b - R} "
               f"A {R} {R} 0 0 1 {b} {o1 + R} V {a} Z")
        edge = (f"M {a} {a - 4} V {o1 + R} A {R} {R} 0 0 1 {a + R} {o1} H {b - R} "
                f"A {R} {R} 0 0 1 {b} {o1 + R} V {a - 4}")
        fill = s.lin("armfill", 0, o1, 0, a + 6, [
            (0, ACCENT, 0.62), (0.7, ACCENT, 0.22), (1, ACCENT, 0)])
        s.bg.append(
            f'<g transform="rotate({rot[pressed_dir]} {C} {C})">'
            f'<path d="{arm}" fill="{fill}"/>'
            f'<path d="{edge}" fill="none" stroke="#FFFFFF" stroke-opacity="0.9" '
            f'stroke-width="3" stroke-linejoin="round"/></g>')

    # Arrows: rounded triangles pointing outward.
    arrow = f"M {C} 46 L {C + 15} 63 L {C - 15} 63 Z"
    for d, deg in rot.items():
        lit = d == pressed_dir
        ink = PRESSED_INK if lit else INK
        s.sym.append(f'<g transform="rotate({deg} {C} {C})">')
        if lit:
            s.sym.append(
                f'<path d="{arrow}" fill="{ACCENT}" fill-opacity="0.45" stroke="{ACCENT}" '
                f'stroke-opacity="0.45" stroke-width="16" stroke-linejoin="round"/>')
        s.sym.append(
            f'<path d="{arrow}" fill="{ink}" fill-opacity="{1 if lit else 0.82}" stroke="{ink}" '
            f'stroke-opacity="{1 if lit else 0.82}" stroke-width="5" stroke-linejoin="round"/>')
        s.sym.append("</g>")
    return s


def stick_ring(pressed):
    s = Svg(f"stick-ring-{'pressed' if pressed else 'idle'}",
            f"Analog stick outer ring ({'active' if pressed else 'idle'})")
    if pressed:
        halo = s.rad("halo", C, C, 128, [
            (0, ACCENT, 0), (0.80, ACCENT, 0.05), (0.88, ACCENT, 0.30), (1, ACCENT, 0)])
        s.bg.append(f'<circle cx="{C}" cy="{C}" r="128" fill="{halo}"/>')
    well = s.rad("well", C, C, 120, [
        (0, GLASS_LO, 0.30), (0.7, GLASS_LO, 0.44), (0.93, GLASS_LO, 0.62), (1, GLASS_LO, 0)])
    s.bg.append(f'<circle cx="{C}" cy="{C}" r="120" fill="{well}"/>')
    for rr, a in ((100, 0.08), (74, 0.05), (46, 0.04)):
        s.bg.append(
            f'<circle cx="{C}" cy="{C}" r="{rr}" fill="none" stroke="#FFFFFF" '
            f'stroke-opacity="{a}" stroke-width="1.5"/>')
    if pressed:
        rim = s.lin("rim", 0, 16, 0, 240, [
            (0, "#FFFFFF", 0.95), (0.5, ACCENT, 0.80), (1, ACCENT, 0.60)])
    else:
        rim = s.lin("rim", 0, 16, 0, 240, [
            (0, "#FFFFFF", 0.55), (0.5, "#FFFFFF", 0.12), (1, "#FFFFFF", 0.28)])
    s.bg.append(
        f'<circle cx="{C}" cy="{C}" r="111" fill="none" stroke="{rim}" stroke-width="3"/>')

    # Motion arcs: two sweeping trails that imply rotation around the gate.
    def arc(r, a0, a1):
        p0 = (C + r * math.cos(math.radians(a0)), C + r * math.sin(math.radians(a0)))
        p1 = (C + r * math.cos(math.radians(a1)), C + r * math.sin(math.radians(a1)))
        return p0, p1, (f"M {f(p0[0])} {f(p0[1])} A {r} {r} 0 0 1 {f(p1[0])} {f(p1[1])}")

    peak = 0.90 if pressed else 0.55
    for i, (a0, a1) in enumerate(((-155, -104), (25, 76))):
        p0, p1, d = arc(104, a0, a1)
        grad = s.lin(f"trail{i}", p0[0], p0[1], p1[0], p1[1], [
            (0, ACCENT, 0), (1, ACCENT, peak)])
        s.sym.append(
            f'<path d="{d}" fill="none" stroke="{grad}" stroke-width="5" stroke-linecap="round"/>')

    # Gate ticks.
    tick = f"M {C} 30 L {C + 9} 41 L {C - 9} 41 Z"
    ink = ACCENT if pressed else INK
    for deg in (0, 90, 180, 270):
        s.sym.append(
            f'<path d="{tick}" transform="rotate({deg} {C} {C})" fill="{ink}" '
            f'fill-opacity="{0.95 if pressed else 0.55}" stroke="{ink}" '
            f'stroke-opacity="{0.95 if pressed else 0.55}" stroke-width="3" stroke-linejoin="round"/>')
    return s


def stick_cap(pressed):
    s = Svg(f"stick-cap-{'pressed' if pressed else 'idle'}",
            f"Analog stick thumb cap ({'pressed' if pressed else 'idle'})")
    shadow = s.rad("shadow", C, C + 10, 116, [
        (0, "#000000", 0.45), (0.78, "#000000", 0.35), (1, "#000000", 0)])
    s.bg.append(f'<circle cx="{C}" cy="{C + 10}" r="116" fill="{shadow}"/>')
    if pressed:
        halo = s.rad("halo", C, C, 124, [
            (0, ACCENT, 0.40), (0.76, ACCENT, 0.40), (1, ACCENT, 0)])
        s.bg.append(f'<circle cx="{C}" cy="{C}" r="124" fill="{halo}"/>')

    s.bg.append(press_open(pressed, 0.96))
    body = s.rad("body", 104, 92, 150, [
        (0, "#5A6377" if not pressed else ACCENT, 0.86 if not pressed else 0.70),
        (0.45, "#1E2330", 0.88), (1, "#090B10", 0.92)])
    s.bg.append(f'<circle cx="{C}" cy="{C}" r="94" fill="{body}"/>')
    rim = s.lin("rim", 0, 34, 0, 222, [
        (0, "#FFFFFF", 0.95 if pressed else 0.62),
        (0.5, ACCENT if pressed else "#FFFFFF", 0.70 if pressed else 0.12),
        (1, ACCENT if pressed else "#FFFFFF", 0.55 if pressed else 0.24)])
    s.bg.append(
        f'<circle cx="{C}" cy="{C}" r="92.5" fill="none" stroke="{rim}" stroke-width="3"/>')
    # Concave thumb dish: lit from below, shaded at the top.
    dish = s.rad("dish", 142, 156, 110, [
        (0, "#2E3542", 0.90), (1, "#0E1117", 0.92)])
    s.bg.append(f'<circle cx="{C}" cy="{C}" r="66" fill="{dish}"/>')
    dish_rim = s.lin("dishrim", 0, 62, 0, 194, [
        (0, "#000000", 0.45), (1, "#FFFFFF", 0.28)])
    s.bg.append(
        f'<circle cx="{C}" cy="{C}" r="66" fill="none" stroke="{dish_rim}" stroke-width="2.5"/>')
    sheen = s.lin("sheen", 0, 34, 0, 100, [(0, "#FFFFFF", 0.22), (1, "#FFFFFF", 0)])
    s.bg.append(
        f'<path d="M 64 76 A 94 94 0 0 1 192 76 A 70 70 0 0 0 64 76 Z" fill="{sheen}"/>')
    s.bg.append("</g>")

    s.sym.append(press_open(pressed, 0.96))
    dot_ink = ACCENT if pressed else "#FFFFFF"
    for i in range(24):
        ang = math.radians(i * 15)
        x, y = C + 80 * math.cos(ang), C + 80 * math.sin(ang)
        s.sym.append(
            f'<circle cx="{f(x)}" cy="{f(y)}" r="2.6" fill="{dot_ink}" '
            f'fill-opacity="{0.75 if pressed else 0.22}"/>')
    ring = ACCENT
    s.sym.append(
        f'<circle cx="{C}" cy="{C}" r="28" fill="none" stroke="{ring}" '
        f'stroke-opacity="{0.35 if pressed else 0.16}" stroke-width="10"/>')
    s.sym.append(
        f'<circle cx="{C}" cy="{C}" r="28" fill="none" stroke="{PRESSED_INK if pressed else ring}" '
        f'stroke-opacity="{1 if pressed else 0.55}" stroke-width="3.5"/>')
    s.sym.append(
        f'<circle cx="{C}" cy="{C}" r="6" fill="{PRESSED_INK if pressed else ring}" '
        f'fill-opacity="{1 if pressed else 0.6}"/>')
    s.sym.append("</g>")
    return s


def shoulder(side, pressed):
    s = Svg(f"{side.lower()}-{'pressed' if pressed else 'idle'}",
            f"{side} shoulder button ({'pressed' if pressed else 'idle'})")
    # Outer top corner sweeps like a handheld shoulder; R mirrors L.
    d = ("M 40 186 H 216 A 22 22 0 0 0 238 164 V 94 A 22 22 0 0 0 216 72 H 92 "
         "C 50 72 18 102 18 140 V 164 A 22 22 0 0 0 40 186 Z")
    if side == "R":
        d = ("M 216 186 H 40 A 22 22 0 0 1 18 164 V 94 A 22 22 0 0 1 40 72 H 164 "
             "C 206 72 238 102 238 140 V 164 A 22 22 0 0 1 216 186 Z")
    glass_shape(s, d, (18, 72, 238, 186), pressed, ACCENT)
    # Grip line along the long edge.
    s.bg.append(
        f'<path d="M 60 172 H 196" stroke="#FFFFFF" stroke-opacity="0.10" stroke-width="2" '
        f'stroke-linecap="round"/>')
    if side == "L":
        paths = ["M 114 104 V 154 H 146"]
    else:
        paths = ["M 112 154 V 104 H 132 A 13.5 13.5 0 0 1 132 131 H 112 M 128 131 L 146 154"]
    glyph(s, paths, 11, pressed, INK, glow=ACCENT)
    return s


def pill(name, text, pressed):
    s = Svg(f"{name}-{'pressed' if pressed else 'idle'}",
            f"{text.capitalize()} button ({'pressed' if pressed else 'idle'})")
    d = round_rect(18, 90, 238, 166, 38)
    glass_shape(s, d, (18, 90, 238, 166), pressed, ACCENT)
    label(s, text, C, C, 28, 5.5, pressed, INK)
    return s


def round_icon(name, title, paths, pressed, filled=False, width=11):
    s = Svg(f"{name}-{'pressed' if pressed else 'idle'}",
            f"{title} ({'pressed' if pressed else 'idle'})")
    glass_disc(s, 98, pressed, ACCENT)
    glyph(s, paths, width, pressed, INK, glow=ACCENT, filled=filled)
    return s


def all_assets():
    out = {}
    for pressed in (False, True):
        st = "pressed" if pressed else "idle"
        for kind in FACE:
            out[f"btn_{kind}_{st}"] = face_button(kind, pressed)
        out[f"btn_l_{st}"] = shoulder("L", pressed)
        out[f"btn_r_{st}"] = shoulder("R", pressed)
        out[f"btn_start_{st}"] = pill("start", "START", pressed)
        out[f"btn_select_{st}"] = pill("select", "SELECT", pressed)
        out[f"btn_pause_{st}"] = round_icon(
            "pause", "Pause button",
            [round_rect(100, 94, 116, 162, 3), round_rect(140, 94, 156, 162, 3)],
            pressed, filled=True, width=5)
        out[f"btn_menu_{st}"] = round_icon(
            "menu", "Menu button",
            ["M 94 100 H 162", "M 94 128 H 162", "M 94 156 H 162"], pressed)
        out[f"stick_ring_{st}"] = stick_ring(pressed)
        out[f"stick_cap_{st}"] = stick_cap(pressed)
    out["dpad_idle"] = dpad()
    for d in ("up", "down", "left", "right"):
        out[f"dpad_{d}_pressed"] = dpad(d)
    return out


def main():
    here = os.path.dirname(os.path.abspath(__file__))
    out_dir = sys.argv[1] if len(sys.argv) > 1 else os.path.normpath(
        os.path.join(here, "..", "..", "android", "touch_skin", "svg"))
    os.makedirs(out_dir, exist_ok=True)
    assets = all_assets()
    for name, svg in sorted(assets.items()):
        with open(os.path.join(out_dir, name + ".svg"), "w", encoding="utf-8", newline="\n") as fh:
            fh.write(svg.render())
    print(f"wrote {len(assets)} SVGs to {out_dir}")


if __name__ == "__main__":
    main()
