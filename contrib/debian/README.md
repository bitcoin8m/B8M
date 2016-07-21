
Debian
====================
This directory contains files used to package bitcoin8md/bitcoin8m-qt
for Debian-based Linux systems. If you compile bitcoin8md/bitcoin8m-qt yourself, there are some useful files here.

## bitcoin8m: URI support ##


bitcoin8m-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bitcoin8m-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bitcoin8m-qt binary to `/usr/bin`
and the `../../share/pixmaps/bitcoin8m128.png` to `/usr/share/pixmaps`

bitcoin8m-qt.protocol (KDE)

