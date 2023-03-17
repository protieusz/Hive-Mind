#ifndef hivemind_h
#define hivemind_h
#endif

#pragma once

#include "quantum.h"

#define LAYOUT( \
	K000, K001, K002, K003, K004,             K007,       K009,             K012, K013, K014, K015, K016, \
	K100, K101, K102, K103, K104,       K106,       K108,       K110,       K112, K113, K114, K115, K116, \
	K200, K201, K202, K203, K204, K205,       K207,       K209,       K211, K212, K213, K214, K215, K216, \
	                                    K306,       K308,       K310,                                     \
	                        K404,             K407, K408, K409,             K412  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  KC_NO, KC_NO, K007,  KC_NO, K009,  KC_NO, KC_NO, K012,  K013,  K014,  K015,  K016 }, \
	{ K100,  K101,  K102,  K103,  K104,  KC_NO, K106,  KC_NO, K108,  KC_NO, K110,  KC_NO, K112,  K113,  K114,  K115,  K116 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  KC_NO, K207,  KC_NO, K209,  KC_NO, K211,  K212,  K213,  K214,  K215,  K216 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K306,  KC_NO, K308,  KC_NO, K310,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, K404,  KC_NO, KC_NO, K407,  K408,  K409,  KC_NO, KC_NO, K412,  KC_NO, KC_NO, KC_NO, KC_NO }  \
}
