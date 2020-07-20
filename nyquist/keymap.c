#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _JURKA 0
#define _LOWER 1
#define _RAISE 2
/*
#define _LOWER 3
#define _RAISE 4
*/
#define _ADJUST 16

void eeconfig_init_user(void) {
    set_unicode_input_mode(UC_LNX);
}



// Swapped Z and Y
#define CZ_Z KC_Y
#define CZ_Y KC_Z

// Special characters
//#define CZ_CV KC_SCLN   // ; : this is bullshit
#define CZ_SV KC_LBRC
#define CZ_ZV KC_BSLS  // \ |

#define CZ_A KC_A
#define CZ_B KC_B
#define CZ_C KC_C
#define CZ_D KC_D
#define CZ_E KC_E
#define CZ_F KC_F
#define CZ_G KC_G
#define CZ_H KC_H
#define CZ_I KC_I
#define CZ_J KC_J
#define CZ_K KC_K
#define CZ_L KC_L
#define CZ_M KC_M
#define CZ_N KC_N
#define CZ_O KC_O
#define CZ_P KC_P
#define CZ_Q KC_Q
#define CZ_R KC_R
#define CZ_S KC_S
#define CZ_T KC_T
#define CZ_U KC_U
#define CZ_V KC_V
#define CZ_W KC_W
#define CZ_X KC_X

#define CZ_0 S(KC_0)
#define CZ_1 S(KC_1)
#define CZ_2 S(KC_2)
#define CZ_3 S(KC_3)
#define CZ_4 S(KC_4)
#define CZ_5 S(KC_5)
#define CZ_6 S(KC_6)
#define CZ_7 S(KC_7)
#define CZ_8 S(KC_8)
#define CZ_9 S(KC_9)

#define CZ_DOT KC_DOT
#define CZ_COMM KC_COMM

#define CZ_PLUS KC_EQL   // + and * and ~
#define CZ_QOT KC_MINS   // Single quote
#define CZ_MINS KC_SLSH  // - and _

// shifted characters
#define CZ_EXLM S(KC_QUOT)     // !
#define CZ_DQOT S(KC_SCLN)     // "
#define CZ_HASH ALGR(KC_3)    // #
#define CZ_DLR ALGR(KC_4)      // $
#define CZ_PERC ALGR(KC_5)     // %
#define CZ_AMPR S(KC_7)     // &
#define CZ_SLSH KC_PSLS     // /
#define CZ_LPRN S(KC_RBRC)  // (
#define CZ_RPRN KC_RBRC     // ) 
#define CZ_EQL KC_MINS      // =
#define CZ_QST S(KC_COMM)    // ?
#define CZ_ASTR ALGR(KC_8)  // *
#define CZ_COLN S(KC_DOT)   // :
#define CZ_SCLN KC_GRV  // ;, shifted: °
#define CZ_UNDS S(KC_SLSH)  // _
#define CZ_BSLS S(KC_BSLS) // '

// Alt Gr-ed characters
#define CZ_CIRC ALGR(KC_6)  // ^
#define CZ_DEG S(KC_GRV)   // °
#define CZ_GRV ALGR(KC_H)   // `
#define CZ_ACCU KC_EQL  // ´
#define CZ_LCBR ALGR(KC_B)  // {
#define CZ_RCBR ALGR(KC_N)  // }
#define CZ_LBRC ALGR(KC_F)  // [
#define CZ_RBRC ALGR(KC_G)  // ]
#define CZ_BSLS ALGR(KC_Q)  // backslash
#define CZ_AT ALGR(KC_V)    // @
#define CZ_EURO ALGR(KC_E)  // €
#define CZ_TILD ALGR(KC_A)  // ~
#define CZ_PIPE ALGR(KC_W)  // |
#define CZ_LABK ALGR(KC_COMMA) // <
#define CZ_RABK ALGR(KC_DOT) // >






enum custom_keycodes {
  JURKA = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

enum unicode_names {
    UCARKA,
    EHACEK,
    SHACEK,
    CHACEK,
    RHACEK,
    ZHACEK,
    YCARKA,
    ACARKA,
    ICARKA,
    ECARKA,
    UKROUZEK,
    UKROUZEKBIG,
    UCARKABIG,
    EHACEKBIG,
    SHACEKBIG,
    CHACEKBIG,
    RHACEKBIG,
    ZHACEKBIG,
    YCARKABIG,
    ACARKABIG,
    ICARKABIG,
    ECARKABIG,
    BRACKETLEFT,
    BRACKETRIGHT
};

const uint32_t PROGMEM unicode_map[] = {
    [UCARKA] = 0x00FA, // ú
    [EHACEK]  = 0x011B,  // ě
    [SHACEK] = 0x0161,  // š
    [CHACEK] = 0x010D, // č
    [RHACEK]  = 0x0159, // ř
    [ZHACEK] = 0x017E, // ž
    [YCARKA] = 0x00FD, // ý
    [ACARKA] = 0x00E1, // á
    [ICARKA] = 0x00ED, // í
    [ECARKA] = 0x00E9, // é
    [UKROUZEK] = 0x016F, // ů
    [UCARKABIG] = 0x00DA, // Ú
    [EHACEKBIG] = 0x011A, // Ě
    [SHACEKBIG] = 0x0160, // Š
    [CHACEKBIG] = 0x010C, // Č
    [RHACEKBIG] = 0x0158, // Ř
    [ZHACEKBIG] = 0x017D, // Ž
    [YCARKABIG] = 0x00DD, // Ý
    [ACARKABIG] = 0x00C1, // Á
    [ICARKABIG] = 0x00CD, // Í
    [ECARKABIG] = 0x00C9, // É
    [UKROUZEKBIG] = 0x016E, // Ů
    [BRACKETLEFT] = 0x005B, // [
    [BRACKETRIGHT] = 0x005D, // ]
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* LOWER
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |Insert|      | Mute | Prev | Play | Next |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |PRTSCR|      |      |      | Vol- | Vol+ |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Caps |      |      |      |      | Home |  End |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|      |      |      |      |      |      |      |      | PGDN | PGUP |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Adjust| Ctrl | Alt  | Linux| NIC  |Enter |Space | RAISE| Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT( \
  KC_F1,  KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_INS,   KC_NO,    KC_MUTE,   KC_MPRV,  KC_MPLY,  KC_MNXT, \
  KC_F7,  KC_F8,    KC_F9,    KC_F10,    KC_F11,  KC_F12,    KC_PSCR,    KC_NO,    KC_NO,    KC_NO,    KC_VOLD,    KC_VOLU, \
  KC_CAPS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_HOME,    KC_END,    KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO, \
  KC_LSFT, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_PGDN,  KC_PGUP, KC_NO , \
  ADJUST,  KC_LCTL, KC_LALT, KC_LGUI, KC_NO,   KC_ENT,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT \
),

/* JURKA
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   ú  |   ě  |   š  |   č  |   ř  |   ž  |   ý  |   á  |   í  |   é  | Caps |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   G  |   J  |   L  |   U  |   Y  |   ů  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   R  |   S  |   T  |   D  |   H  |   N  |   E  |   I  |   O  | Bksp |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   K  |   M  |   ,  |   .  |   ;  |  ?   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Ctrl  | Alt  |Adjust| Linux| LOWER|Enter |Space |RAISE | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_JURKA] = LAYOUT( \
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_CAPS, \
  KC_TAB,  CZ_Q,    CZ_W,    CZ_F,    CZ_P,    CZ_G,    CZ_J,    CZ_L,    CZ_U,    CZ_Y,    KC_SCLN, KC_DEL, \
  KC_ESC,  CZ_A,    CZ_R,    CZ_S,    CZ_T,    CZ_D,    CZ_H,    CZ_N,    CZ_E,    CZ_I,    CZ_O,    KC_BSPC, \
  KC_LSFT, CZ_Z,    CZ_X,    CZ_C,    CZ_V,    CZ_B,    CZ_K,    CZ_M,    CZ_COMM, CZ_DOT,  CZ_SCLN, CZ_QST, \
  KC_LCTL, KC_LALT, ADJUST,  KC_LGUI, LOWER,   KC_ENT,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT \
),

/* RAISE
 * ,-----------------------------------------------------------------------------------.
 * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  ˇ   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   +  |   -  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   =  |   <  |   {  |   [  |   (  |   )  |   ]  |   }  |   >  |  _   | Bksp |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   '  |  "   |   \   |  /  |   ~  |      |      |  ,   |  .   |  ;   |  ?   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Adjust| Ctrl | Alt  | Linux| JURKA|Enter |Space | NIC  | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */

[_RAISE] = LAYOUT( \
  KC_NO,   CZ_1,    CZ_2,    CZ_3,    CZ_4,    CZ_5,    CZ_6,    CZ_7,    CZ_8,    CZ_9,    CZ_0,    S(KC_EQL), \
  KC_TAB,  CZ_EXLM, CZ_AT, CZ_HASH,  CZ_DLR,    CZ_PERC,    CZ_CIRC,    CZ_AMPR,    CZ_ASTR,    CZ_PLUS,    CZ_MINS,    KC_DEL, \
  KC_ESC,  KC_NO,    CZ_LABK,    CZ_LCBR,    CZ_LBRC,    CZ_LPRN,    CZ_RPRN,    CZ_RBRC,    CZ_RCBR,    CZ_RABK,    CZ_UNDS,    KC_BSPC, \
  KC_LSFT, CZ_BSLS, CZ_DQOT,    CZ_ZV,    CZ_SLSH,    CZ_TILD,    KC_NO,    KC_NO,    KC_COMM,    KC_DOT,    CZ_SCLN,    CZ_QST, \
  ADJUST,  KC_LCTL, KC_LALT, KC_LGUI, JURKA,   KC_ENT,  KC_SPC,  KC_NO,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT \
),




/* Adjust (Lower + Raise)

 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Reset|RGB Tg|RGB Md|Hue Up|Hue Dn|Sat Up|Sat Dn|Val Up|Val Dn|      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |Aud on|Audoff|      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |Shift |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] =  LAYOUT( \
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO, \
  _______, RESET  , RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, _______, _______, \
  _______, _______, _______, _______,  _______,  AU_ON,  AU_OFF, _______, _______, _______,  _______, _______, \
  KC_LSFT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
),


};
/*
void matrix_init_user(void) {
    set_unicode_input_mode(UC_LNX); // REPLACE UC_XXXX with the Unicode Input Mode for your OS. See table below.
};

void eeconfig_init_user(void) {
    set_unicode_input_mode(UC_LNX);
}
*/
void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case JURKA:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_JURKA);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
      case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
      }
  return true;
}
