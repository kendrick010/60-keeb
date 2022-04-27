#pragma once

#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    kendrick010

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

#define MATRIX_ROW_PINS { F1 F0 E6 C7 B7 }
#define MATRIX_COL_PINS { D1 D2 D3 B4 B5 B6 C6 D4 D6 D7 F4 F5 F6 F7 }

#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define USB_MAX_POWER_CONSUMPTION 300

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 10

// Workaround for freezing after MacOS sleep
#define NO_USB_STARTUP_CHECK

#define TAPPING_TERM_PER_KEY

#define TAPPING_TOGGLE 2

#define NO_MUSIC_MODE


