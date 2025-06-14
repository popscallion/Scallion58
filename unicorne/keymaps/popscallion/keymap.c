#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

enum my_keycodes {
    AP_GLOB = SAFE_RANGE,  // Apple Globe key
};

// Combo definitions
enum combos {
    // Numbers (Vertical)
    Q_A_1,          // Q + A = 1
    W_S_2,          // W + S = 2
    E_D_3,          // E + D = 3
    R_F_4,          // R + F = 4
    T_G_5,          // T + G = 5
    Y_H_6,          // Y + H = 6
    U_J_7,          // U + J = 7
    I_K_8,          // I + K = 8
    O_L_9,          // O + L = 9
    P_SCLN_0,       // P + ; = 0
    U_I_LPRN,       // U + I = (
    I_O_RPRN,       // I + O = )
    J_K_LCBR,       // J + K = {
    K_L_RCBR,       // K + L = }
    O_P_MINS,       // O + P = -
    P_BSPC_EQL,     // P + BSPC = =
    M_LEFT_LBRC,    // M + ← = [
    LEFT_DOWN_RBRC, // ← + ↓ = ]
    QUOT_BSPC_GRV,  // ' + BSPC = `
    K_LEFT_COMM,    // K + ← = ,
    L_DOWN_DOT,     // L + ↓ = .
    SCLN_UP_SLSH,   // ; + ↑ = /
    QUOT_RGHT_BSLS, // ' + → = \|
    A_Z_BRIU,       // A + Z = Brightness Up
    S_X_BRID,       // S + X = Brightness Down
    C_D_F13,        // C + D = F13
    F_V_F14,        // F + V = F14
    G_B_F15,        // G + B = F15
    N_H_F16,        // N + H = F16
    J_M_F17,        // J + M = F17
    R_T_BRIU_H,     // R + T = Brightness Up
    F_G_BRID_H,     // F + G = Brightness Down
    Y_U_VOLU,       // Y + U = Volume Up
    H_J_VOLD,       // H + J = Volume Down
    GLOB_LEFT_HOME,  // Globe + ← = Home
    GLOB_RGHT_END,   // Globe + → = End
    GLOB_UP_PGUP,    // Globe + ↑ = Page Up
    GLOB_DOWN_PGDN,  // Globe + ↓ = Page Down
};



const uint16_t PROGMEM q_a_combo[] = {KC_Q, KC_A, COMBO_END};
const uint16_t PROGMEM w_s_combo[] = {KC_W, KC_S, COMBO_END};
const uint16_t PROGMEM e_d_combo[] = {KC_E, KC_D, COMBO_END};
const uint16_t PROGMEM r_f_combo[] = {KC_R, KC_F, COMBO_END};
const uint16_t PROGMEM t_g_combo[] = {KC_T, KC_G, COMBO_END};
const uint16_t PROGMEM y_h_combo[] = {KC_Y, KC_H, COMBO_END};
const uint16_t PROGMEM u_j_combo[] = {KC_U, KC_J, COMBO_END};
const uint16_t PROGMEM i_k_combo[] = {KC_I, KC_K, COMBO_END};
const uint16_t PROGMEM o_l_combo[] = {KC_O, KC_L, COMBO_END};
const uint16_t PROGMEM p_scln_combo[] = {KC_P, KC_SCLN, COMBO_END};
const uint16_t PROGMEM u_i_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM i_o_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM j_k_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM k_l_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM o_p_combo[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM p_bspc_combo[] = {KC_P, KC_BSPC, COMBO_END};
const uint16_t PROGMEM m_left_combo[] = {KC_M, KC_LEFT, COMBO_END};
const uint16_t PROGMEM left_down_combo[] = {KC_LEFT, KC_DOWN, COMBO_END};
const uint16_t PROGMEM quot_bspc_combo[] = {KC_QUOT, KC_BSPC, COMBO_END};
const uint16_t PROGMEM a_z_combo[] = {KC_A, KC_Z, COMBO_END};
const uint16_t PROGMEM s_x_combo[] = {KC_S, KC_X, COMBO_END};
const uint16_t PROGMEM c_d_combo[] = {KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM f_v_combo[] = {KC_F, KC_V, COMBO_END};
const uint16_t PROGMEM g_b_combo[] = {KC_G, KC_B, COMBO_END};
const uint16_t PROGMEM n_h_combo[] = {KC_N, KC_H, COMBO_END};
const uint16_t PROGMEM j_m_combo[] = {KC_J, KC_M, COMBO_END};
const uint16_t PROGMEM k_left_comm_combo[] = {KC_K, KC_LEFT, COMBO_END};
const uint16_t PROGMEM l_down_dot_combo[] = {KC_L, KC_DOWN, COMBO_END};
const uint16_t PROGMEM scln_up_slsh_combo[] = {KC_SCLN, KC_UP, COMBO_END};
const uint16_t PROGMEM quot_rght_bsls_combo[] = {KC_QUOT, KC_RGHT, COMBO_END};

// New horizontal combos
const uint16_t PROGMEM r_t_combo[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM f_g_combo[] = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM y_u_combo[] = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM h_j_combo[] = {KC_H, KC_J, COMBO_END};
// Globe navigation combos
const uint16_t PROGMEM glob_left_combo[] = {AP_GLOB, KC_LEFT, COMBO_END};
const uint16_t PROGMEM glob_rght_combo[] = {AP_GLOB, KC_RGHT, COMBO_END};
const uint16_t PROGMEM glob_up_combo[] = {AP_GLOB, KC_UP, COMBO_END};
const uint16_t PROGMEM glob_down_combo[] = {AP_GLOB, KC_DOWN, COMBO_END};

combo_t key_combos[] = {
    // Numbers
    [Q_A_1] = COMBO(q_a_combo, KC_1),
    [W_S_2] = COMBO(w_s_combo, KC_2),
    [E_D_3] = COMBO(e_d_combo, KC_3),
    [R_F_4] = COMBO(r_f_combo, KC_4),
    [T_G_5] = COMBO(t_g_combo, KC_5),
    [Y_H_6] = COMBO(y_h_combo, KC_6),
    [U_J_7] = COMBO(u_j_combo, KC_7),
    [I_K_8] = COMBO(i_k_combo, KC_8),
    [O_L_9] = COMBO(o_l_combo, KC_9),
    [P_SCLN_0] = COMBO(p_scln_combo, KC_0),

    // Brackets & Symbols
    [U_I_LPRN] = COMBO(u_i_combo, KC_LPRN),
    [I_O_RPRN] = COMBO(i_o_combo, KC_RPRN),
    [J_K_LCBR] = COMBO(j_k_combo, KC_LCBR),
    [K_L_RCBR] = COMBO(k_l_combo, KC_RCBR),
    [O_P_MINS] = COMBO(o_p_combo, KC_MINS),
    [P_BSPC_EQL] = COMBO(p_bspc_combo, KC_EQL),
    [M_LEFT_LBRC] = COMBO(m_left_combo, KC_LBRC),
    [LEFT_DOWN_RBRC] = COMBO(left_down_combo, KC_RBRC),
    [QUOT_BSPC_GRV] = COMBO(quot_bspc_combo, KC_GRV),

    // Function Keys & Brightness (Vertical)
    [A_Z_BRIU] = COMBO(a_z_combo, KC_BRIU),
    [S_X_BRID] = COMBO(s_x_combo, KC_BRID),
    [C_D_F13] = COMBO(c_d_combo, KC_F13),
    [F_V_F14] = COMBO(f_v_combo, KC_F14),
    [G_B_F15] = COMBO(g_b_combo, KC_F15),
    [N_H_F16] = COMBO(n_h_combo, KC_F16),
    [J_M_F17] = COMBO(j_m_combo, KC_F17),

    // Media Controls (Horizontal)
    [R_T_BRIU_H] = COMBO(r_t_combo, KC_BRIU),
    [F_G_BRID_H] = COMBO(f_g_combo, KC_BRID),
    [Y_U_VOLU] = COMBO(y_u_combo, KC_VOLU),
    [H_J_VOLD] = COMBO(h_j_combo, KC_VOLD),

    // Punctuation (NEW)
    [K_LEFT_COMM] = COMBO(k_left_comm_combo, KC_COMM),
    [L_DOWN_DOT] = COMBO(l_down_dot_combo, KC_DOT),
    [SCLN_UP_SLSH] = COMBO(scln_up_slsh_combo, KC_SLSH),
    [QUOT_RGHT_BSLS] = COMBO(quot_rght_bsls_combo, KC_BSLS),

    [GLOB_LEFT_HOME] = COMBO(glob_left_combo, KC_HOME),
    [GLOB_RGHT_END] = COMBO(glob_rght_combo, KC_END),
    [GLOB_UP_PGUP] = COMBO(glob_up_combo, KC_PGUP),
    [GLOB_DOWN_PGDN] = COMBO(glob_down_combo, KC_PGDN)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        MT(MOD_LCTL|MOD_LALT|MOD_LGUI,KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
        KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        AP_GLOB, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,
        MT(MOD_LCTL,KC_TAB), MT(MOD_LALT,KC_SPC), MT(MOD_LGUI,KC_SPC), LT(2,KC_SPC), LT(1,KC_SPC), KC_ENT
    ),
    [1] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_4,    KC_5,    KC_6,    KC_PMNS, KC_ENT,
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_1,    KC_2,    KC_3,    KC_PPLS, KC_PDOT,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [2] = LAYOUT_split_3x6_3(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case AP_GLOB:
        host_consumer_send(record->event.pressed ? AC_NEXT_KEYBOARD_LAYOUT_SELECT : 0);
        return false;
    }
    return true;
}

#ifdef POINTING_DEVICE_ENABLE
// Joystick arrow key configuration
#define JOYSTICK_DEADZONE 3    // Adjust this value to change sensitivity
#define JOYSTICK_THRESHOLD 5  // Minimum movement to register as key press

// Variables to track key states
static bool up_pressed = false;
static bool down_pressed = false;
static bool left_pressed = false;
static bool right_pressed = false;

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    // Get joystick movement values
    int16_t x_movement = mouse_report.x;
    int16_t y_movement = mouse_report.y;

    // Clear mouse movement (we don't want mouse cursor movement)
    mouse_report.x = 0;
    mouse_report.y = 0;
    mouse_report.h = 0;
    mouse_report.v = 0;

    // Handle horizontal movement (left/right)
    if (x_movement > JOYSTICK_THRESHOLD) {
        // Moving right
        if (!right_pressed) {
            register_code(KC_RIGHT);
            right_pressed = true;
        }
        if (left_pressed) {
            unregister_code(KC_LEFT);
            left_pressed = false;
        }
    } else if (x_movement < -JOYSTICK_THRESHOLD) {
        // Moving left
        if (!left_pressed) {
            register_code(KC_LEFT);
            left_pressed = true;
        }
        if (right_pressed) {
            unregister_code(KC_RIGHT);
            right_pressed = false;
        }
    } else {
        // Joystick centered horizontally
        if (left_pressed) {
            unregister_code(KC_LEFT);
            left_pressed = false;
        }
        if (right_pressed) {
            unregister_code(KC_RIGHT);
            right_pressed = false;
        }
    }

    // Handle vertical movement (up/down)
    if (y_movement > JOYSTICK_THRESHOLD) {
        // Moving down
        if (!down_pressed) {
            register_code(KC_DOWN);
            down_pressed = true;
        }
        if (up_pressed) {
            unregister_code(KC_UP);
            up_pressed = false;
        }
    } else if (y_movement < -JOYSTICK_THRESHOLD) {
        // Moving up
        if (!up_pressed) {
            register_code(KC_UP);
            up_pressed = true;
        }
        if (down_pressed) {
            unregister_code(KC_DOWN);
            down_pressed = false;
        }
    } else {
        // Joystick centered vertically
        if (up_pressed) {
            unregister_code(KC_UP);
            up_pressed = false;
        }
        if (down_pressed) {
            unregister_code(KC_DOWN);
            down_pressed = false;
        }
    }

    return mouse_report;
}

// Clean up when keyboard is reset
void keyboard_pre_init_user(void) {
    up_pressed = false;
    down_pressed = false;
    left_pressed = false;
    right_pressed = false;
}
#endif

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

/*
 * KEYMAP DESIGN RATIONALE
 *
 * This keymap optimizes for programming efficiency and ergonomics through:
 *
 * LAYER 0 (Base): QWERTY with extensive combo system
 * - Globe key (bottom-left) for macOS Sequoia window management
 * - Direct arrow access (bottom-right) for navigation without layer switching
 * - Mod-taps on thumbs: Ctrl/Tab, Alt/Space, Gui/Space for ergonomic modifier access
 *
 * COMBO SYSTEM: All symbols accessible without leaving base layer
 * - Numbers (0-9): Vertical combos (Q+A=1, W+S=2, etc.) - natural finger rolls
 * - Brackets: Horizontal combos (U+I=(, I+O=), J+K={, K+L=}) - adjacent finger presses
 * - Operators: O+P=-, P+Bspc==, '+Bspc=` for common programming symbols
 * - Media: R+T/F+G brightness, Y+U/H+J volume, A+Z/S+X brightness (dual access)
 * - Function keys: F13-F19 via vertical combos for custom shortcuts
 *
 * LAYER 1 (Numpad): Right-hand numpad layout
 * - ESC (top-left) and DEL (top-right) for essential functions
 * - Standard numpad arrangement: 789/456/123 with operators
 * - Left side disabled to prevent accidental keypresses
 *
 * PHILOSOPHY: Minimize hand movement, maximize symbol access, maintain typing flow.
 * All common programming symbols reachable via intuitive combos while preserving
 * standard QWERTY for muscle memory. Globe key enables native macOS integration.
 *
 * HOW TO USE:
 * Place Unicorne in bootloader mode by holding the top left key while plugging it in.
 * Globe key implementation from: https://skip.house/blog/qmk-globe-key
 * Requires KEYBOARD_SHARED_EP = yes in rules.mk for modifier functionality.
 */


/* Layer 0
 * ┌─────┬─────┬─────┬─────┬─────┬─────┐ ┌─────┬─────┬─────┬─────┬─────┬─────┐
 * │C/A/G│  Q  │  W  │  E  │  R  │  T  │ │  Y  │  U  │  I  │  O  │  P  │BSPC │
 * │ TAB │     │     │     │     │     │ │     │     │     │     │     │     │
 * ├─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┼─────┤
 * │SHIFT│  A  │  S  │  D  │  F  │  G  │ │  H  │  J  │  K  │  L  │ ; : │ ' " │
 * │     │     │     │     │     │     │ │     │     │     │     │     │     │
 * ├─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┼─────┤
 * │GLOBE│  Z  │  X  │  C  │  V  │  B  │ │  N  │  M  │  ←  │  ↓  │  ↑  │  →  │
 * │ 🌐  │     │     │     │     │     │ │     │     │     │     │     │     │
 * └─────┴─────┴─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┴─────┴─────┘
 *                   │C/TAB│A/SP │G/SP │ │ L2  │ L1  │ ENT │
 *                   └─────┴─────┴─────┘ └─────┴─────┴─────┘
 * Globe key implementation from https://skip.house/blog/qmk-globe-key
 * Layer 1: Numpad Layer
 * ┌─────┬─────┬─────┬─────┬─────┬─────┐ ┌─────┬─────┬─────┬─────┬─────┬─────┐
 * │ ESC │  -  │  -  │  -  │  -  │  -  │ │  -  │  7  │  8  │  9  │  0  │ DEL │
 * │     │     │     │     │     │     │ │     │     │     │     │     │     │
 * ├─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┼─────┤
 * │TRNS │  -  │  -  │  -  │  -  │  -  │ │  -  │  4  │  5  │  6  │  -  │ ENT │
 * │     │     │     │     │     │     │ │     │     │     │     │     │     │
 * ├─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┼─────┤
 * │TRNS │  -  │  -  │  -  │  -  │  -  │ │  -  │  1  │  2  │  3  │  +  │  .  │
 * │     │     │     │     │     │     │ │     │     │     │     │     │     │
 * └─────┴─────┴─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┴─────┴─────┘
 *                   │TRNS │TRNS │TRNS │ │TRNS │TRNS │TRNS │
 *                   └─────┴─────┴─────┘ └─────┴─────┴─────┘

 * Numpad Layout (Right Hand):
 * ┌─────┬─────┬─────┬─────┐
 * │  7  │  8  │  9  │  0  │
 * ├─────┼─────┼─────┼─────┤
 * │  4  │  5  │  6  │  -  │
 * ├─────┼─────┼─────┼─────┤
 * │  1  │  2  │  3  │  +  │
 * └─────┴─────┴─────┴─────┘
 */
