#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	
	printf("Digite um valor para x: ");
	scanf("%d", &x); 
	
	printf("Digite um valor para y: ");
	scanf("%d", &y);
	
	if (x == 0 && y == 0) {
		printf("Origem");
	}
	
	if (x < 0) {
		if (y >= 1) {
			printf("Quadrante 2");
		} else {
			printf("Quadrante 3");
		}
	}
	
	if (x > 0) {
		if (y >= 1) {
			printf("Quadrante 1");
		} else {
			printf("Quadrante 4");
		}
	}
	
	return 0;
}
