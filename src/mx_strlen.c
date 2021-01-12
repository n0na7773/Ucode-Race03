#include "header.h"

int mx_strlen(const char *s) {
    int count = 0; 

    if (!s) return 0;
    while (s[count] != '\0') count++;

    return count;
}
