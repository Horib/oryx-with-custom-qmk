#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};

enum tap_dance_codes {
  DANCE_0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           LT(6, IS_20),   
    KC_TAB,         RALT(KC_O),     RALT(KC_D),     RALT(KC_QUOT),  RALT(KC_A),     KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           IS_22,          
    KC_LEFT_SHIFT,  MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RGUI, IS_21),MT(MOD_RSFT, IS_16),
    KC_LEFT_CTRL,   MT(MOD_LALT, KC_Z),KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_F16,         KC_RIGHT_CTRL,  
                                                    LT(4, KC_SPACE),MT(MOD_LGUI, KC_BSPC),                                MT(MOD_RGUI, KC_DELETE),LT(3, KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(6, IS_20),   
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_A),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_RGUI, IS_21),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, TD(DANCE_0),                                    MT(MOD_RCTL, KC_DELETE),KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(6, IS_20),   
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_K,           KC_L,           IS_21,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_SPACE,       MT(MOD_LALT, KC_BSPC),                                LT(4, KC_DELETE),KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, NO_BSLS,        LALT(NO_TH),    IS_08,          IS_12,          IS_23,                                          IS_09,          IS_18,          IS_15,          IS_11,          IS_06,          KC_F12,         
    KC_TRANSPARENT, IS_13,          IS_24,          KC_EXLM,        NO_LCBR,        NO_RCBR,                                        LALT(KC_6),     IS_05,          IS_04,          KC_DLR,         IS_01,          KC_BSPC,        
    KC_TRANSPARENT, IS_03,          IS_17,          IS_14,          NO_LBRC,        NO_RBRC,                                        RALT(KC_Q),     KC_HASH,        KC_PERC,        NO_TILD,        IS_02,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    DM_PLY1,        RGB_SLD,        KC_F10,         KC_F11,         KC_F12,         RGB_MODE_FORWARD,                                LGUI(LCTL(LSFT(KC_4))),KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_NO,          DM_REC1,        
    DM_PLY2,        RGB_TOG,        KC_F7,          KC_F8,          KC_F9,          TOGGLE_LAYER_COLOR,                                KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_NO,          DM_REC2,        
    KC_TRANSPARENT, KC_LEFT_GUI,    MT(MOD_LALT, KC_F4),MT(MOD_LCTL, KC_F5),MT(MOD_LSFT, KC_F6),KC_NO,                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       CW_TOGG,        DM_RSTP,        
    KC_TRANSPARENT, RGB_VAD,        KC_F1,          KC_F2,          KC_F3,          RGB_VAI,                                        KC_PAGE_UP,     KC_PGDN,        KC_HOME,        KC_END,         KC_CAPS,        KC_BSPC,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_7,           KC_8,           KC_9,           IS_18,          IS_13,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_4,           KC_5,           KC_6,           IS_15,          IS_06,          KC_BSPC,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_1,           KC_2,           KC_3,           KC_DOT,         IS_11,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          TO(1),          TO(2),          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_GUI,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_LEFT_CTRL, KC_RIGHT_CTRL, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_LEFT_SHIFT, KC_LEFT_CTRL, KC_RIGHT_CTRL, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_LEFT_SHIFT, KC_LEFT_CTRL, MT(MOD_RSFT, IS_16), KC_RIGHT_CTRL, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TG(1)),
    COMBO(combo1, TG(5)),
    COMBO(combo2, TG(2)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(6, IS_20):
            return TAPPING_TERM + 50;
        default:
            return TAPPING_TERM;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255} },

    [1] = { {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {0,255,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {0,255,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255}, {139,58,255} },

    [2] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,255,255} },

    [3] = { {139,58,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {139,58,255}, {78,225,227}, {78,225,227}, {78,225,227}, {78,225,227}, {78,225,227}, {139,58,255}, {78,225,227}, {78,225,227}, {78,225,227}, {78,225,227}, {78,225,227}, {139,58,255}, {78,225,227}, {78,225,227}, {78,225,227}, {78,225,227}, {78,225,227}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {78,225,227}, {78,225,227}, {78,225,227}, {78,225,227}, {78,225,227}, {0,255,255}, {78,225,227}, {78,225,227}, {78,225,227}, {78,225,227}, {78,225,227}, {220,218,204}, {78,225,227}, {78,225,227}, {78,225,227}, {78,225,227}, {78,225,227}, {139,58,255}, {0,0,0}, {0,0,0} },

    [4] = { {76,244,238}, {220,218,204}, {86,255,255}, {86,255,255}, {86,255,255}, {220,218,204}, {76,244,238}, {220,218,204}, {86,255,255}, {86,255,255}, {86,255,255}, {220,218,204}, {139,58,255}, {220,218,204}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {139,58,255}, {220,218,204}, {86,255,255}, {86,255,255}, {86,255,255}, {220,218,204}, {0,0,0}, {0,0,0}, {0,255,255}, {40,233,255}, {40,233,255}, {40,233,255}, {0,0,0}, {76,244,238}, {0,0,0}, {40,233,255}, {40,233,255}, {40,233,255}, {0,0,0}, {76,244,238}, {139,235,255}, {139,235,255}, {139,235,255}, {139,235,255}, {255,218,204}, {76,244,238}, {139,235,255}, {139,235,255}, {139,235,255}, {139,235,255}, {255,218,204}, {0,255,255}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {139,58,255}, {139,58,255}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {139,58,255}, {139,58,255}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {139,58,255}, {139,58,255}, {0,0,0}, {0,0,0}, {0,245,245} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}



typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(KC_BSPC); register_code16(KC_BSPC); break;
        case DOUBLE_HOLD: layer_on(3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(KC_BSPC); break;
              case DOUBLE_HOLD: 
                layer_off(3);
                break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
