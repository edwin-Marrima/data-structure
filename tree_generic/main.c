#include <stdio.h>
#include <stdlib.h>
#include "Arvore.c"


int main (void){
	
	Arvore * a = cria('A');
	Arvore * b = cria('B');
	Arvore * c = cria('C');
	Arvore * d = cria('D');
	Arvore * e = cria('E');
	Arvore * f = cria('F');
	Arvore * g = cria('G');
	Arvore * h = cria('H');
	Arvore * i = cria('I');
	Arvore * j = cria('J');
	
	insere(c,d);
	insere(b,e);
	insere(b,c);
	insere(i,j);
	insere(g,i);
	insere(g,h);
	insere(a,g);
	insere(a,f);
	insere(a,b);
	
		Arvore * aa = cria('A');
	Arvore * bb = cria('B');
	Arvore * cc = cria('C');
	Arvore * dd = cria('D');
	Arvore * ee = cria('E');
	Arvore * ff = cria('F');
	Arvore * gg = cria('G');
	Arvore * hh = cria('H');
	Arvore * ii = cria('I');
	Arvore * jj = cria('J');
	
	insere(cc,dd);
	insere(bb,ee);
	insere(bb,cc);
	insere(ii,jj);
	insere(gg,ii);
	insere(gg,hh);
	insere(aa,gg);
	insere(aa,ff);
	insere(aa,bb);
//	printf("esta %d",vazia(f));
//	 imprime_2 (a);
	// int elementos = Nr_elementos (a);
	  //printf("\n A arvore possui %d elementos",elementos);
	  int folhass  = nr_folhas(a);
	  printf("\n A arvore possui %d folhas",folhass);
	  int compara=comparacaoArvores(aa,a);
	  printf("sao %d ",compara);
	return 0;
}
