# mdk's WhiteFox layout

## Features

- Base Layers
    - QWERTY
- combo
    - er -> left
    - cv -> right
    - ui -> up
    - m, -> down

    - df -> capwords
    - jk -> enter

    - rt -> left_parenthesis
    - fg -> left_bracket
    - vb -> left_curly_brace
    - yu -> right_parenthesis
    - hj -> right_bracket
    - nm -> right_curly_brace

- Swap ctrl alt
- Caps -> Alt + esc
- Mouse Keys

## Building and flashing
1. Clone with:

   ```
   git clone --recurse-submodules https://github.com/qmk/qmk_firmware.git
   ```

2. build:
   - with docker or `make` at root repo

    ```
    ./util/docker_build.sh whitefox:mdk
    ```

  - or `make` at root repo

    ```
    make input_club/whitefox:mdk
    ```

3. Put your board in DFU mode with the button on the bottom

4. Flash:

   ```
   $ sudo dfu-util --list

   $ sudo dfu-util -D whitefox_mdk.bin
   dfu-util 0.9

   # or with make
   make input_club/whitefox:mdk:flash
   ```
