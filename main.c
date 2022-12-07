#include <stdio.h>
#include <stdlib.h>
#include "./logtree.h"
#include "./fila_fifo.h"
#include "./escalonador.h"

int main(int narg, char * argv[]) {
    Escalonador e;
    if(narg == 1){
        puts("Nenhum arquivo encontrado");
        return EXIT_FAILURE;
    }
    e_rodar(&e, argv[1], argv[2]);
    return EXIT_SUCCESS;
}
