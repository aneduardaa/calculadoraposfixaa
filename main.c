#include <stdio.h>
#include "calculadoraPosfixa.h"

int main() {
    const char *expressaoPosfixada = "2 3 + log 5 /";

    double resultado = avaliarExpressaoPosfixada(expressaoPosfixada);
    printf("Resultado da expressão pós-fixada: %lf\n", resultado);

    char *expressaoPreFixada = converterParaPreFixada(expressaoPosfixada);
    printf("Expressão pré-fixada: %s\n", expressaoPreFixada);

    free(expressaoPreFixada);
    return 0;
}
