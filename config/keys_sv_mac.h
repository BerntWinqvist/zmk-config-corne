/*
 * Key codes for the macOS "Swedish - Pro" input source.
 *
 * Verified against the layout data macOS itself reports (UCKeyTranslate),
 * so these produce the right character when the OS is set to Swedish - Pro.
 * Option = LA() (left and right Option behave the same on macOS).
 */

#pragma once

#include <dt-bindings/zmk/keys.h>

/* Letters */
#define SV_AO  LBKT          // å
#define SV_AE  SQT           // ä
#define SV_OE  SEMI          // ö

/* Number row */
#define SV_EXCL  LS(N1)      // !
#define SV_DQT   LS(N2)      // "
#define SV_AT    LA(N2)      // @
#define SV_HASH  LS(N3)      // #
#define SV_EURO  LS(N4)      // €
#define SV_DLLR  LA(N4)      // $
#define SV_PRCT  LS(N5)      // %
#define SV_AMPS  LS(N6)      // &
#define SV_FSLH  LS(N7)      // /
#define SV_PIPE  LA(N7)      // |
#define SV_BSLH  LS(LA(N7))  // backslash
#define SV_LPAR  LS(N8)      // (
#define SV_LBKT  LA(N8)      // [
#define SV_LBRC  LS(LA(N8))  // {
#define SV_RPAR  LS(N9)      // )
#define SV_RBKT  LA(N9)      // ]
#define SV_RBRC  LS(LA(N9))  // }
#define SV_EQL   LS(N0)      // =

/* Keys right of the number row */
#define SV_PLUS  MINUS             // +
#define SV_QMARK LS(MINUS)         // ?
#define SV_GRAVE LS(LA(EQUAL))     // ` (not a dead key with Shift+Option)
#define SV_CARET LS(LA(RBKT))      // ^ (not a dead key with Shift+Option)
#define SV_TILDE_DEAD LA(RBKT)     // ~ dead key, follow with space (see &sv_tilde)

/* Right side of the letter rows */
#define SV_SQT   BSLH        // '
#define SV_STAR  LS(BSLH)    // *
#define SV_SEMI  LS(COMMA)   // ;
#define SV_COLON LS(DOT)     // :
#define SV_MINUS FSLH        // -
#define SV_UNDER LS(FSLH)    // _

/* ISO key next to left shift. macOS swaps this with GRAVE depending on
 * whether it thinks the keyboard is ISO or ANSI. If < and > come out as
 * § and °, change NUBS to GRAVE in both lines below. */
#define SV_LT    NUBS        // <
#define SV_GT    LS(NUBS)    // >
