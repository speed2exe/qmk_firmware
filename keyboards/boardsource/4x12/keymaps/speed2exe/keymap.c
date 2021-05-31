#include QMK_KEYBOARD_H

enum layers {
    _MAIN,
    _EXTENDED,
    _NAV,
    _FN,
    _EXTRA,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_MAIN] = LAYOUT_ortho_4x12(
        KC_TAB,        KC_W,         KC_L,         KC_R,         KC_B,                  KC_Z,     KC_SCLN, KC_Q,                  KC_U,         KC_D,         KC_J,         KC_BSPC,
        KC_GESC,       LCTL_T(KC_S), LALT_T(KC_H), LGUI_T(KC_N), LSFT_T(KC_T),          KC_COMM,  KC_DOT,  RSFT_T(KC_A),          RGUI_T(KC_E), RALT_T(KC_O), RCTL_T(KC_I), KC_QUOT,
        TO(_EXTENDED), KC_F,         KC_M,         KC_V,         KC_C,                  KC_SLSH,  KC_G,    KC_P,                  KC_X,         KC_K,         KC_Y,         KC_ENT ,
        KC_LCTL,       KC_LGUI,      KC_LALT,      KC_LSFT,      LT(_EXTENDED, KC_SPC), TO(_NAV), TO(_FN), LT(_EXTENDED, KC_SPC), KC_RSFT,      KC_RALT,      KC_RGUI,      KC_RCTL
    ),

    [_EXTENDED] = LAYOUT_ortho_4x12(
        KC_TAB,    KC_EXLM,      KC_AT,        KC_HASH,      KC_DLR,             KC_PERC,  KC_CIRC,    KC_AMPR,            KC_ASTR,      KC_UNDS,    KC_PLUS,      KC_BSPC,
        TO(_MAIN), LCTL_T(KC_1), LALT_T(KC_2), LGUI_T(KC_3), LSFT_T(KC_4),       KC_5,     KC_6,       RSFT_T(KC_7),       RGUI_T(KC_8), RALT(KC_9), RCTL_T(KC_0), KC_GRV,
        KC_CAPS,   KC_LCBR,      KC_RCBR,      KC_LBRC,      KC_RBRC,            KC_BSLS,  KC_PIPE,    KC_LPRN,            KC_RPRN,      KC_MINS,    KC_EQL,       KC_ENT,
        _______,   _______,      _______,      _______,      LT(_EXTRA, KC_SPC), TO(_NAV), TO(_FN),    LT(_EXTRA, KC_SPC), _______,      _______,    _______,      _______
    ),

    [_NAV] = LAYOUT_ortho_4x12(
        XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, KC_INS,  KC_BSPC,
        TO(_MAIN),     KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, KC_DEL,
        TO(_EXTENDED), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, KC_ENT,
        _______,       _______, _______, _______, _______, _______, TO(_FN), _______, _______, _______, _______, _______
    ),

    [_FN] = LAYOUT_ortho_4x12(
        XXXXXXX,       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    XXXXXXX, KC_BRIU, KC_BRID, KC_VOLU, KC_VOLD, KC_MUTE,
        TO(_MAIN),     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   XXXXXXX, KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL, XXXXXXX,
        TO(_EXTENDED), KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______,       _______, _______, _______, _______, TO(_NAV), XXXXXXX, _______, _______, _______, _______, _______
    ),

    [_EXTRA] = LAYOUT_ortho_4x12(
        KC_TAB,  KC_W,    KC_L,    KC_R,    KC_B,   KC_Z,     KC_SCLN, KC_Q,   KC_U,     KC_D,   KC_J,    KC_BSPC,
        KC_GESC, KC_S,    KC_H,    KC_N,    KC_T,   KC_COMM,  KC_DOT,  KC_A,   KC_E,     KC_O,   KC_I,    KC_QUOT,
        XXXXXXX, KC_F,    KC_M,    KC_V,    KC_C,   KC_SLSH,  KC_G,    KC_P,   KC_X,    KC_K,    KC_Y,    KC_ENT ,
        KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, KC_SPC, XXXXXXX,  XXXXXXX, KC_SPC, KC_RSFT, KC_RALT, KC_RGUI, KC_RCTL
    )

};
