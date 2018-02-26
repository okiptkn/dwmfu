# dwmfu

custom build of dwm forked from the suckless repo https://dwm.suckless.org/
- reminder that fu stands for forked by nub, so know what you might want to expect from this custom build

## Requirements
In order to build dwm you need the Xlib header files.
mpd for mpdcontrol support

## patches
patches used on this custom are as follows :
* dwm-6.1-pertag_without_bar.diff
* dwm-center-6.1.diff
* dwm-centeredmaster-6.1.diff
* dwm-deck-20170909-ceac8c9.diff
* dwm-movestack-6.1.diff
* dwm-r1615-mpdcontrol.diff
* dwm-scratchpad-20170207-bb3bd6f.diff
* dwm-uselessgap-6.1.diff
* rounded corners patch (c)MitchWeaver

### installation
[README](dwm-README)

Edit config.mk and config.h to match your local setup (dwm is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dwm (if
necessary as root):

```
    make clean install
```
and put `exec dwm` on the last line of your `~/.xinitrc`
- note : PKGBUILD is also included in case you want to build a package, edit it to suits your setup, and make sure you clean up the previous dwm installation if exist

### usage
everything should be written on the config.h

### about rounded patch
you can set up in which rounded corner should applied on the opened window by issuing `isfloating` and/or `iscentered` rules in config.h
quirks and behaviour you might expect :
* case round_all=0
    - no rules means window is `not-rounded`
    - `floating` means window is `rounded`
    - `centered` means flexible, rounded on/with mouse resize (causes windows won't be able to autoresize properly when changing layouts after the rounded corners applied)
    - `floating` + `centered` means window is `not-rounded` (use this in case you need to toggle between floating and fullscreen window like mpv, sxiv, etc)

* case round_all=1
    - everythings will be rounded (it also draws rounded corners in a fullscreen window resulting in ugly corners)

## license
Original dwm license - see the [LICENSE](LICENSE) file for details

## sauce
* suckless.org
* [MitchWeaver's rounded patch](https://github.com/MitchWeaver/dotfiles/blob/8d76e479715e7fa7b4df153719d3d25144f9f7f2/suckless-tools/dwm/dwm/dwm.c#L938)

