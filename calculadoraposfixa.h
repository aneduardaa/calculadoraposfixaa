#ifndef CALCULADORAPOSFIXADA_H
#define CALCULADORAPOSFIXADA_H

typedef struct No {
    double dado;
    struct No *proximo;
} No;

typedef struct {
    No *topo;
} Pilha;

typedef struct NoString {
    char dado[256]; // Armazena a string
    struct NoString *proximo;
} NoString;

typedef struct {
    NoString *topo;
} PilhaString;

void inicializar(Pilha *pilha);
void inicializarString(PilhaString *pilha);
void empilhar(Pilha *pilha, double valor);
void empilharString(PilhaString *pilha, const char *valor);
double desempilhar(Pilha *pilha);
char* desempilharString(PilhaString *pilha);
double avaliarExpressaoPosfixada(const char *expressao);
char* converterParaPreFixada(const char *expressaoPosfixada);

#endif
