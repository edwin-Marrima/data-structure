#include <stdio.h>
#include <stdlib.h>
#include "Texto.h"


struct fila{
	int primeiro, ultimo;
	elemento itens[TAM];
};

Fila* cria (){
	Fila* p = (Fila*)malloc(TAM*sizeof(Fila));
	p->primeiro=0;
	p->ultimo=0;
	return p;
}
int inserir (Fila*p, char x){
	if(cheia(p)==0){
	    p->itens[p->ultimo] = x;
	    p->ultimo++;
	   
		return 1;
		}else {
			 	
	     return 0;		
		}
	
}

int editar(Fila* p, int posicao,char x){
	 if(Tamanho(p)>=posicao){
	    p->itens[posicao] = x;
	    return 1;
	 }else {
	 	return 0;
	 }	
}
char retorno(Fila* p,int posicao){
	if(vazia(p)==1){
		  if(Tamanho(p)>=posicao){
		  	return (p->itens[posicao]);
		  }else{
		  	
		  }
	}
}

int cheia(Fila* p){
	if(p->ultimo>=TAM){
		return 1;
	
	}else{
		return 0;
	} 
}

int vazia(Fila* p){
	if(p->ultimo==0){
		return 0;
	}else{
		return 1;
	}
}
int Tamanho(Fila* p){
	return (p->ultimo);
}


