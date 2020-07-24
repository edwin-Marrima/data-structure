#include <stdio.h>
#include <stdlib.h>
#include "Arvore.h"


struct arvore {
	char info;
	Arvore* prim; //filho
	Arvore* prox;//proximo irmao
};
Arvore* cria(char c){
	Arvore* p = (Arvore*)malloc(sizeof(Arvore));
	
	p->prim = NULL;
	p->prox = NULL;
	p->info = c;

}
int vazia(Arvore* p){
	return p==NULL;
}
void insere(Arvore* pai, Arvore* filho){
	filho->prox = pai->prim;
	pai->prim = filho;
}
void imprime (Arvore* a){
Arvore* p;
 printf("%c\n",a->info);
 for (p=a->prim; p!=NULL; p=p->prox)

 imprime(p);
}
void imprime_2 (Arvore* a){
	if(!vazia(a)){
		printf("\n %c",a->info);
		imprime_2(a->prim);
		imprime_2(a->prox);
	}
}
int Nr_elementos(Arvore* p){
	if(!vazia(p)){
	return 1+Nr_elementos(p->prim)+Nr_elementos(p->prox);
	}else{
		return 0;
	}	
}
int Nr_folhas(Arvore* p){
	if(!vazia(p)){
		
		if(vazia(p->prim)){
			return 1+Nr_folhas(p->prim)+Nr_folhas(p->prox); 
		}else{
			return Nr_folhas(p->prim)+Nr_folhas(p->prox); 
		}	
	}else{
		return 0;
	}
}
int comparacaoArvores(Arvore* p1, Arvore *p2){
	int a=vazia(p1);
	int b=vazia(p2);
	 if(a!=b){
	 	return 0;
	 }else if (a==0 && b==0){
	 	return comparacaoArvores(p1->prim,p2->prim) * comparacaoArvores(p1->prox,p2->prox);
	 }else {
	 	return 1;
	 }
	      
}

int nr_folhas(Arvore* p){
	int x = vazia(p);
	if(x==0){
		return vazia(p->prim) + nr_folhas(p->prim) + nr_folhas(p->prox);
	}else{
		return 0;
	}
}



