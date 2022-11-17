# dwmblocks
[original source](https://github.com/torrinfail/dwmblocks)

## C modules

First you need to compile:
```
cd modules
make
```
Then you need to add the binaries to your path e.g.
```
export PATH=$PATH:$HOME/suckless/dwmblocks/modules/bin
```

## Colors

My dwm is patched with [status2d](https://dwm.suckless.org/patches/status2d/):
### Usage:
- ^rx,y,w,h^ Draw a rectangle of width w and height h, with its top left corner at (x,y) relative the X drawing cursor.
- ^c#FF0000^ Set foreground color.
- ^b#55cdfc^ Set background color, only applies to text, simply use the ^r^ command to change the background while drawing.
- ^f<px>^ Forward the X drawing cursor by <px> pixel. Please bear in mind that you have to move the cursor enough to display your drawing (by the with of your drawing).
- ^d^ Reset colors to SchemeNorm.
- ^w^ Swaps the current foreground/background colors. Useful when drawing multiple rectangles on top of one another. Requires the swap-save-restore sub-patch above.
- ^v^ Saves the current color scheme so it can be restored later with the ^t^ tag. This way a script can modify color in the middle of the bar agnostic to what color was set previously. Requires the swap-save-restore sub-patch above.
- ^t^ Restores the last color scheme saved by the ^v^ tag. Requires the swap-save-restore sub-patch above.

