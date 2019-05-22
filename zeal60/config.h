#pragma once
// define VID, PIC, HID interface number, buffer size and keyboards' rows and columns

#ifdef ZEAL65

#define DEVICE_VID 0xFEED
#define DEVICE_PID 0x6065
#define DEVICE_INTERFACE_NUMBER 0x01

#define RAW_HID_BUFFER_SIZE 32

#define MATRIX_COLS 15
#define MATRIX_ROWS 5

#else

#define DEVICE_VID 0xFEED
#define DEVICE_PID 0x6060
#define DEVICE_INTERFACE_NUMBER 0x01

#define RAW_HID_BUFFER_SIZE 32

#define MATRIX_COLS 14
#define MATRIX_ROWS 5

#endif