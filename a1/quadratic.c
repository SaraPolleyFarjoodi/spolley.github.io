/*
 -------------------------------------
 File:    quadratic.c
 Project: quadratic
 file description
 -------------------------------------
 Author:  Sara Polley Farjoodi
 ID:      210679960
 Email:   poll9960@mylaurier.ca
 Version  2023-01-20
 -------------------------------------
 */
#include <stdio.h>
#include <math.h>

#define EPSILON 1e-6 // or #define EPSILON 0.000001

int main(int argc, char *argv[]) {
	float a, b, c, d, x1, x2;

	if (argc < 2) {
		printf("argument input:missing\n");
	} else {
		int n = sscanf(argv[1], "%f,%f,%f", &a, &b, &c);
		if (n != 3) {
			printf("input:invalid\n");
		} else {

			printf("(%f)x^2+(%f)x+(%f)=0 ", a, b, c);

			if (fabs(a) < EPSILON) {
				printf("is not a quadratic equation\n");
			} else {

				d = (b * b - 4 * a * c);

				if (d > 0) {
					x1 = (-b + sqrt(d)) / (2 * a);
					x2 = (-b - sqrt(d)) / (2 * a);
					printf("has two distinct real roots: %f, %f\n", x1, x2);

				} else if (d == 0) {
					x1 = -b / (2 * a);
					printf("has two equal real roots: %f\n", x1);

				} else if (d < 0) {
					x1 = -b / (2 * a);
					x2 = sqrt(-d) / (2 * a);

					printf("has two complex roots: %f+%fi, %f-%fi\n", x1, x2, x1,
							x2);

				}

			}
		}
	}
	return 0;
}

