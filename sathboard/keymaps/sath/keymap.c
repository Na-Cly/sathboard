#include "gh60.h"
#include "action_layer.h"


//lets see if this works
enum planck_keycodes {
	 DYNAMIC_MACRO_RANGE
};
#include "dynamic_macro.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: HHKB with hyper key where ctrl used to be, and right half of left
       shift used as a key lock */
    KEYMAP(
        KC_ESC, DYN_MACRO_PLAY1, KC_F1, KC_F2,  KC_F3, KC_F4, KC_F5, KC_F6, KC_F7,\
        KC_INS,    KC_GRV,    KC_1,  KC_2, KC_3, KC_4, KC_5, KC_6, KC_7,\
        KC_PGUP, KC_TAB, KC_Q,    KC_W,    KC_E,  KC_R, KC_T, KC_Y,\
        KC_PGDN, KC_CAPS, KC_A, KC_S, KC_D,KC_F, KC_G, KC_H,\
		DYN_REC_STOP, KC_LSFT, KC_Z, KC_X,KC_C, KC_V, KC_B, KC_DEL,\
        DYN_REC_START1, KC_LCTL, KC_LGUI, KC_LALT,KC_SPC, KC_BSPC, KC_ENT),

};

const uint16_t PROGMEM fn_actions[] = {
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	if (!process_record_dynamic_macro(keycode, record)) {
        return false;
    }
	else{
		return true;
	}
};