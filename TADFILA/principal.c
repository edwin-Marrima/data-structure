#include <stdlib.h>
#include <stdio.h>
#include "Texto.c";

int main(void){
	Fila *p1;
	p1=cria();
	int a = inserir (p1, 'E');
 a = inserir (p1, 'o');
 a = inserir (p1, 'w');
 a = inserir (p1, 'i');
 a = inserir (p1, 'n');

	printf("%c",retorno(p1,0));
	printf("%c",retorno(p1,1));
	printf("%c",retorno(p1,2));
	printf("%c",retorno(p1,3));
	printf("%c",retorno(p1,4));
int b = editar(p1,1,'d');	


	printf("%c",retorno(p1,0));
	printf("%c",retorno(p1,1));
	printf("%c",retorno(p1,2));
	printf("%c",retorno(p1,3));
	printf("%c",retorno(p1,4));
	return 0;
}
