# MCU name
MCU = MK20DX256

# Bootloader selection
BOOTLOADER = kiibohd

# Board: it should exist either in <chibios>/os/hal/boards/
#  or <this_dir>/boards
# - BOARD =
#   - PJRC_TEENSY_LC for Teensy LC
#   - PJRC_TEENSY_3 for Teensy 3.0
#   - PJRC_TEENSY_3_1 for Teensy 3.1 or 3.2
#   - MCHCK_K20 for Infinity KB
BOARD = IC_TEENSY_3_1

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           # USB Nkey Rollover
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no
TAP_DANCE_ENABLE = no
CAPS_WORD_ENABLE = yes
BACKLIGHT_DRIVER = custom
VISUALIZER_ENABLE = no
LTO_ENABLE = yes

LED_DRIVER = is31fl3731c
LED_WIDTH = 16
LED_HEIGHT = 5

LAYOUTS = 65_ansi_blocker

# Enter lower-power sleep mode when on the ChibiOS idle thread
# OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

DEBOUNCE_TYPE = sym_defer_g
