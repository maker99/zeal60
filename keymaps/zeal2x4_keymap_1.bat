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
KC_1     KC_2     KC_3     KC_4      ^
KC_5     KC_6     KC_7     KC_8      

..\zeal60\zealM2x4 keymap 1 ^
KC_TRNS  KC_TRNS  KC_TRNS  KC_TRNS   ^
KC_TRNS  KC_TRNS  KC_TRNS  KC_TRNS   

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
