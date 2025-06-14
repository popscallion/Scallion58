// Copyright 2023 jack (@waffle87)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once


#undef STARTUP_SONG
#define STARTUP_SONG SONG(NO_SOUND)
#define COMBO_TERM 25
#define COMBO_COUNT 35


#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_COMBINED
#define POINTING_DEVICE_ROTATION_90_RIGHT


#define FLOW_TAP_TERM 150

#define TRI_LAYER_LOWER_LAYER 1
#define TRI_LAYER_UPPER_LAYER 2
#define TRI_LAYER_ADJUST_LAYER 3



// config.h - Disable all RGB lighting
#define RGB_MATRIX_DEFAULT_ON false
#define RGB_MATRIX_DEFAULT_VAL 0
#define RGB_MATRIX_DEFAULT_SAT 0

// For older RGBLIGHT systems
#define RGBLIGHT_DEFAULT_ON false
#define RGBLIGHT_DEFAULT_VAL 0
#define RGBLIGHT_DEFAULT_SAT 0

// Disable backlight if present
#define BACKLIGHT_DEFAULT_ON false
#define BACKLIGHT_DEFAULT_LEVEL 0
