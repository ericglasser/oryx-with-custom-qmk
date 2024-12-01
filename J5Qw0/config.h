/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

#define ORYX_CONFIGURATOR
#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 15

#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY 100

#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 8

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 12

#undef MOUSEKEY_WHEEL_MAX_SPEED
#define MOUSEKEY_WHEEL_MAX_SPEED 15

#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX 49

#define CAPS_LOCK_STATUS
#define FIRMWARE_VERSION u8"J5Qw0/EjEBv"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT
#define COMBO_COUNT 2

#define TAPPING_TERM_PER_KEY
#define RGB_MATRIX_STARTUP_SPD 60

