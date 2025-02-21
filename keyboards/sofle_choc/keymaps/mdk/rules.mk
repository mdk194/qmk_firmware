# MCU name
MCU = RP2040
BOOTLOADER = rp2040

SPLIT_KEYBOARD = yes
SERIAL_DRIVER = vendor
SWAP_HANDS_ENABLE = yes

ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = yes
BOOTMAGIC_ENABLE = no
TAP_DANCE_ENABLE = no
CAPS_WORD_ENABLE = yes
COMBO_ENABLE = yes
EXTRAKEY_ENABLE = yes       # Audio control and System control
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
SEND_STRING_ENABLE = yes
MOUSEKEY_ENABLE = yes
DEBOUNCE_TYPE = sym_defer_pr

LTO_ENABLE      = no
