#include "../inc/mx_rain.h"
void print_intro(char *s) {
    refresh();
    for(int i = 0; i < mx_strlen(s); i++) {        
        mvaddch(5, i + 4, s[i] | COLOR_PAIR(1));
        refresh();
        usleep(150000);
    }
    usleep(200000);
    clear();
}

void mx_intro() {
    initscr();
    mx_initcolor();

    char *text1 = "Wake up , Neo..";
    char *text2 = "The Matrix has you..";
    char *text3 = "Follow the white rabbit";
    char *text4 = "Knock, knock, Neo";

    print_intro(text1);
    print_intro(text2);
    print_intro(text3);
    print_intro(text4);
    refresh();

    endwin();
}
