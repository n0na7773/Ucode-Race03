#pragma once 
#ifndef MX_RAIN_H
#define MX_RAIN_H

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);
void mx_printerr(const char *str);

void mx_intro();
void mx_rain();
void mx_initcolor();

#endif

