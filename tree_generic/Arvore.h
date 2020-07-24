
typedef struct arvore Arvore;
/*cria um n� folha, dada a informa��o a ser armazenada;*/
Arvore* cria(char c);
/*
 insere uma nova sub-�rvore como filha de um dado n�;
cria a hierarquia
*/
void insere(Arvore* pai, Arvore* filho);
void imprime (Arvore* a);
/*imprime 2*/
void imprime_2 (Arvore* a);
/*retorna 1 caso a pilha esteja fazia e zero caso tenha algo dentro*/
int vazia(Arvore* p);
/*
retorna o numero de nos em uma arvore
*/
int Nr_elementos (Arvore* p);
