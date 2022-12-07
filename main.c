#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "./logtree.h"
#include "./fila_fifo.h"
#include "./escalonador.h"

int main(int narg, char * argv[]) {
    Escalonador e;
    if(narg == 1){
        puts("Nenhum parametro encontrado.");
        return EXIT_FAILURE;
    }
    e_rodar(&e, argv[1], "saida-0000.txt");
    return EXIT_SUCCESS;
}
