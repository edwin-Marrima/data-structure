#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

#define TAM 60
struct pilha{
	int vetor[TAM];
	int  valor;
	int topo ;
	
}; 
Pilha* cria(){
	Pilha* p = (Pilha*)malloc(sizeof(Pilha));
	
	p->topo=0;
	return p;
}

void conversao(Pilha* p,int v){
      while(v!=0){
      	push(p,v%2);
      	v=v/2;
	  }	  
}

void push(Pilha* p, int v){
	if(cheio(p)==0){
		p->vetor[p->topo]=v;
		p->topo++;
	}else{
		printf("Fila esta esgotada");
	}
}

int cheio(Pilha *p){
	if(p->topo>=TAM){
		return 1;
	}else {
		return 0;
	}
}
int retorna(Pilha*p,int pos){
	return p->vetor[pos];
}
int tamanho(Pilha* p){
	return p->topo;
}
