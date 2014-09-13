s-torrent
=========

![ Normaly, this would be a screenshot ] ( https://i.imgur.com/Ay50Xb7.png )

A simple torrent-client in C++ using libtorrent-rasterbar

This project is just getting started, so please don't expect a fully feature-complete
torrent client just yet.

###This project uses:
* [libtorrent-rasterbar](http://www.rasterbar.com/products/libtorrent/) for everything torrent related
* [ncurses](https://www.gnu.org/software/ncurses/) for the interface
* [jsoncpp](https://github.com/open-source-parsers/jsoncpp) for JSON-parsing, which is used for network-communication
* The event system code from [2D-engine](https://github.com/firecoders/2D-engine), which is used in the daemon
* The files from [here](http://www.adp-gmbh.ch/cpp/common/base64.html), for base64 en- and decoding

###Licensing:
* s-torrent is licensed under the MIT License ( LICENSE )
* libtorrent-rasterbar is licensed under the BSD License ( licenses/BSD_LICENSE )
* ncurses is licensed under the X11 License ( licenses/X11_LICENSE )
* jsoncpp is licensed under the MIT License ( licenses/MIT_LICENSE )
* 2D-engine is licensed under the MIT License ( licenses/MIT_LICENSE or at the top of every file )
* The licenses to base64.h and base64.cpp can be found at the top of the files
