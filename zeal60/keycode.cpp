#pragma once

#ifdef _MSC_VER
// Stop compiler bitching about sscanf() being unsafe.
// Prefer the portable sscanf() to the suggested, MSVC-only sscanf_c()
#pragma warning(disable:4996)
#endif

#include "keycode.h"

#include "../qmk_firmware/tmk_core/common/keycode.h"
#include "../qmk_firmware/quantum/quantum_keycodes.h"
#include "../qmk_firmware/tmk_core/common/action_code.h"
#include "../qmk_firmware/keyboards/zeal60/rgb_backlight_keycodes.h"
#include "../qmk_firmware/keyboards/zeal60/zeal60_keycodes.h"

#include <cstring>
#include <string>

// Helper macro to turn an enum into a value/string pair
#define LOOKUP_ENTRY(x) { x, #x }

KeycodeStringValue g_modStringValue[] = 
{
	// These aren't really keycodes but they're needed
	// for the MT(mod,kc) command
    LOOKUP_ENTRY( MOD_LCTL ),
    LOOKUP_ENTRY( MOD_LSFT ),
    LOOKUP_ENTRY( MOD_LALT ),
    LOOKUP_ENTRY( MOD_LGUI ),
    LOOKUP_ENTRY( MOD_RCTL ),
    LOOKUP_ENTRY( MOD_RSFT ),
    LOOKUP_ENTRY( MOD_RALT ),
    LOOKUP_ENTRY( MOD_RGUI ),
	// These screw up reverse lookup
	//LOOKUP_ENTRY( MOD_HYPR ),
	//LOOKUP_ENTRY( MOD_MEH ),
};

KeycodeStringValue g_keycodeStringValue[] =
{
	// Shortened names first, so reverse lookups
	// will return the shortened name first
	LOOKUP_ENTRY( KC_LCTL ),
	LOOKUP_ENTRY( KC_RCTL ),
	LOOKUP_ENTRY( KC_LSFT ),
	LOOKUP_ENTRY( KC_RSFT ),
	LOOKUP_ENTRY( KC_ESC ),
	LOOKUP_ENTRY( KC_BSPC ),
	LOOKUP_ENTRY( KC_ENT ),
	LOOKUP_ENTRY( KC_DEL ),
	LOOKUP_ENTRY( KC_INS ),
	LOOKUP_ENTRY( KC_CAPS ),
	LOOKUP_ENTRY( KC_CLCK ),
	LOOKUP_ENTRY( KC_RGHT ),
	LOOKUP_ENTRY( KC_PGDN ),
	LOOKUP_ENTRY( KC_PSCR ),
	LOOKUP_ENTRY( KC_SLCK ),
	LOOKUP_ENTRY( KC_PAUS ),
	LOOKUP_ENTRY( KC_BRK ),
	LOOKUP_ENTRY( KC_NLCK ),
	LOOKUP_ENTRY( KC_SPC ),
	LOOKUP_ENTRY( KC_MINS ),
	LOOKUP_ENTRY( KC_EQL ),
	LOOKUP_ENTRY( KC_GRV ),
	LOOKUP_ENTRY( KC_RBRC ),
	LOOKUP_ENTRY( KC_LBRC ),
	LOOKUP_ENTRY( KC_COMM ),
	LOOKUP_ENTRY( KC_BSLS ),
	LOOKUP_ENTRY( KC_SLSH ),
	LOOKUP_ENTRY( KC_SCLN ),
	LOOKUP_ENTRY( KC_QUOT ),
	LOOKUP_ENTRY( KC_APP ),
	LOOKUP_ENTRY( KC_NUHS ),
	LOOKUP_ENTRY( KC_NUBS ),
	LOOKUP_ENTRY( KC_LCAP ),
	LOOKUP_ENTRY( KC_LNUM ),
	LOOKUP_ENTRY( KC_LSCR ),
	LOOKUP_ENTRY( KC_ERAS ),
	LOOKUP_ENTRY( KC_CLR ),
	LOOKUP_ENTRY( KC_ZKHK ),
	LOOKUP_ENTRY( KC_RO ),
	LOOKUP_ENTRY( KC_KANA ),
	LOOKUP_ENTRY( KC_JYEN ),
	LOOKUP_ENTRY( KC_HENK ),
	LOOKUP_ENTRY( KC_MHEN ),
	LOOKUP_ENTRY( KC_P1 ),
	LOOKUP_ENTRY( KC_P2 ),
	LOOKUP_ENTRY( KC_P3 ),
	LOOKUP_ENTRY( KC_P4 ),
	LOOKUP_ENTRY( KC_P5 ),
	LOOKUP_ENTRY( KC_P6 ),
	LOOKUP_ENTRY( KC_P7 ),
	LOOKUP_ENTRY( KC_P8 ),
	LOOKUP_ENTRY( KC_P9 ),
	LOOKUP_ENTRY( KC_P0 ),
	LOOKUP_ENTRY( KC_PDOT ),
	LOOKUP_ENTRY( KC_PCMM ),
	LOOKUP_ENTRY( KC_PSLS ),
	LOOKUP_ENTRY( KC_PAST ),
	LOOKUP_ENTRY( KC_PMNS ),
	LOOKUP_ENTRY( KC_PPLS ),
	LOOKUP_ENTRY( KC_PEQL ),
	LOOKUP_ENTRY( KC_PENT ),
	LOOKUP_ENTRY( KC_MS_U ),
	LOOKUP_ENTRY( KC_MS_D ),
	LOOKUP_ENTRY( KC_MS_L ),
	LOOKUP_ENTRY( KC_MS_R ),
	LOOKUP_ENTRY( KC_BTN1 ),
	LOOKUP_ENTRY( KC_BTN2 ),
	LOOKUP_ENTRY( KC_BTN3 ),
	LOOKUP_ENTRY( KC_BTN4 ),
	LOOKUP_ENTRY( KC_BTN5 ),
	LOOKUP_ENTRY( KC_WH_U ),
	LOOKUP_ENTRY( KC_WH_D ),
	LOOKUP_ENTRY( KC_WH_L ),
	LOOKUP_ENTRY( KC_WH_R ),
	LOOKUP_ENTRY( KC_ACL0 ),
	LOOKUP_ENTRY( KC_ACL1 ),
	LOOKUP_ENTRY( KC_ACL2 ),
	LOOKUP_ENTRY( KC_PWR ),
	LOOKUP_ENTRY( KC_SLEP ),
	LOOKUP_ENTRY( KC_WAKE ),
	LOOKUP_ENTRY( KC_MUTE ),
	LOOKUP_ENTRY( KC_VOLU ),
	LOOKUP_ENTRY( KC_VOLD ),
	LOOKUP_ENTRY( KC_MNXT ),
	LOOKUP_ENTRY( KC_MPRV ),
	LOOKUP_ENTRY( KC_MFFD ),
	LOOKUP_ENTRY( KC_MRWD ),
	LOOKUP_ENTRY( KC_MSTP ),
	LOOKUP_ENTRY( KC_MPLY ),
	LOOKUP_ENTRY( KC_MSEL ),
	LOOKUP_ENTRY( KC_EJCT ),
	LOOKUP_ENTRY( KC_MAIL ),
	LOOKUP_ENTRY( KC_CALC ),
	LOOKUP_ENTRY( KC_MYCM ),
	LOOKUP_ENTRY( KC_WSCH ),
	LOOKUP_ENTRY( KC_WHOM ),
	LOOKUP_ENTRY( KC_WBAK ),
	LOOKUP_ENTRY( KC_WFWD ),
	LOOKUP_ENTRY( KC_WSTP ),
	LOOKUP_ENTRY( KC_WREF ),
	LOOKUP_ENTRY( KC_WFAV ),
	LOOKUP_ENTRY( KC_TRNS ),

	LOOKUP_ENTRY( KC_NO ),
	LOOKUP_ENTRY( KC_A ),
	LOOKUP_ENTRY( KC_B ),
	LOOKUP_ENTRY( KC_C ),
	LOOKUP_ENTRY( KC_D ),
	LOOKUP_ENTRY( KC_E ),
	LOOKUP_ENTRY( KC_F ),
	LOOKUP_ENTRY( KC_G ),
	LOOKUP_ENTRY( KC_H ),
	LOOKUP_ENTRY( KC_I ),
	LOOKUP_ENTRY( KC_J ),
	LOOKUP_ENTRY( KC_K ),
	LOOKUP_ENTRY( KC_L ),
	LOOKUP_ENTRY( KC_M ),
	LOOKUP_ENTRY( KC_N ),
	LOOKUP_ENTRY( KC_O ),
	LOOKUP_ENTRY( KC_P ),
	LOOKUP_ENTRY( KC_Q ),
	LOOKUP_ENTRY( KC_R ),
	LOOKUP_ENTRY( KC_S ),
	LOOKUP_ENTRY( KC_T ),
	LOOKUP_ENTRY( KC_U ),
	LOOKUP_ENTRY( KC_V ),
	LOOKUP_ENTRY( KC_W ),
	LOOKUP_ENTRY( KC_X ),
	LOOKUP_ENTRY( KC_Y ),
	LOOKUP_ENTRY( KC_Z ),
	LOOKUP_ENTRY( KC_1 ),
	LOOKUP_ENTRY( KC_2 ),
	LOOKUP_ENTRY( KC_3 ),
	LOOKUP_ENTRY( KC_4 ),
	LOOKUP_ENTRY( KC_5 ),
	LOOKUP_ENTRY( KC_6 ),
	LOOKUP_ENTRY( KC_7 ),
	LOOKUP_ENTRY( KC_8 ),
	LOOKUP_ENTRY( KC_9 ),
	LOOKUP_ENTRY( KC_0 ),
	LOOKUP_ENTRY( KC_ENTER ),
	LOOKUP_ENTRY( KC_ESCAPE ),
	LOOKUP_ENTRY( KC_BSPACE ),
	LOOKUP_ENTRY( KC_TAB ),
	LOOKUP_ENTRY( KC_SPACE ),
	LOOKUP_ENTRY( KC_MINUS ),
	LOOKUP_ENTRY( KC_EQUAL ),
	LOOKUP_ENTRY( KC_LBRACKET ),
	LOOKUP_ENTRY( KC_RBRACKET ),
	LOOKUP_ENTRY( KC_BSLASH ),
	LOOKUP_ENTRY( KC_NONUS_HASH ),
	LOOKUP_ENTRY( KC_SCOLON ),
	LOOKUP_ENTRY( KC_QUOTE ),
	LOOKUP_ENTRY( KC_GRAVE ),
	LOOKUP_ENTRY( KC_COMMA ),
	LOOKUP_ENTRY( KC_DOT ),
	LOOKUP_ENTRY( KC_SLASH ),
	LOOKUP_ENTRY( KC_CAPSLOCK ),
	LOOKUP_ENTRY( KC_F1 ),
	LOOKUP_ENTRY( KC_F2 ),
	LOOKUP_ENTRY( KC_F3 ),
	LOOKUP_ENTRY( KC_F4 ),
	LOOKUP_ENTRY( KC_F5 ),
	LOOKUP_ENTRY( KC_F6 ),
	LOOKUP_ENTRY( KC_F7 ),
	LOOKUP_ENTRY( KC_F8 ),
	LOOKUP_ENTRY( KC_F9 ),
	LOOKUP_ENTRY( KC_F10 ),
	LOOKUP_ENTRY( KC_F11 ),
	LOOKUP_ENTRY( KC_F12 ),
	LOOKUP_ENTRY( KC_PSCREEN ),
	LOOKUP_ENTRY( KC_SCROLLLOCK ),
	LOOKUP_ENTRY( KC_PAUSE ),
	LOOKUP_ENTRY( KC_INSERT ),
	LOOKUP_ENTRY( KC_HOME ),
	LOOKUP_ENTRY( KC_PGUP ),
	LOOKUP_ENTRY( KC_DELETE ),
	LOOKUP_ENTRY( KC_END ),
	LOOKUP_ENTRY( KC_PGDOWN ),
	LOOKUP_ENTRY( KC_RIGHT ),
	LOOKUP_ENTRY( KC_LEFT ),
	LOOKUP_ENTRY( KC_DOWN ),
	LOOKUP_ENTRY( KC_UP ),
	LOOKUP_ENTRY( KC_NUMLOCK ),
	LOOKUP_ENTRY( KC_KP_SLASH ),
	LOOKUP_ENTRY( KC_KP_ASTERISK ),
	LOOKUP_ENTRY( KC_KP_MINUS ),
	LOOKUP_ENTRY( KC_KP_PLUS ),
	LOOKUP_ENTRY( KC_KP_ENTER ),
	LOOKUP_ENTRY( KC_KP_1 ),
	LOOKUP_ENTRY( KC_KP_2 ),
	LOOKUP_ENTRY( KC_KP_3 ),
	LOOKUP_ENTRY( KC_KP_4 ),
	LOOKUP_ENTRY( KC_KP_5 ),
	LOOKUP_ENTRY( KC_KP_6 ),
	LOOKUP_ENTRY( KC_KP_7 ),
	LOOKUP_ENTRY( KC_KP_8 ),
	LOOKUP_ENTRY( KC_KP_9 ),
	LOOKUP_ENTRY( KC_KP_0 ),
	LOOKUP_ENTRY( KC_KP_DOT ),
	LOOKUP_ENTRY( KC_NONUS_BSLASH ),
	LOOKUP_ENTRY( KC_APPLICATION ),
	LOOKUP_ENTRY( KC_POWER ),
	LOOKUP_ENTRY( KC_KP_EQUAL ),
	LOOKUP_ENTRY( KC_F13 ),
	LOOKUP_ENTRY( KC_F14 ),
	LOOKUP_ENTRY( KC_F15 ),
	LOOKUP_ENTRY( KC_F16 ),
	LOOKUP_ENTRY( KC_F17 ),
	LOOKUP_ENTRY( KC_F18 ),
	LOOKUP_ENTRY( KC_F19 ),
	LOOKUP_ENTRY( KC_F20 ),
	LOOKUP_ENTRY( KC_F21 ),
	LOOKUP_ENTRY( KC_F22 ),
	LOOKUP_ENTRY( KC_F23 ),
	LOOKUP_ENTRY( KC_F24 ),
	LOOKUP_ENTRY( KC_EXECUTE ),
	LOOKUP_ENTRY( KC_HELP ),
	LOOKUP_ENTRY( KC_MENU ),
	LOOKUP_ENTRY( KC_SELECT ),
	LOOKUP_ENTRY( KC_STOP ),
	LOOKUP_ENTRY( KC_AGAIN ),
	LOOKUP_ENTRY( KC_UNDO ),
	LOOKUP_ENTRY( KC_CUT ),
	LOOKUP_ENTRY( KC_COPY ),
	LOOKUP_ENTRY( KC_PASTE ),
	LOOKUP_ENTRY( KC_FIND ),
	LOOKUP_ENTRY( KC__MUTE ),
	LOOKUP_ENTRY( KC__VOLUP ),
	LOOKUP_ENTRY( KC__VOLDOWN ),
	LOOKUP_ENTRY( KC_LOCKING_CAPS ),
	LOOKUP_ENTRY( KC_LOCKING_NUM ),
	LOOKUP_ENTRY( KC_LOCKING_SCROLL ),
	LOOKUP_ENTRY( KC_KP_COMMA ),
	LOOKUP_ENTRY( KC_KP_EQUAL_AS400 ),
	LOOKUP_ENTRY( KC_INT1 ),
	LOOKUP_ENTRY( KC_INT2 ),
	LOOKUP_ENTRY( KC_INT3 ),
	LOOKUP_ENTRY( KC_INT4 ),
	LOOKUP_ENTRY( KC_INT5 ),
	LOOKUP_ENTRY( KC_INT6 ),
	LOOKUP_ENTRY( KC_INT7 ),
	LOOKUP_ENTRY( KC_INT8 ),
	LOOKUP_ENTRY( KC_INT9 ),
	LOOKUP_ENTRY( KC_LANG1 ),
	LOOKUP_ENTRY( KC_LANG2 ),
	LOOKUP_ENTRY( KC_LANG3 ),
	LOOKUP_ENTRY( KC_LANG4 ),
	LOOKUP_ENTRY( KC_LANG5 ),
	LOOKUP_ENTRY( KC_LANG6 ),
	LOOKUP_ENTRY( KC_LANG7 ),
	LOOKUP_ENTRY( KC_LANG8 ),
	LOOKUP_ENTRY( KC_LANG9 ),
	LOOKUP_ENTRY( KC_ALT_ERASE ),
	LOOKUP_ENTRY( KC_SYSREQ ),
	LOOKUP_ENTRY( KC_CANCEL ),
	LOOKUP_ENTRY( KC_CLEAR ),
	LOOKUP_ENTRY( KC_PRIOR ),
	LOOKUP_ENTRY( KC_RETURN ),
	LOOKUP_ENTRY( KC_SEPARATOR ),
	LOOKUP_ENTRY( KC_OUT ),
	LOOKUP_ENTRY( KC_OPER ),
	LOOKUP_ENTRY( KC_CLEAR_AGAIN ),
	LOOKUP_ENTRY( KC_CRSEL ),
	LOOKUP_ENTRY( KC_EXSEL ),
	LOOKUP_ENTRY( KC_LCTRL ),
	LOOKUP_ENTRY( KC_LSHIFT ),
	LOOKUP_ENTRY( KC_LALT ),
	LOOKUP_ENTRY( KC_LGUI ),
	LOOKUP_ENTRY( KC_RCTRL ),
	LOOKUP_ENTRY( KC_RSHIFT ),
	LOOKUP_ENTRY( KC_RALT ),
	LOOKUP_ENTRY( KC_RGUI ),
	LOOKUP_ENTRY( KC_SYSTEM_POWER ),
	LOOKUP_ENTRY( KC_SYSTEM_SLEEP ),
	LOOKUP_ENTRY( KC_SYSTEM_WAKE ),
	LOOKUP_ENTRY( KC_AUDIO_MUTE ),
	LOOKUP_ENTRY( KC_AUDIO_VOL_UP ),
	LOOKUP_ENTRY( KC_AUDIO_VOL_DOWN ),
	LOOKUP_ENTRY( KC_MEDIA_NEXT_TRACK ),
	LOOKUP_ENTRY( KC_MEDIA_PREV_TRACK ),
	LOOKUP_ENTRY( KC_MEDIA_STOP ),
	LOOKUP_ENTRY( KC_MEDIA_PLAY_PAUSE ),
	LOOKUP_ENTRY( KC_MEDIA_SELECT ),
	LOOKUP_ENTRY( KC_MEDIA_EJECT ),
	LOOKUP_ENTRY( KC_MAIL ),
	LOOKUP_ENTRY( KC_CALCULATOR ),
	LOOKUP_ENTRY( KC_MY_COMPUTER ),
	LOOKUP_ENTRY( KC_WWW_SEARCH ),
	LOOKUP_ENTRY( KC_WWW_HOME ),
	LOOKUP_ENTRY( KC_WWW_BACK ),
	LOOKUP_ENTRY( KC_WWW_FORWARD ),
	LOOKUP_ENTRY( KC_WWW_STOP ),
	LOOKUP_ENTRY( KC_WWW_REFRESH ),
	LOOKUP_ENTRY( KC_WWW_FAVORITES ),
	LOOKUP_ENTRY( KC_MEDIA_FAST_FORWARD ),
	LOOKUP_ENTRY( KC_MEDIA_REWIND ),
	LOOKUP_ENTRY( KC_FN0 ),
	LOOKUP_ENTRY( KC_FN1 ),
	LOOKUP_ENTRY( KC_FN2 ),
	LOOKUP_ENTRY( KC_FN3 ),
	LOOKUP_ENTRY( KC_FN4 ),
	LOOKUP_ENTRY( KC_FN5 ),
	LOOKUP_ENTRY( KC_FN6 ),
	LOOKUP_ENTRY( KC_FN7 ),
	LOOKUP_ENTRY( KC_FN8 ),
	LOOKUP_ENTRY( KC_FN9 ),
	LOOKUP_ENTRY( KC_FN10 ),
	LOOKUP_ENTRY( KC_FN11 ),
	LOOKUP_ENTRY( KC_FN12 ),
	LOOKUP_ENTRY( KC_FN13 ),
	LOOKUP_ENTRY( KC_FN14 ),
	LOOKUP_ENTRY( KC_FN15 ),
	LOOKUP_ENTRY( KC_FN16 ),
	LOOKUP_ENTRY( KC_FN17 ),
	LOOKUP_ENTRY( KC_FN18 ),
	LOOKUP_ENTRY( KC_FN19 ),
	LOOKUP_ENTRY( KC_FN20 ),
	LOOKUP_ENTRY( KC_FN21 ),
	LOOKUP_ENTRY( KC_FN22 ),
	LOOKUP_ENTRY( KC_FN23 ),
	LOOKUP_ENTRY( KC_FN24 ),
	LOOKUP_ENTRY( KC_FN25 ),
	LOOKUP_ENTRY( KC_FN26 ),
	LOOKUP_ENTRY( KC_FN27 ),
	LOOKUP_ENTRY( KC_FN28 ),
	LOOKUP_ENTRY( KC_FN29 ),
	LOOKUP_ENTRY( KC_FN30 ),
	LOOKUP_ENTRY( KC_FN31 ),
	LOOKUP_ENTRY( KC_MS_UP ),
	LOOKUP_ENTRY( KC_MS_DOWN ),
	LOOKUP_ENTRY( KC_MS_LEFT ),
	LOOKUP_ENTRY( KC_MS_RIGHT ),
	LOOKUP_ENTRY( KC_MS_BTN1 ),
	LOOKUP_ENTRY( KC_MS_BTN2 ),
	LOOKUP_ENTRY( KC_MS_BTN3 ),
	LOOKUP_ENTRY( KC_MS_BTN4 ),
	LOOKUP_ENTRY( KC_MS_BTN5 ),
	LOOKUP_ENTRY( KC_MS_WH_UP ),
	LOOKUP_ENTRY( KC_MS_WH_DOWN ),
	LOOKUP_ENTRY( KC_MS_WH_LEFT ),
	LOOKUP_ENTRY( KC_MS_WH_RIGHT ),
	LOOKUP_ENTRY( KC_MS_ACCEL0 ),
	LOOKUP_ENTRY( KC_MS_ACCEL1 ),
	LOOKUP_ENTRY( KC_MS_ACCEL2 ),

	// QMK keycodes
	LOOKUP_ENTRY( RESET ),
	LOOKUP_ENTRY( DEBUG ),
	LOOKUP_ENTRY( MAGIC_TOGGLE_NKRO ),
	LOOKUP_ENTRY( KC_GESC ),
	//LOOKUP_ENTRY( GRAVE_ESC ),

    // Backlight functionality
	// (for future support of other keyboards)
	LOOKUP_ENTRY( BL_ON ),
	LOOKUP_ENTRY( BL_OFF ),
	LOOKUP_ENTRY( BL_DEC ),
	LOOKUP_ENTRY( BL_INC ),
	LOOKUP_ENTRY( BL_TOGG ),
	LOOKUP_ENTRY( BL_STEP ),
	LOOKUP_ENTRY( BL_BRTG ),

    // RGB functionality
	// (for future support of other keyboards)
	LOOKUP_ENTRY( RGB_TOG ),
	LOOKUP_ENTRY( RGB_MOD ), // RGB_MODE_FORWARD
	//LOOKUP_ENTRY( RGB_SMOD), // RGB_MODE_FORWARD
	//LOOKUP_ENTRY( RGB_MODE_FORWARD ),
	LOOKUP_ENTRY( RGB_RMOD ), // RGB_MODE_REVERSE
	//LOOKUP_ENTRY( RGB_MODE_REVERSE ),
	LOOKUP_ENTRY( RGB_HUI ),
	LOOKUP_ENTRY( RGB_HUD ),
	LOOKUP_ENTRY( RGB_SAI ),
	LOOKUP_ENTRY( RGB_SAD ),
	LOOKUP_ENTRY( RGB_VAI ),
	LOOKUP_ENTRY( RGB_VAD ),
	LOOKUP_ENTRY( RGB_SPI ),
	LOOKUP_ENTRY( RGB_SPD ),
	LOOKUP_ENTRY( RGB_M_P ), // RGB_MODE_PLAIN
	//LOOKUP_ENTRY( RGB_MODE_PLAIN ),
	LOOKUP_ENTRY( RGB_M_B ), // RGB_MODE_BREATHE
	//LOOKUP_ENTRY( RGB_MODE_BREATHE ),
	LOOKUP_ENTRY( RGB_M_R ), // RGB_MODE_RAINBOW
	//LOOKUP_ENTRY( RGB_MODE_RAINBOW ),
	LOOKUP_ENTRY( RGB_M_SW ), // RGB_MODE_SWIRL
	//LOOKUP_ENTRY( RGB_MODE_SWIRL ),
	LOOKUP_ENTRY( RGB_M_SN ), // RGB_MODE_SNAKE
	//LOOKUP_ENTRY( RGB_MODE_SNAKE ),
	LOOKUP_ENTRY( RGB_M_K ), // RGB_MODE_KNIGHT
	//LOOKUP_ENTRY( RGB_MODE_KNIGHT ),
	LOOKUP_ENTRY( RGB_M_X ), // RGB_MODE_XMAS
	//LOOKUP_ENTRY( RGB_MODE_XMAS ),
	LOOKUP_ENTRY( RGB_M_G ), // RGB_MODE_GRADIENT
	//LOOKUP_ENTRY( RGB_MODE_GRADIENT ),


	LOOKUP_ENTRY( KC_LSPO ),
	LOOKUP_ENTRY( KC_RSPC ),

	// Shifted characters
	// These work because LSFT(x) is being pre-processed here
	LOOKUP_ENTRY( KC_TILD ),
	LOOKUP_ENTRY( KC_TILDE ),
	LOOKUP_ENTRY( KC_EXLM ),
	LOOKUP_ENTRY( KC_EXCLAIM ),
	LOOKUP_ENTRY( KC_AT ),
	LOOKUP_ENTRY( KC_HASH ),
	LOOKUP_ENTRY( KC_DLR ),
	LOOKUP_ENTRY( KC_DOLLAR ),
	LOOKUP_ENTRY( KC_PERC ),
	LOOKUP_ENTRY( KC_PERCENT ),
	LOOKUP_ENTRY( KC_CIRC ),
	LOOKUP_ENTRY( KC_CIRCUMFLEX ),
	LOOKUP_ENTRY( KC_AMPR ),
	LOOKUP_ENTRY( KC_AMPERSAND ),
	LOOKUP_ENTRY( KC_ASTR ),
	LOOKUP_ENTRY( KC_ASTERISK ),
	LOOKUP_ENTRY( KC_LPRN ),
	LOOKUP_ENTRY( KC_LEFT_PAREN ),
	LOOKUP_ENTRY( KC_RPRN ),
	LOOKUP_ENTRY( KC_RIGHT_PAREN ),
	LOOKUP_ENTRY( KC_UNDS ),
	LOOKUP_ENTRY( KC_UNDERSCORE ),
	LOOKUP_ENTRY( KC_PLUS ),
	LOOKUP_ENTRY( KC_LCBR ),
	LOOKUP_ENTRY( KC_LEFT_CURLY_BRACE ),
	LOOKUP_ENTRY( KC_RCBR ),
	LOOKUP_ENTRY( KC_RIGHT_CURLY_BRACE ),
	LOOKUP_ENTRY( KC_LABK ),
	LOOKUP_ENTRY( KC_LEFT_ANGLE_BRACKET ),
	LOOKUP_ENTRY( KC_RABK ),
	LOOKUP_ENTRY( KC_RIGHT_ANGLE_BRACKET ),
	LOOKUP_ENTRY( KC_COLN ),
	LOOKUP_ENTRY( KC_COLON ),
	LOOKUP_ENTRY( KC_PIPE ),
	LOOKUP_ENTRY( KC_LT ),
	LOOKUP_ENTRY( KC_GT ),
	LOOKUP_ENTRY( KC_QUES ),
	LOOKUP_ENTRY( KC_QUESTION ),
	LOOKUP_ENTRY( KC_DQT ),
	LOOKUP_ENTRY( KC_DOUBLE_QUOTE ),
	LOOKUP_ENTRY( KC_DQUO ),

#if 0
	// Basic layer changing
	// These work because MO(x), TG(x), OSL(x) is being pre-processed here
	MO( 0 ), "MO(0)",
	MO( 1 ), "MO(1)",
	MO( 2 ), "MO(2)",
	MO( 3 ), "MO(3)",
	TG( 0 ), "TG(0)",
	TG( 1 ), "TG(1)",
	TG( 2 ), "TG(2)",
	TG( 3 ), "TG(3)",
	OSL( 0 ), "OSL(0)",
	OSL( 1 ), "OSL(1)",
	OSL( 2 ), "OSL(2)",
	OSL( 3 ), "OSL(3)",
#endif

	// Zeal60 specific keycodes
	LOOKUP_ENTRY( BR_INC ),
	LOOKUP_ENTRY( BR_DEC ),
	LOOKUP_ENTRY( EF_INC ),
	LOOKUP_ENTRY( EF_DEC ),
	LOOKUP_ENTRY( ES_INC ),
	LOOKUP_ENTRY( ES_DEC ),
	LOOKUP_ENTRY( H1_INC ),
	LOOKUP_ENTRY( H1_DEC ),
	LOOKUP_ENTRY( S1_INC ),
	LOOKUP_ENTRY( S1_DEC ),
	LOOKUP_ENTRY( H2_INC ),
	LOOKUP_ENTRY( H2_DEC ),
	LOOKUP_ENTRY( S2_INC ),
	LOOKUP_ENTRY( S2_DEC ),
	LOOKUP_ENTRY( S2_INC ),
	LOOKUP_ENTRY( S2_DEC ),
	LOOKUP_ENTRY( FN_MO13 ),
	LOOKUP_ENTRY( FN_MO23 ),
	LOOKUP_ENTRY( FN_TT13 ),
	LOOKUP_ENTRY( FN_TT23 ),

	// Some aliases for QMK special keycodes
	LOOKUP_ENTRY( TG_NKRO ), // MAGIC_TOGGLE_NKRO
};

size_t getKeycodeStringValueCount()
{
	return sizeof(g_keycodeStringValue)/sizeof(g_keycodeStringValue[0]);
}

KeycodeStringValue *getKeycodeStringValue(size_t index)
{
	if ( index >= 0 && index < getKeycodeStringValueCount() )
	{
		return &(g_keycodeStringValue[index]);
	}
	return NULL;
}

size_t getModStringValueCount()
{
	return sizeof(g_modStringValue)/sizeof(g_modStringValue[0]);
}

KeycodeStringValue *getModStringValue( size_t index )
{
	if ( index >= 0 && index < getModStringValueCount() )
	{
		return &(g_modStringValue[index]);
	}
	return NULL;
}

bool stringToKeycodeEnum( const char *string, uint16_t *value )
{
	for ( size_t i = 0; i < getKeycodeStringValueCount(); i++ )
	{
		if ( strcmp( getKeycodeStringValue(i)->string, string ) == 0 )
		{
			*value = getKeycodeStringValue(i)->value;
			return true;
		}
	}
	return false;
}

bool stringToModEnum( const char *string, uint16_t *value )
{
	// string might be some OR-ed together mod strings.
	*value = 0;

	std::string s = string;
	while ( ! s.empty() )
	{
		int firstPipe = s.find("|");
		std::string token = s.substr(0, firstPipe);

		KeycodeStringValue *v = NULL;
		for ( size_t i = 0; i < getModStringValueCount(); i++ )
		{
			if ( strcmp( getModStringValue(i)->string, token.c_str() ) == 0 )
			{
				v = getModStringValue(i);
				break;
			}
		}
		if ( ! v )
		{
			return false;
		}
		*value |= v->value;
		s = ( firstPipe != std::string::npos ) ? s.substr( firstPipe+1, s.length() ) : "";
	}

	return true;
}

// Parse C-style hex literal e.g "0x12FE"
bool stringToHex( const char *string, uint16_t *value )
{
	std::string s = string;
	if ( s.length() == 6 &&
		s.substr( 0, 2 ) == "0x" )
	{
		std::string s2 = s.substr( 2, 4 );
		int number = 0;
		if ( sscanf( s2.c_str(), "%X", &number ) == 1 )
		{
			*value = number;
			return true;
		}

	}
	return false;
}

bool stringToNumber( const char *string, uint16_t *value )
{
	std::string s = string;
	int number = 0;
	if ( sscanf( s.c_str(), "%d", &number ) == 1 )
	{
		*value = number;
		return true;
	}
	return false;
}

bool macroExpand1( const char *macro, const char *arg1, uint16_t *value )
{
	// Just like compiled QMK keymaps, there is no argument checking.
	// i.e. OSM(mod) or OSL(layer) could be used with a keycode.
	// TODO: add validation
	std::string m = macro;
	uint16_t value1 = 0;
	if ( ! stringToValue( arg1, &value1 ) )
	{
		return false;
	}

#define _EXPAND(x) if ( m == #x ) { *value = x( value1 ); return true; }

	_EXPAND(LCTL);
	_EXPAND(LSFT);
	_EXPAND(LALT);
	_EXPAND(LGUI);
	_EXPAND(RCTL);
	_EXPAND(RSFT);
	_EXPAND(RALT);
	_EXPAND(RGUI);

	//_EXPAND(HYPR);
	//_EXPAND(MEH);
	//_EXPAND(LCAG);
	//_EXPAND(ALTG);
	//_EXPAND(SCMD);
	//_EXPAND(SWIN);

	_EXPAND(FUNC);
	_EXPAND(S);
	_EXPAND(F);
	_EXPAND(M);

	// Layer changing
	_EXPAND(TO);
	_EXPAND(MO);
	_EXPAND(DF);
	_EXPAND(TG);
	_EXPAND(OSL);
	_EXPAND(OSM);

	// I think I never implemented this because of the
	// Zeal60 FN_TT13/FN_TT23 special keycodes
	//_EXPAND(TT);

	_EXPAND(CTL_T);
	_EXPAND(SFT_T);
	_EXPAND(ALT_T);
	_EXPAND(GUI_T);
	_EXPAND(C_S_T);
	_EXPAND(MEH_T);
	_EXPAND(LCAG_T);
	_EXPAND(ALL_T);
	//_EXPAND(SCMD_T);
	//_EXPAND(SWIN_T);

	// Needs unicode defined in QMK 
	//_EXPAND(UC);

#undef _EXPAND

	return false;
}

bool macroExpand2( const char *macro, const char *arg1, const char *arg2, uint16_t *value )
{
	std::string m = macro;
	uint16_t value1 = 0;
	uint16_t value2 = 0;

	if ( m == "LT" )
	{
		// LT(layer,keycode)
		if ( stringToNumber( arg1, &value1 ) &&
			stringToKeycodeEnum( arg2, &value2 ) &&
			value2 <= 0xFF )
		{
			*value = LT( value1, value2 );
			return true;
		}
	}
	if ( m == "LM" )
	{
		// LM(layer,mod)
		if ( stringToNumber( arg1, &value1 ) &&
			stringToModEnum( arg2, &value2 ) )
		{
			*value = LM( value1, value2 );
			return true;
		}
	}
	if ( m == "MT" )
	{
		// MT(mod,keycode)
		if ( stringToModEnum( arg1, &value1 ) &&
			stringToKeycodeEnum( arg2, &value2 ) &&
			value2 <= 0xFF )
		{
			*value = MT( value1, value2 );
			return true;
		}
	}

	return false;
}

bool stringToMacroExpansion( const char *string, uint16_t *value )
{
	std::string s = string;

	// String is in form "X(Y)"
	int firstOpen = s.find("(");
	int lastClose = s.rfind(")");

	if ( firstOpen > 0 && lastClose == s.length()-1 )
	{
		// find a comma not inside other macros
		// need to keep track of open/close parenthesis
		int comma = -1;
		int level = 0;
		for ( int i=firstOpen+1; i<lastClose; i++ )
		{
			if ( s.at(i) == '(')
			{
				level++;
			}
			else if ( s.at(i) == ')')
			{
				level--;
			}
			else if ( level == 0 && s.at(i) == ',')
			{
				if ( comma == -1 )
				{
					comma = i;
				}
				else
				{
					// Cannot parse more than two arguments
					return false;
				}
			}
		}

		// Split the string into macro name, first and second arguments
		std::string macro = s.substr( 0, firstOpen );
		std::string arg1;
		std::string arg2; 

		if ( comma != -1 )
		{
			arg1 = s.substr( firstOpen+1, comma - (firstOpen+1) );
			arg2 = s.substr( comma+1, lastClose - (comma+1));
			return macroExpand2( macro.c_str(), arg1.c_str(), arg2.c_str(), value );
		}
		else
		{
			arg1 = s.substr( firstOpen+1, lastClose - (firstOpen+1));
			return macroExpand1( macro.c_str(), arg1.c_str(), value );
		}
	}

	return false;
}

bool stringToValue( const char *string, uint16_t *value )
{
	std::string s = string;

	if ( stringToMacroExpansion( string, value ))
	{
		return true;
	}
	if ( stringToKeycodeEnum( string, value ) )
	{
		return true;
	}
	if ( stringToModEnum( string, value ) )
	{
		return true;
	}
	if ( stringToHex( string, value ))
	{
		return true;
	}
	if ( stringToNumber( string, value ))
	{
		return true;
	}

	return false;
}

std::string valueToModString( uint16_t value )
{
	// Mod values are bitmasks.
	// value could be bitwise OR of multiple mod values.
	std::string modString;
	for ( size_t i = 0; i < getModStringValueCount(); i++ )
	{
		uint16_t v = getModStringValue(i)->value;
		if ( ( value & v ) == v )
		{
			if ( ! modString.empty() )
			{
				modString += "|";
			}
			modString += getModStringValue(i)->string;
		}
	}
	return modString;
}

std::string valueToString( uint16_t value )
{
	// Some aliases like KC_TILD = LSFT(KC_GRV) can be found in the named list.
	// Thus search the named list first.
	for ( size_t i = 0; i < getKeycodeStringValueCount(); i++ )
	{
		if ( getKeycodeStringValue(i)->value == value )
		{
			return std::string(  getKeycodeStringValue(i)->string );
		}
	}
	
	if ( value >= QK_MODS && value <= QK_MODS_MAX )
	{
		// Since these can be combined, need to clear the bit indicating the mod key
		// and convert the result, possibly recursively.
		// We could handle the aliases but meh...
		if ( value & QK_LCTL )
		{
			return std::string("LCTL(") + valueToString( value & ~QK_LCTL ) + std::string(")");
		}
		if ( value & QK_LSFT )
		{
			return std::string("LCTL(") + valueToString( value & ~QK_LSFT ) + std::string(")");
		}
		if ( value & QK_LALT )
		{
			return std::string("LALT(") + valueToString( value & ~QK_LALT ) + std::string(")");
		}
		if ( value & QK_LGUI )
		{
			return std::string("LGUI(") + valueToString( value & ~QK_LGUI ) + std::string(")");
		}
		if ( value & QK_RCTL )
		{
			return std::string("RCTL(") + valueToString( value & ~QK_RCTL ) + std::string(")");
		}
		if ( value & QK_LSFT )
		{
			return std::string("RCTL(") + valueToString( value & ~QK_RSFT ) + std::string(")");
		}
		if ( value & QK_LALT )
		{
			return std::string("RALT(") + valueToString( value & ~QK_RALT ) + std::string(")");
		}
		if ( value & QK_LGUI )
		{
			return std::string("RGUI(") + valueToString( value & ~QK_RGUI ) + std::string(")");
		}
	}
	else if ( value >= QK_LAYER_TAP && value <= QK_LAYER_TAP_MAX )
	{
		// LT(layer,kc)
		return std::string("LT(") + std::to_string((value>>8)&0x000F) + std::string(",") + valueToString( value & 0xFF ) + std::string(")");
	}
	else if ( value >= QK_TO && value <= QK_TO_MAX )
	{
		// TO(layer)
		return std::string("TO(") + std::to_string(value & 0x00FF) + std::string(")");
	}
	else if ( value >= QK_MOMENTARY && value <= QK_MOMENTARY_MAX )
	{
		// MO(layer)
		return std::string("MO(") + std::to_string(value & 0x00FF) + std::string(")");
	}
	else if ( value >= QK_DEF_LAYER && value <= QK_DEF_LAYER_MAX )
	{
		// DF(layer)
		return std::string("DF(") + std::to_string(value & 0x00FF) + std::string(")");
	}
	else if ( value >= QK_TOGGLE_LAYER && value <= QK_TOGGLE_LAYER_MAX )
	{
		// TG(layer)
		return std::string("TG(") + std::to_string(value & 0x00FF) + std::string(")");
	}
	else if ( value >= QK_ONE_SHOT_LAYER && value <= QK_ONE_SHOT_LAYER_MAX )
	{
		// OSL(layer)
		return std::string("OSL(") + std::to_string(value & 0x00FF) + std::string(")");
	}
	else if ( value >= QK_LAYER_MOD && value <= QK_LAYER_MOD_MAX )
	{
		// LM(layer,mod)
		uint8_t layer = (value>>4) & 0x000F;
		uint8_t mod = value & 0x000F;
		return std::string("LM(") + std::to_string(layer) + std::string(",") + valueToModString(mod) + std::string(")");
	}
	else if ( value >= QK_ONE_SHOT_MOD && value <= QK_ONE_SHOT_MOD_MAX )
	{
		// OSM(mod)
		return std::string("OSM(") + valueToModString(value & 0x00FF) + std::string(")");
	}
	else if ( value >= QK_LAYER_TAP_TOGGLE && value <= QK_LAYER_TAP_TOGGLE_MAX )
	{
		// TT(layer)
		return std::string("TT(") + std::to_string(value & 0x00FF) + std::string(")");
	}
	else if ( value >= QK_MOD_TAP && value <= QK_MOD_TAP_MAX )
	{
		// MT(mod,kc)
		uint8_t mod = (value>>8) & 0x001F;
		uint8_t kc = value & 0x00FF;
		return std::string("MT(") + valueToModString(mod) + std::string(",") + valueToString(kc) + std::string(")");
	}
	return std::string("?");
}
