#define MIRYOKU_ALPHAS_QWERTY // main as qwerty layer
#define MIRYOKU_EXTRA_COLEMAKDH  // extra colemakdh layer
#define MIRYOKU_KLUDGE_MOUSEKEYSPR  // enable mouse

// layers remapping

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,               &kp R,              &kp T,                      &kp Y,                      &kp U,                      &kp I,             &kp O,             &kp SQT,             \
U_MT(LCTRL, A),    U_MT(LALT, S),     U_MT(LGUI, D),       U_MT(LSHFT, F),     U_MT(LC(LA(LS(LGUI))), G),  U_MT(LC(LA(LS(LGUI))), H),  U_MT(LSHFT, J),             U_MT(LGUI, K),     U_MT(LALT, L),     U_MT(LCTRL, SEMI),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,               &kp V,              &kp B,                      &kp N,                      &kp M,                      &kp COMMA,         U_MT(RALT, DOT),   U_MT(LSHFT, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, DEL),  U_LT(U_NAV, BSPC),  U_LT(U_MOUSE, TAB),         U_LT(U_SYM_QWERTY, RET),    U_LT(U_NUM_QWERTY, SPACE),  U_LT(U_FUN, ESC),  U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA \
&kp Q,             &kp W,             &kp F,               &kp P,              &kp B,                      &kp J,                      &kp L,               &kp U,             &kp Y,             &kp SQT,           \
U_MT(LCTRL, A),    U_MT(LALT, R),     U_MT(LGUI, S),       U_MT(LSHFT, T),     U_MT(LC(LA(LS(LGUI))), G),  U_MT(LC(LA(LS(LGUI))), M),  U_MT(LSHFT, N),      U_MT(LGUI, E),     U_MT(LALT, I),     U_MT(LCTRL, O),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,               &kp D,              &kp V,                      &kp K,                      &kp H,               &kp COMMA,         U_MT(RALT, DOT),   U_MT(LSHFT, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, DEL),  U_LT(U_NAV, BSPC),  U_LT(U_MOUSE, TAB),         U_LT(U_SYM, RET),           U_LT(U_NUM, SPACE),  U_LT(U_FUN, ESC),  U_NP,              U_NP


#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      &ext_power EP_TOG, U_RGB_TOG,         U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
&ext_power EP_TOG, &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      &ext_power EP_TOG, U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
&ext_power EP_TOG, &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      &ext_power EP_TOG, U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
&ext_power EP_TOG, &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN1,            U_BTN2,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          &ext_power EP_TOG, &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          &ext_power EP_TOG, &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM_QWERTY \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          &ext_power EP_TOG, &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp LS(P),         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NUM_QWERTY \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          &ext_power EP_TOG, &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp P,             &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         &ext_power EP_TOG, &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp BSPC,          &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,              U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define U_BASE       0
#define U_EXTRA      1
#define U_TAP        2
#define U_BUTTON     3
#define U_NAV        4
#define U_MOUSE      5
#define U_MEDIA      6
#define U_NUM        7
#define U_NUM_QWERTY 8
#define U_SYM        9
#define U_SYM_QWERTY 10
#define U_FUN        11

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,       "Base") \
MIRYOKU_X(EXTRA,      "Extra") \
MIRYOKU_X(TAP,        "Tap") \
MIRYOKU_X(BUTTON,     "Button") \
MIRYOKU_X(NAV,        "Nav") \
MIRYOKU_X(MOUSE,      "Mouse") \
MIRYOKU_X(MEDIA,      "Media") \
MIRYOKU_X(NUM,        "Numm") \
MIRYOKU_X(NUM_QWERTY, "Num") \
MIRYOKU_X(SYM,        "Symm") \
MIRYOKU_X(SYM_QWERTY, "Sym") \
MIRYOKU_X(FUN,        "Fun")

#define MIRYOKU_LAYERMAPPING_NUM_QWERTY MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_SYM_QWERTY MIRYOKU_MAPPING
