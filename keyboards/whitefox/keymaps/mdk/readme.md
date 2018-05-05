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

1. Put your board in DFU mode with either the button on the bottom, or with a software key in your current firmware
1. Flash:
    ```bash
    $ make git-submodule
    $ make whitefox:mdk:dfu-util
    ```
