#pragma once
// define VID, PIC, HID interface number, buffer size and keyboards' rows and columns

#ifdef ZEAL65

#define DEVICE_VID 0xFEED
#define DEVICE_PID 0x6065
#define DEVICE_INTERFACE_NUMBER 0x01

#define RAW_HID_BUFFER_SIZE 32

#define MATRIX_COLS 15
#define MATRIX_ROWS 5

#elif ZEALM104

#define DEVICE_VID 0xFEED
#define DEVICE_PID 0x0104
#define DEVICE_INTERFACE_NUMBER 0x01

#define RAW_HID_BUFFER_SIZE 32

#define MATRIX_COLS 17
#define MATRIX_ROWS 8


#elif ZEALM2X4

#define DEVICE_VID 0xFEED
#define DEVICE_PID 0x0024
#define DEVICE_INTERFACE_NUMBER 0x01

#define RAW_HID_BUFFER_SIZE 32

#define MATRIX_COLS 4
#define MATRIX_ROWS 2


#else // standard zeal60

#define DEVICE_VID 0xFEED
#define DEVICE_PID 0x6060
#define DEVICE_INTERFACE_NUMBER 0x01

#define RAW_HID_BUFFER_SIZE 32

#define MATRIX_COLS 14
#define MATRIX_ROWS 5

#endif

// adding missing definition of min
#ifdef min
#else
#define min(x, y) (x < y ? x : y)
#endif
