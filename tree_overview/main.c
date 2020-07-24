#include <stdio.h>
#include <stdlib.h>
#include "Arvore.c"

int vai(int a){

if(a>0){

	return 1+vai(a-1);
}else if(a==0){
	return 0;
}
}
int main(void){
	Arvore * a1;Arvore * a2;Arvore * a3;Arvore * a4;Arvore * a5;Arvore * a;Arvore * a6;Arvore * a7;Arvore * a8;Arvore * a9;
	a9= cria('X',NULL,NULL);
	a8=cria('Y',NULL,NULL);
   
    a7 =cria('W',a8,NULL);
	a1 = cria('D',a7,NULL);
	a2 = cria('E',NULL,NULL);
	a3 = cria('B',a1,a2);
	
	a4 = cria('F',NULL,NULL);
	a5 = cria('G',NULL,NULL);
	a6 = cria('C',a4,a5);
	
	a = cria('A',a3,a6);
	
	Arvore * p1;Arvore * p2;Arvore * p3;Arvore * p4;Arvore * p5;Arvore * p;Arvore * p6;Arvore * p7;
	    p7 =cria('W',NULL,NULL);
	p1 = cria('D',a7,NULL);
	p2 = cria('E',NULL,NULL);
	p3 = cria('B',p1,p2);
	
	p4 = cria('F',NULL,NULL);
	p5 = cria('G',NULL,NULL);
	p6 = cria('C',p4,p5);
	
	p = cria('A',p1,p4);

int ggg=NR_de_folhas(a);
int yu = folhas_nr(a);
int yuu=ele(a);
int m=Nr_de_elementos(a);
int vc = igual(a,a);
int ouou = elee(a);
int xx = verifica_igualdade(a,a);
printf("Possui %d folhas %d mais %d",yuu,yu,vc);
	//	iguais(a,p,1);
//printf("eh verdade3? %d",pertence(a,'f'));
 /*int xx = verifica_igualdade(a,p);
 printf("\n SAO %d",xx);
int c=	Nr_de_elementos(a);
int cc=vai(5);
printf("\n%d \n %d eu",c,cc);
imprime(a);
*/
	return 0;
}
