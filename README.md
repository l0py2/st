# st - simple terminal

st is a simple terminal emulator for X which sucks less.


## Requirements

In order to build st you need the Xlib header files.


## Installation

Edit config.mk to match your local setup (st is installed into the /usr/local namespace by default).

Afterwards enter the following command to build and install st (if necessary as root):

```sh
make clean install
```


## Running st
	
If you did not install st with make clean install, you must compile the st terminfo entry with the following command:

```sh
tic -sx st.info
```

See the man page for additional details.


## Credits

Based on Aurélien APTEL <aurelien dot aptel at gmail dot com> bt source code.


## Applied patches

- [desktopentry](https://st.suckless.org/patches/desktopentry/st-desktopentry-0.8.5.diff)
- [anysize](https://st.suckless.org/patches/anysize/st-expected-anysize-0.9.diff)
- [scrollback](https://st.suckless.org/patches/scrollback/st-scrollback-20210507-4536f46.diff)
- [scrollback](https://st.suckless.org/patches/scrollback/st-scrollback-mouse-20220127-2c5edf2.diff)
- [scrollback](https://st.suckless.org/patches/scrollback/st-scrollback-mouse-altscreen-20220127-2c5edf2.diff)
