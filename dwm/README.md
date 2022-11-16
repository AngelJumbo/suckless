# dwm

A somewhat patched dwm build.

## Patches 

- actualfullscreen
- alwayscenter
- attchbottom
- cyclelayouts
- fixborders(fix borders for transparent windows)
- pertag
- push 
- scratchpad
- status2d + systray
- vanitygaps + layouts(tile, bstack, bstackhoriz, centeredmaster, centeredfloatingmaster, deck, fibonacci (dwindle, spiral), grid, nrowgrid)
- warp

[Sources](https://github.com/AngelJumbo/suckless/tree/main/dwm/patches)

## systray shadow

If you are using shadows from your compositor you need to add a exclude the dwmsystray class to get rid of the systray shadow .


picom.conf

```
shadow-exclude = [
   ...
    "class_g = 'dwmsystray'",
   ...
];

```
[solution source](https://github.com/bakkeby/dwm-flexipatch/discussions/134)
