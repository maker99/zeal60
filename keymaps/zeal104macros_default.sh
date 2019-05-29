#REM maker99, 2019-05-20 09:18

echo macros 
../zeal60/zealM104 get_macros

echo set macros
../zeal60/zealM104 set_macros "macro0" "macro1\0macro2" "macro3\n" 'macro4 taps enter \\x28:\1\x28'

echo macros 
../zeal60/zealM104 get_macros


# use these macro Tap keycodes after \1 tap \2 down and \3 up
# Example: send control insert (copy) and shift insert (paste):  
# the keycodes for control, shift, insert:  
#    X_LCTRL:e0, 
#    X_LSHIFT:e1, 
#    X_INSERT:49 
# the macro sequence is: 
#    down X_LCTRL,  tap X_INSERT, up X_LCTRL
#    down X_LSHIFT, tap X_INSERT, up X_LSHIFT
# converted to hex: 
#     \2    \xe0    \1  \x49      \3  \xe0
#     \2    \xe1    \1  \x49      \3  \xe1   
# as macro string: 
#  '\2\xe0\1\x49\3\xe0'
#  '\2\xe1\1\x49\3\xe1'
#

# X_NO                 00
# X_ROLL_OVER          01
# X_POST_FAIL          02
# X_UNDEFINED          03
# X_A                  04
# X_B                  05
# X_C                  06
# X_D                  07
# X_E                  08
# X_F                  09
# X_G                  0a
# X_H                  0b
# X_I                  0c
# X_J                  0d
# X_K                  0e
# X_L                  0f
# X_M                  10
# X_N                  11
# X_O                  12
# X_P                  13
# X_Q                  14
# X_R                  15
# X_S                  16
# X_T                  17
# X_U                  18
# X_V                  19
# X_W                  1a
# X_X                  1b
# X_Y                  1c
# X_Z                  1d
# X_1                  1e
# X_2                  1f
# X_3                  20
# X_4                  21
# X_5                  22
# X_6                  23
# X_7                  24
# X_8                  25
# X_9                  26
# X_0                  27
# X_ENTER              28
# X_ESCAPE             29
# X_BSPACE             2a
# X_TAB                2b
# X_SPACE              2c
# X_MINUS              2d
# X_EQUAL              2e
# X_LBRACKET           2f
# X_RBRACKET           30
# X_BSLASH             31
# X_NONUS_HASH         32
# X_SCOLON             33
# X_QUOTE              34
# X_GRAVE              35
# X_COMMA              36
# X_DOT                37
# X_SLASH              38
# X_CAPSLOCK           39
# X_F1                 3a
# X_F2                 3b
# X_F3                 3c
# X_F4                 3d
# X_F5                 3e
# X_F6                 3f
# X_F7                 40
# X_F8                 41
# X_F9                 42
# X_F10                43
# X_F11                44
# X_F12                45
# X_PSCREEN            46
# X_SCROLLLOCK         47
# X_PAUSE              48
# X_INSERT             49
# X_HOME               4a
# X_PGUP               4b
# X_DELETE             4c
# X_END                4d
# X_PGDOWN             4e
# X_RIGHT              4f
# X_LEFT               50
# X_DOWN               51
# X_UP                 52
# X_NUMLOCK            53
# X_KP_SLASH           54
# X_KP_ASTERISK        55
# X_KP_MINUS           56
# X_KP_PLUS            57
# X_KP_ENTER           58
# X_KP_1               59
# X_KP_2               5a
# X_KP_3               5b
# X_KP_4               5c
# X_KP_5               5d
# X_KP_6               5e
# X_KP_7               5f
# X_KP_8               60
# X_KP_9               61
# X_KP_0               62
# X_KP_DOT             63
# X_NONUS_BSLASH       64
# X_APPLICATION        65
# X_POWER              66
# X_KP_EQUAL           67
# X_F13                68
# X_F14                69
# X_F15                6a
# X_F16                6b
# X_F17                6c
# X_F18                6d
# X_F19                6e
# X_F20                6f
# X_F21                70
# X_F22                71
# X_F23                72
# X_F24                73
# X_EXECUTE            74
# X_HELP               75
# X_MENU               76
# X_SELECT             77
# X_STOP               78
# X_AGAIN              79
# X_UNDO               7a
# X_CUT                7b
# X_COPY               7c
# X_PASTE              7d
# X_FIND               7e
# X__MUTE              7f
# X__VOLUP             80
# X__VOLDOWN           81
# X_LOCKING_CAPS       82
# X_LOCKING_NUM        83
# X_LOCKING_SCROLL     84
# X_KP_COMMA           85
# X_KP_EQUAL_AS400     86
# X_INT1               87
# X_INT2               88
# X_INT3               89
# X_INT4               8a
# X_INT5               8b
# X_INT6               8c
# X_INT7               8d
# X_INT8               8e
# X_INT9               8f
# X_LANG1              90
# X_LANG2              91
# X_LANG3              92
# X_LANG4              93
# X_LANG5              94
# X_LANG6              95
# X_LANG7              96
# X_LANG8              97
# X_LANG9              98
# X_ALT_ERASE          99
# X_SYSREQ             9a
# X_CANCEL             9b
# X_CLEAR              9c
# X_PRIOR              9d
# X_RETURN             9e
# X_SEPARATOR          9f
# X_OUT                a0
# X_OPER               a1
# X_CLEAR_AGAIN        a2
# X_CRSEL              a3
# X_EXSEL              a4

# /* Modifiers */
# X_LCTRL              e0
# X_LSHIFT             e1
# X_LALT               e2
# X_LGUI               e3
# X_RCTRL              e4
# X_RSHIFT             e5
# X_RALT               e6
# X_RGUI               e7

# /* System Control */
# X_SYSTEM_POWER       a5
# X_SYSTEM_SLEEP       a6
# X_SYSTEM_WAKE        a7

# /* Media Control */
# X_AUDIO_MUTE         a8
# X_AUDIO_VOL_UP       a9
# X_AUDIO_VOL_DOWN     aa
# X_MEDIA_NEXT_TRACK   ab
# X_MEDIA_PREV_TRACK   ac
# X_MEDIA_STOP         ad
# X_MEDIA_PLAY_PAUSE   ae
# X_MEDIA_SELECT       af
# X_MEDIA_EJECT        b0
# X_MAIL               b1
# X_CALCULATOR         b2
# X_MY_COMPUTER        b3
# X_WWW_SEARCH         b4
# X_WWW_HOME           b5
# X_WWW_BACK           b6
# X_WWW_FORWARD        b7
# X_WWW_STOP           b8
# X_WWW_REFRESH        b9
# X_WWW_FAVORITES      ba
# X_MEDIA_FAST_FORWARD bb
# X_MEDIA_REWIND       bc
