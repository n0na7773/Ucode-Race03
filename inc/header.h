#ifndef HEADER_H
#define HEADER_H

#include <ncurses.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

void mx_intro();
void mx_initcolor();
void mx_rain();
void print_intro(char *s);

void mx_printerr(const char *s);
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);

#endif
