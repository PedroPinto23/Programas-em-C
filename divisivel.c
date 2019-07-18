#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
int divisivel(int val1,int val2){
	if (val1 % val2 == 0)
	printf("\nÓtimo! eles são divisíveis entre si!");
	else 
	printf("\nops! eles não são divisíveis entre si..");
}
int main() {
	setlocale(LC_ALL, "");
	int num1,num2;
    printf("Insira um número: ");
	scanf("%d", &num1);
	printf("\nInsira outro número: ");
	scanf("%d", &num2);
	divisivel(num1,num2);
}
