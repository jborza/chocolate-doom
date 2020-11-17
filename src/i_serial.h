#ifndef __I_SERIAL__
#define __I_SERIAL__

#define TERMINAL    "/dev/ttyUSB0"

#include <errno.h>
#include <fcntl.h> 
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>

#define BAUDRATE B921600
#define DISPLAY_STRING

int serial_set_interface_attribs(int fd, int speed);
void serial_set_mincount(int fd, int mcount);
int serial_print(uint8_t* message, int length, int do_tcdrain);
void serial_drain();

#endif /* #ifndef __I_SERIAL__ */
