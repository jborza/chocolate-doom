#ifndef __I_SERIAL__
#define __I_SERIAL__

#define TERMINAL    "/dev/ttyUSB0"

#include <errno.h>
#include <fcntl.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>

#define BAUDRATE B115200
#define DISPLAY_STRING

int serial_set_interface_attribs(int fd, int speed);
void serial_set_mincount(int fd, int mcount);
int serial_print(char* message, int length);

#endif /* #ifndef __I_SERIAL__ */
