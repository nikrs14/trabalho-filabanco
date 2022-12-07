#include <stdio.h>
#include <stdlib.h>
#include "./logtree.h"
#include "./fila_fifo.h"
#include "./escalonador.h"

int main(int narg, char * argv[]) {
    Escalonador e;
    e_rodar(&e, "entrada-0002.txt", "nossa-saida-0002.txt");
    // testando pq o git ta testando minha paciencia
    return EXIT_SUCCESS;
}
