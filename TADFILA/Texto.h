#define TEXTO_H_INCLUDED

#define TAM 10

typedef char elemento;
typedef struct fila Fila;

Fila* cria ();
/*inserir um dado na fila*/
int inserir (Fila*p, char x);
/*retorna o tam da fila*/
int Tamanho(Fila* p);
/*retorna true se a fila estiver cheia*/
int cheia(Fila* p);
/*verifica se a fila esta vazia ou nao*/
int vazia(Fila* p);
/*retorna string que encontra em uma determinada posicao*/
char retorno(Fila* p,int posicao);
/*retorna true, caso consiga alterar um determinado dado*/
int editar(Fila* p, int posicao,char x); 

