# mdk's WhiteFox layout

## Features

- Base Layers
    - QWERTY
- Space cadet
- Swap ctrl alt
- Swap caps esc
- Caps -> Alt + esc
- Mouse Keys

## Building and flashing
1. Clone with:

   ```
   git clone --recurse-submodules https://github.com/qmk/qmk_firmware.git
   ```

2. build with docker

   ```
   ./util/docker_build.sh whitefox:mdk
   ```

3. Put your board in DFU mode with either the button on the bottom, or with a software key in your current firmware

4. Flash:

   ```
   $ sudo dfu-util --list

   $ sudo dfu-util -D whitefox_mdk.bin
   dfu-util 0.9
   ```
