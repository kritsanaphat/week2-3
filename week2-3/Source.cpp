#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x, i, j, k, y;
	printf("Enter number : ");
	scanf("%d", &x);
	if (x > 0) {
		for (i = 0; i < x; i++) {
			for (j = i; j <= x - 1; j++) {
				if (j == x - 1) {
					for (k = 0; k <= i; k++) {
						printf("* ");
					}
				}
				else printf(" ");
			}
			printf("\n");
		}
		for (i = 0; i < x - 1; i++) {
			for (j = 0; j < x; j++) {
				if (j <= i) {
					printf(" ");
				}
				else printf("* ");
			}
			printf("\n");
		}
	}
	else printf("Error");
}