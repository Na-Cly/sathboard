#ifndef SATHBOARD_H
#define SATHBOARD_H

#include "quantum.h"
//#include "led.h"

/* GH60 LEDs
 *   GPIO pads
 *   0 F7 WASD LEDs
 *   1 F6 ESC LED
 *   2 F5 FN LED
 *   3 F4 POKER Arrow LEDs
 *   B2 Capslock LED
 *   B0 not connected
 */
inline void gh60_caps_led_on(void)      {}
inline void gh60_poker_leds_on(void)    {}
inline void gh60_fn_led_on(void)    	{}
inline void gh60_esc_led_on(void)    	{}
inline void gh60_wasd_leds_on(void)    	{}

inline void gh60_caps_led_off(void)     {}
inline void gh60_poker_leds_off(void)   {}
inline void gh60_fn_led_off(void)   	{}
inline void gh60_esc_led_off(void)   	{}
inline void gh60_wasd_leds_off(void)   	{}

/* GH60 keymap definition macro
 * K2C, K31 and  K3C are extra keys for ISO
 */
#define KEYMAP(                                                         \
               K00, K01, K02, K03, K04, K05, K06, K07, K08, \
               K10, K11, K12, K13, K14, K15, K16, K17, K18,  \
               K20, K21, K22, K23, K24, K25, K26, K27, \
               K30, K31, K32, K33, K34, K35, K36, K37, \
			   K40, K41, K42, K43, K44, K45, K46, K47, \
               K50, K51, K52,K53,K54,K56,K57 \
                ) {                                  \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08 }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27  }, \
    { K30, K31, K32, K33, K34, K35, K36, K37 }, \
	{ K40, K41, K42, K43, K44, K45, K46, K47 }, \
    { K50, K51, K52, K53, K54, KC_NO, K56, K57 } \
  }


#endif
