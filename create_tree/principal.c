#include <stdio.h>
#include <stdlib.h>
#include "NoArvore.c"





int main(void){
	NoArvore *p1;
		NoArvore *p11;
		NoArvore *p12;
		NoArvore *p13;
	p13 = cria(40,NULL, NULL);	
	p12 =  cria(1,NULL, NULL);	
	p11 = cria(2,p12, NULL);	
	p1 =cria(15,p11, p13);


//	imprimirPreOrdem(p1);

	return 0;
}
