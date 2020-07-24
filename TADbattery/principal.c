#include <stdio.h>
#include <stdlib.h>
#include "Pilha.c"


int main(void){
	Pilha *p1;
	p1= cria();
	conversao(p1,12);
	

		int i;
		for(i=tamanho(p1)-1;i>=0;i--){
		printf("%d",retorna(p1,i));	
		}
	return 0;
}
