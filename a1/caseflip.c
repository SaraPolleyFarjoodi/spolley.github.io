/*
 -------------------------------------
 File:    caseflip.c
 Project: caseflip
 file description
 -------------------------------------
 Author:  Sara Polley Farjoodi
 ID:      210679960
 Email:   poll9960@mylaurier.ca
 Version  2023-01-20
 -------------------------------------
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	//the following line is for Eclipse console none-buffered output, in case you use Eclipse to do your assignment
	setvbuf(stdout, NULL, _IONBF, 0); //or setbuf(stdout, NULL);

	char c = 0, temp;
	do {
		printf("Please enter a character\n");
		scanf("%c", &c); //this is to get a character input from keyboard stdin.

		// flush the input buffer
		do { // this loop is to get rid of additional characters in stdin buffer
			scanf("%c", &temp);
			if (temp == '\n')
				break;
		} while (1);

		if (c == '*') {
			printf("%c:quit\n", c);
			exit(0);
		} else if (c < 'A' | (c > 'Z' && c < 'a') | c > 'z') {
			printf("%c:invalid\n", c);
		} else {
			if (c >= 'a' && c <= 'z') { //if it's a lowercase number
				printf("%c:%c\n", c, c - 32);
			} else { // if uppercase is entered
				printf("%c:%c\n", c, c + 32);
			}
		}

	} while (1);

	return 0;
}

