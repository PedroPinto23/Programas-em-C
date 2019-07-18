#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
	int razao,num, pa[10];
	setlocale(LC_ALL, "");
	printf("Número inicial: ");
	scanf("%d", &num);
	printf("Razão: ");
	scanf("%d", &razao);
	for (int i = 0; i< 10;i++){
	num += razao;
	pa[i] = num;
}
	for (int i = 0; i< 10;i++){
       printf("%d\n", pa[i]);
}
}
