#include QMK_KEYBOARD_H
#include "keymap_uk.h"

enum sofle_layers {
    _QWERTY,
    _UPPER,
    _SYMBOL,
    _EXTRA,
};

enum custom_keycodes {
    KC_MIC_MUTE = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | Del  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | '    |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCtrl |   A  |   S  |   D  |   F  |   G  |--------.  ,--------|   H  |   J  |   K  |   L  |   ;  | Ent  |
 * |------+------+------+------+------+------|  MPLY  |  |MIC_MUTE|------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |--------|  |--------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LAlt | LGUI |Space |UPPER | /SYMBOL /       \BSpace\  |Space |EXTRA | RAlt | XXXX |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_QWERTY] = LAYOUT(
  KC_ESCAPE,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_DELETE,
  KC_TAB,      KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_QUOTE,
  KC_LCTRL,    KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_ENT,
  KC_LSHIFT,   KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,KC_MPLY, KC_MIC_MUTE,KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSHIFT,
            KC_LALT,KC_LGUI,KC_SPACE,LM(_UPPER,MOD_LSFT),MO(_SYMBOL),KC_BSPACE,KC_SPACE,MO(_EXTRA), KC_RALT, XXXXXXX
),

/* UPPER
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |      | XXXX | XXXX | XXXX | XXXX | XXXX |                    | XXXX | XXXX | XXXX | XXXX | XXXX |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      | XXXX |      |
 * |------+------+------+------+------+------|        |    |       |------+------+------+------+------+------|
 * | XXXX |      |      |      |      |      |-------|    |-------|      |      | XXXX | XXXX | XXXX |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /       /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_UPPER] = LAYOUT(
  _______, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
  _______, _______,  _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______,  _______, _______, _______, _______,                      _______, _______, _______, _______, XXXXXXX, _______,
  XXXXXXX, _______,  _______, _______, _______, _______, _______,    _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                     _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
),

/* SYMBOL
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      | F1   | F2   | F3   | F4   | F5   |                    | F6   | F7   | F8   | F9   | F10  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | euro | XXXX | #    | *    | ^    |                    | &    | <    | (    | )    | >    | "    |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | !    | @    | £    | %    | $    |-------.    ,-------| -    | +    | {    | }    | :    |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      | `    | ~    | XXXX | XXXX | |    |-------|    |-------| _    | =    | [    | ]    | ?    | \    |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /       /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_SYMBOL] = LAYOUT(
  _______, KC_F1  ,  KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                      KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , _______,
  _______, UK_EURO,  XXXXXXX, UK_HASH, KC_ASTR, KC_CIRC,                      KC_AMPR, KC_LABK, KC_LPRN, KC_RPRN, KC_RABK, UK_DQUO,
  _______, KC_EXLM,  UK_AT  , UK_PND , KC_PERC, KC_DLR ,                      KC_MINUS,KC_PLUS, KC_LCBR, KC_RCBR, KC_COLN, _______,
  _______, UK_GRV ,  UK_TILD, XXXXXXX, XXXXXXX, UK_PIPE, _______,    _______, KC_UNDS, KC_EQUAL,KC_LBRACKET,KC_RBRACKET,KC_QUES,UK_BSLS,
                     _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
),

/* EXTRA
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      | F11  | F12  | F13  | F14  | F15  |                    | F16  | F17  | F18  | F19  | F20  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | XXXX | XXXX | XXXX | XXXX | XXXX |                    | XXXX | XXXX | XXXX | XXXX |PScrn |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | XXXX | XXXX | XXXX | XXXX | XXXX |-------.    ,-------| Left | Down | Up   |Right | XXXX |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      | XXXX | XXXX | XXXX | XXXX | XXXX |-------|    |-------| XXXX | XXXX | XXXX | XXXX | XXXX |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      | XXXX | / XXXX  /       \ XXXX \  | XXXX |      |      | XXXX |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_EXTRA] = LAYOUT(
  _______, KC_F11,   KC_F12,  KC_F13,  KC_F14,  KC_F15,                       KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  _______,
  _______, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PSCREEN,_______,
  _______, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN, KC_UP  , KC_RIGHT,XXXXXXX, _______,
  _______, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                     _______, _______, _______, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, _______, _______, XXXXXXX
),
};

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

typedef enum {
    MEDIA_ANIM_PLAY_PAUSE = 1,
    MEDIA_ANIM_NEXT,
    MEDIA_ANIM_PREV,
} media_anim_type_t;

uint32_t media_anim_timer = 0;
uint8_t media_anim_frame = 0;
media_anim_type_t media_anim_type = 0;

static uint32_t media_anim_duration[3] = { 30, 60, 90 };

static void media_anim_init(media_anim_type_t type) {
    media_anim_timer = timer_read32();
    media_anim_frame = 0;
    media_anim_type = type;
}

static void media_anim_reset(void) {
    media_anim_timer = 0;
    media_anim_frame = 0;
    media_anim_type = 0;
}

static bool media_animate(void) {
    if (media_anim_type != 0) {
        // Print the top (blank) border
        oled_write_P(PSTR("     "), false);

        for (uint8_t row = 0; row < 3; ++row) {
            // Print the left border for this row
            oled_write_P(PSTR(" "), false);

            // Print the actual frame contents for this row
            char str[2];
            str[0] = 0x80 + (0x09 * (media_anim_type - 1)) + (0x03 * media_anim_frame) + (0x20 * row);
            str[1] = '\0';
            oled_write(str, false);
            str[0] += 1;
            oled_write(str, false);
            str[0] += 1;
            oled_write(str, false);

            // Print the right border for this row
            oled_write_P(PSTR(" "), false);
        }

        // Print the bottom (blank) border
        oled_write_P(PSTR("     "), false);

        // Change frame if the current frame's time has expired.
        if (timer_elapsed32(media_anim_timer) > media_anim_duration[media_anim_frame]) {
            media_anim_frame += 1;

            // Figure out if we should be going to the next frame or resetting
            // the animation.
            if (media_anim_frame < 3) {
                media_anim_timer = timer_read32();
            } else {
                media_anim_reset();
            }
        }

        return true;
    } else {
        return false;
    }
}

// Luna from https://github.com/HellSingCoder/qmk_firmware/blob/master/keyboards/sofle/keymaps/helltm/keymap.c

#define LUNA_MIN_WALK_SPEED 10
#define LUNA_MIN_RUN_SPEED  80

#define LUNA_ANIM_FRAME_DURATION 200  // how long each frame lasts in ms
#define LUNA_ANIM_SIZE           96   // number of bytes in array. If you change sprites, minimize for adequate firmware size. max is 1024

uint32_t luna_anim_timer = 0;

uint8_t luna_current_frame = 0;

int luna_current_wpm = 0;

bool luna_is_barking  = false;
bool luna_is_sneaking = false;
bool luna_is_jumping  = false;
bool luna_showed_jump = true;

static void luna_animate(int LUNA_X, int LUNA_Y) {
    /* Sit */
    static const char PROGMEM sit[2][LUNA_ANIM_SIZE] = {
        /* 'sit1', 32x22px */
        {
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1c,
            0x02, 0x05, 0x02, 0x24, 0x04, 0x04, 0x02, 0xa9,
            0x1e, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x10,
            0x08, 0x68, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x82,
            0x7c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02,
            0x04, 0x0c, 0x10, 0x10, 0x20, 0x20, 0x20, 0x28,
            0x3e, 0x1c, 0x20, 0x20, 0x3e, 0x0f, 0x11, 0x1f,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        },

        /* 'sit2', 32x22px */
        {
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1c,
            0x02, 0x05, 0x02, 0x24, 0x04, 0x04, 0x02, 0xa9,
            0x1e, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x90, 0x08,
            0x18, 0x60, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0e, 0x82,
            0x7c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02,
            0x04, 0x0c, 0x10, 0x10, 0x20, 0x20, 0x20, 0x28,
            0x3e, 0x1c, 0x20, 0x20, 0x3e, 0x0f, 0x11, 0x1f,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        },
    };

    /* Walk */
    static const char PROGMEM walk[2][LUNA_ANIM_SIZE] = {
        /* 'walk1', 32x22px */
        {
            0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20,
            0x10, 0x90, 0x90, 0x90, 0xa0, 0xc0, 0x80, 0x80,
            0x80, 0x70, 0x08, 0x14, 0x08, 0x90, 0x10, 0x10,
            0x08, 0xa4, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0xfc,
            0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,
            0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
            0x18, 0xea, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
            0x1c, 0x20, 0x20, 0x3c, 0x0f, 0x11, 0x1f, 0x03,
            0x06, 0x18, 0x20, 0x20, 0x3c, 0x0c, 0x12, 0x1e,
            0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        },

        /* 'walk2', 32x22px */
        {
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40,
            0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00,
            0x00, 0xe0, 0x10, 0x28, 0x10, 0x20, 0x20, 0x20,
            0x10, 0x48, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x20, 0xf8,
            0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
            0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10,
            0x30, 0xd5, 0x20, 0x1f, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f,
            0x20, 0x30, 0x0c, 0x02, 0x05, 0x09, 0x12, 0x1e,
            0x02, 0x1c, 0x14, 0x08, 0x10, 0x20, 0x2c, 0x32,
            0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        },
    };

    /* Run */
    static const char PROGMEM run[2][LUNA_ANIM_SIZE] = {
        /* 'run1', 32x22px */
        {
            0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x08, 0x08,
            0xc8, 0xb0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
            0x80, 0x40, 0x40, 0x3c, 0x14, 0x04, 0x08, 0x90,
            0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0xc4, 0xa4,
            0xfc, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
            0xc8, 0x58, 0x28, 0x2a, 0x10, 0x0f, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x09, 0x04,
            0x04, 0x04, 0x04, 0x02, 0x03, 0x02, 0x01, 0x01,
            0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32,
            0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
        },

        /* 'run2', 32x22px */
        {
            0x00, 0x00, 0x00, 0xe0, 0x10, 0x10, 0xf0, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
            0x80, 0x80, 0x78, 0x28, 0x08, 0x10, 0x20, 0x30,
            0x08, 0x10, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11,
            0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
            0x10, 0xb0, 0x50, 0x55, 0x20, 0x1f, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28, 0x37,
            0x02, 0x1e, 0x20, 0x20, 0x18, 0x0c, 0x14, 0x1e,
            0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        },
    };

    /* Bark */
    static const char PROGMEM bark[2][LUNA_ANIM_SIZE] = {
        /* 'bark1', 32x22px */
        {
            0x00, 0xc0, 0x20, 0x10, 0xd0, 0x30, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40,
            0x3c, 0x14, 0x04, 0x08, 0x90, 0x18, 0x04, 0x08,
            0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01,
            0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x80, 0xc8, 0x48, 0x28,
            0x2a, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
            0x02, 0x0c, 0x10, 0x20, 0x28, 0x37, 0x02, 0x02,
            0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05,
            0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        },

        /* 'bark2', 32x22px */
        {
            0x00, 0xe0, 0x10, 0x10, 0xf0, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40,
            0x40, 0x2c, 0x14, 0x04, 0x08, 0x90, 0x18, 0x04,
            0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01,
            0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x48,
            0x28, 0x2a, 0x10, 0x0f, 0x20, 0x4a, 0x09, 0x10,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
            0x02, 0x0c, 0x10, 0x20, 0x28, 0x37, 0x02, 0x02,
            0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05,
            0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        },
    };

    /* Sneak */
    static const char PROGMEM sneak[2][LUNA_ANIM_SIZE] = {
        /* 'sneak1', 32x22px */
        {
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40,
            0x40, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0xc0, 0x40, 0x40, 0x80, 0x00, 0x80,
            0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x1e, 0x21, 0xf0, 0x04,
            0x02, 0x02, 0x02, 0x02, 0x03, 0x02, 0x02, 0x04,
            0x04, 0x04, 0x03, 0x01, 0x00, 0x00, 0x09, 0x01,
            0x80, 0x80, 0xab, 0x04, 0xf8, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c,
            0x20, 0x20, 0x3c, 0x0f, 0x11, 0x1f, 0x02, 0x06,
            0x18, 0x20, 0x20, 0x38, 0x08, 0x10, 0x18, 0x04,
            0x04, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00,
        },

        /* 'sneak2', 32x22px */
        {
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40,
            0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0xe0, 0xa0, 0x20, 0x40, 0x80, 0xc0,
            0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x3e, 0x41, 0xf0, 0x04,
            0x02, 0x02, 0x02, 0x03, 0x02, 0x02, 0x02, 0x04,
            0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00,
            0x40, 0x40, 0x55, 0x82, 0x7c, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x20,
            0x30, 0x0c, 0x02, 0x05, 0x09, 0x12, 0x1e, 0x04,
            0x18, 0x10, 0x08, 0x10, 0x20, 0x28, 0x34, 0x06,
            0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
        },
    };

    /* animation */
    void animate_luna(void) {
        /* jump */
        if (luna_is_jumping || !luna_showed_jump) {
            /* clear */
            oled_set_cursor(LUNA_X, LUNA_Y + 2);
            oled_write("     ", false);

            oled_set_cursor(LUNA_X, LUNA_Y - 1);

            luna_showed_jump = true;
        } else {
            /* clear */
            oled_set_cursor(LUNA_X, LUNA_Y - 1);
            oled_write("     ", false);

            oled_set_cursor(LUNA_X, LUNA_Y);
        }

        /* switch frame */
        luna_current_frame = (luna_current_frame + 1) % 2;

        /* current status */
        if (luna_is_barking || get_highest_layer(layer_state) == _UPPER) {
            oled_write_raw_P(bark[abs(1 - luna_current_frame)], LUNA_ANIM_SIZE);

        } else if (luna_current_wpm <= LUNA_MIN_WALK_SPEED) {
            oled_write_raw_P(sit[abs(1 - luna_current_frame)], LUNA_ANIM_SIZE);

        } else if (luna_is_sneaking) {
            oled_write_raw_P(sneak[abs(1 - luna_current_frame)], LUNA_ANIM_SIZE);

        } else if (luna_current_wpm <= LUNA_MIN_RUN_SPEED) {
            oled_write_raw_P(walk[abs(1 - luna_current_frame)], LUNA_ANIM_SIZE);

        } else {
            oled_write_raw_P(run[abs(1 - luna_current_frame)], LUNA_ANIM_SIZE);
        }
    }

    /* animation timer */
    if (timer_elapsed32(luna_anim_timer) > LUNA_ANIM_FRAME_DURATION) {
        luna_anim_timer = timer_read32();
        animate_luna();
    }
}

static void print_left_oled(void) {
    oled_write_ln("LAYER", false); // 0..=1
    oled_write("Alpha", get_highest_layer(layer_state) == _QWERTY); // 2
    oled_write("Upper", get_highest_layer(layer_state) == _UPPER); // 3
    oled_write("Symbs", get_highest_layer(layer_state) == _SYMBOL); // 4
    oled_write_ln("Extra", get_highest_layer(layer_state) == _EXTRA); // 5..=6
    oled_write_ln("  WPM", false); // 7..=8
    oled_write("  ", false); oled_write_ln(get_u8_str(get_current_wpm(), ' '), false); // 9..=10

    // Print animation frame on rows 11..=15 (if one is active).
    if (!media_animate()) {
        // If one wasn't active, render luna.
        luna_animate(0, 12);
    }
}

static const int graph_symbols[9] = {
    0x20, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 0xBB, 0xBC, 0xBD,
};

static uint8_t graph[5] = {
    0, 0, 0, 0, 0
};

#define GRAPH_MOVE_INTERVAL 200

uint32_t graph_timer = 0;

static void print_right_oled(void) {
    int wpm = get_current_wpm();

    if (timer_elapsed32(graph_timer) > GRAPH_MOVE_INTERVAL) {
        graph_timer = timer_read32();
        for (int i = 1; i < 5; ++i) {
            graph[i - 1] = graph[i];
        }

        if (wpm > 255) {
            // lol. lmao
            graph[4] = 255;
        } else {
            graph[4] = wpm;
        }

        char str[2] = " ";
        uint8_t offset = 240;

        for (uint8_t row = 0; row < 16; ++row) {
            for (uint8_t col = 0; col < 5; ++col) {
                if (graph[col] > offset + 8) {
                    str[0] = graph_symbols[8];
                } else if (graph[col] > offset) {
                    uint8_t val = (graph[col] - offset) / 2;
                    str[0] = graph_symbols[val];
                } else {
                    str[0] = graph_symbols[0];
                }

                if (row == 15 && str[0] == graph_symbols[0]) {
                    str[0] = graph_symbols[1];
                }

                if (row == 0 && col == 2) {
                    oled_write("W", false);
                } else if (row == 0 && col == 3) {
                    oled_write("P", false);
                } else if (row == 0 && col == 4) {
                    oled_write("M", false);
                } else {
                    oled_write(str, false);
                }
            }

            offset -= 16;
        }
    }
}

uint32_t sleep_timer = 0;

bool oled_task_user(void) {
    // Reset the sleep timer if various things have happened.
    bool reset_sleep = false;

    luna_current_wpm = get_current_wpm();

    if (luna_current_wpm > 0) reset_sleep = true;
    if (get_highest_layer(layer_state) != _QWERTY) reset_sleep = true;

    if (reset_sleep) {
        sleep_timer = timer_read32();
    }

    if (timer_elapsed32(sleep_timer) > OLED_TIMEOUT) {
        if (is_keyboard_master()) oled_off();
    } else {
        if (is_keyboard_master()) {
            oled_on();
            print_left_oled();
        } else {
            print_right_oled();
        }
    }

    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    sleep_timer = timer_read32();

    switch (keycode) {
        case KC_MPLY:
            if (record->event.pressed) {
                media_anim_init(MEDIA_ANIM_PLAY_PAUSE);
            }
            return true;
        case KC_MIC_MUTE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LSFT));
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_K);
            } else {
                unregister_mods(mod_config(MOD_LSFT));
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_K);
            }
            return false;
        case KC_LSHIFT:
        case KC_RSHIFT:
            if (record->event.pressed) {
                luna_is_barking = true;
            } else {
                luna_is_barking = false;
            }
        case KC_LCTL:
        case KC_RCTL:
            if (record->event.pressed) {
                luna_is_sneaking = true;
            } else {
                luna_is_sneaking = false;
            }
            break;
        case KC_ESC:
            if (record->event.pressed) {
                luna_is_jumping = true;
                luna_showed_jump = false;
            } else {
                luna_is_jumping = false;
            }
            break;
    }
    return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    sleep_timer = timer_read32();

    switch(get_highest_layer(layer_state|default_layer_state)) {
    case _QWERTY:
    case _UPPER:
    case _EXTRA:
        if (index == 0) {
            if (clockwise) {
                tap_code(KC_MNXT);
                media_anim_init(MEDIA_ANIM_NEXT);
            } else {
                tap_code(KC_MPRV);
                media_anim_init(MEDIA_ANIM_PREV);
            }
        } else if (index == 1) {
            if (clockwise) {
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_VOLD);
            }
        }
        break;
    case _SYMBOL:
        if (index == 0) {
            if (clockwise) {
                tap_code(KC_MNXT);
            } else {
                tap_code(KC_MPRV);
            }
        } else if (index == 1) {
            if (clockwise) {
                // Tap Super+Shift+I to increase Spotify volume (on Linux, at least).
                register_mods(mod_config(MOD_LSFT));
                register_mods(mod_config(MOD_LGUI));
                tap_code(KC_I);
                unregister_mods(mod_config(MOD_LSFT));
                unregister_mods(mod_config(MOD_LGUI));
            } else {
                // Tap Super+Shift+O to decrease Spotify volume.
                register_mods(mod_config(MOD_LSFT));
                register_mods(mod_config(MOD_LGUI));
                tap_code(KC_O);
                unregister_mods(mod_config(MOD_LSFT));
                unregister_mods(mod_config(MOD_LGUI));
            }
        }
        break;
    }
    return true;
}
