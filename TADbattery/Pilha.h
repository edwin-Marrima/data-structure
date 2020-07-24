#define TEXTO_H_INCLUDED

typedef struct pilha Pilha;
/*criacao*/
Pilha* cria();
/*por elemento na pilha*/
void push(Pilha* p, int v);

/*devolver o tamanho*/
int tamanho(Pilha* p);
/*infoemr se a pilha esta ou nao vazia*/
int vazia(Pilha *p);
/*libera espaco, destroi */
void libera(Pilha* p);
/*verificar se a pilha esta ou nao cheia*/
int cheio(Pilha* p);
/*funcao que tera o algoritmo de conversao*/
void conversao(Pilha* p,int v);
/*retornar os valores ja convertidos*/
int retorna(Pilha*p,int pos);
