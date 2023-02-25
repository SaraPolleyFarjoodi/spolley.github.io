/*
 -------------------------------------
 File:    factorial.c
 Project: factorial
 file description
 -------------------------------------
 Author:  Sara Polley Farjoodi
 ID:      210679960
 Email:   poll9960@mylaurier.ca
 Version  2023-01-20
 -------------------------------------
 */

#include <stdio.h>

int main(int argc, char *args[]) {
	int n = 0, x, f = 1, is_overflow = 0;

	if (argc > 1) {
		sscanf(args[1], "%d", &n); // this gets integer value from command line argument argv[1].

		if (n >= 1) {

			for (int i = 1; i <= n; i++) {
				x = f;
				f = i * f;
				if (x != f / i) { //overflow happens
					is_overflow = 1;
					break;
				}
			}
				if (is_overflow == 0) {
					printf("%d!:%d\n", n, f);
				} else {
					printf("%d!:overflow\n", n);
				}

		} else {
			printf("%s:invalid\n", args[1]);
		}
	} else {
		printf("argument input:missing\n");
	}
	return 0;
}
