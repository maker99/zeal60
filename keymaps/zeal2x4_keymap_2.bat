@echo off
REM maker99, 2019-05-16 09:28

echo keymap 0 
..\zeal60\zealM2x4 get_keymap 0
echo keymap 1 
..\zeal60\zealM2x4 get_keymap 1
echo keymap 2 
..\zeal60\zealM2x4 get_keymap 2
echo keymap 3
..\zeal60\zealM2x4 get_keymap 3


..\zeal60\zealM2x4 keymap 0 ^
KC_UP     MACRO03      KC_F15     KC_F16      ^
KC_DOWN   KC_ENTER     KC_7       "LT(1,KC_F17)"      

..\zeal60\zealM2x4 keymap 1 ^
KC_TRNS  KC_A  KC_C  KC_F18   ^
KC_TRNS  KC_MENU  KC_D  KC_TRNS   

..\zeal60\zealM2x4 keymap 2 ^
KC_TRNS  KC_TRNS  KC_TRNS  KC_TRNS   ^
KC_TRNS  KC_TRNS  KC_TRNS  KC_TRNS   

..\zeal60\zealM2x4 keymap 3 ^
KC_TRNS  KC_TRNS  KC_TRNS  KC_TRNS   ^
KC_TRNS  KC_TRNS  KC_TRNS  KC_TRNS   


echo keymap 0 
..\zeal60\zealM2x4 get_keymap 0
echo keymap 1 
..\zeal60\zealM2x4 get_keymap 1
echo keymap 2 
..\zeal60\zealM2x4 get_keymap 2
echo keymap 3
..\zeal60\zealM2x4 get_keymap 3


pause
