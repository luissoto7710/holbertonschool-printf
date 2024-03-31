#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_percent(void);
int print_char(int c);
int print_string(char *str);
int print_int(int number);


#endif 
