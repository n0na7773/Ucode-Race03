#include "../inc/mx_rain.h"

int main(int argc, char *argv[]){
	if(argc == 2) {
		if(mx_strlen(argv[1]) == 2 && mx_strcmp(argv[1], "-s") == 0) mx_rain();
		else mx_printerr("usage: ./matrix_rain [-s]\n");
	}
	else if(argc == 1 || argv[0]) {
		mx_intro();
		mx_rain();
	}
	else mx_printerr("usage: ./matrix_rain [-s]\n");
}
