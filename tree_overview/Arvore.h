
typedef struct arvore Arvore;
/*criacao de arvore vazia*/
Arvore * criavazia();
/*criar raiz com informacao de das sub arovres da esquerda e direita*/
Arvore* cria(char c, Arvore* esq, Arvore* dir);
/*libera espaco de memoria ocupado pela arvore*/
Arvore* libera(Arvore* p);
/*verifica se a arvore esta vazia ou nao
true -> vazia
false -> nao vazia
*/
int vazia(Arvore* p);
/*verificar se um determinado caracter pertence ou nao a arvore*/
int pertence(Arvore*p,char c);
/*informacao dos nos das arvores*/
void imprime(Arvore* p);
/*verifica de duas arvores sao identicas a nivel estrutural*/
int verifica_igualdade(Arvore* p,Arvore* p1);
/*ve quantos elementos temos em uma arvore*/
int Nr_de_elementos(Arvore* p);
