#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
#define SPLIT_USB_DETECT
#define ENCODER_DIRECTION_FLIP
#define UNICODE_SELECTED_MODES UC_LNX

#ifdef OLED_ENABLE
  #define OLED_FONT_H "users/maddiemort/glcdfont.c"
  #define OLED_TIMEOUT 5000
#endif

#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_WPM_ENABLE
#define SPLIT_OLED_ENABLE
