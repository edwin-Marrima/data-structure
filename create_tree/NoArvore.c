#include <stdio.h>
#include <stdlib.h>
#include "NoArvore.h"


struct noArvore{
	int valor;
	NoArvore * esq;
	NoArvore * direita;
};


NoArvore* cria(int valor, NoArvore * esq, NoArvore* direita){
     NoArvore * p = (NoArvore*) malloc(sizeof(NoArvore));
     if(p==NULL){
     	exit(1);
	 }else{
	 	p->valor = valor;
	 	p->esq  = esq;
	 	p->direita = direita;
	 }
	
	
	return p;
}

void imprimirPreOrdem (NoArvore* p){
	if (p!=NULL){
		printf("%i",p->valor);
		imprimirPreOrdem (p->esq);
		imprimirPreOrdem (p->direita);
	}
}
