/* 
 * File:   trocard.c
 * Author: Lucas Borges <lucascomputacao@gmail.com at gmail.com>
 *
 * Created on 10 de Abril de 2015, 21:17
 */

#include <stdio.h>
#include <stdlib.h>
#define MAXVETOR 9999

/*
 * 
 */
int main(int argc, char** argv) {
    long int array[MAXVETOR];
    long int i,compare, count;
    char vetchar[MAXVETOR];
    int alice, beatriz;
    /*

        for (i = 0; i < MAXVETOR; i++) {
            array[i] = i;
            vetchar[i] = '\0';
        }

        printf("tamanho: %ld \n", sizeof (array));
        printf("tamanho char: %ld\n", sizeof (vetchar));
     */

    do {
        //primeira linha nº de cartas de Alice e Beatriz
        scanf("%d %d", &alice, &beatriz);
        printf("Alice: %d  Beatriz: %d\n", alice, beatriz);
        //segunda linha - cartas de Alice
        for (i = 0; i < alice; i++) {
            printf("\nSequencia de Alice\n");
            scanf("%d", &vetchar[i]);
            printf("lido:%d\t", vetchar[i]);
        }
        if (vetchar[15] == NULL) {
            printf("\n Nulo o teste");
        }
        printf("tamanho char: %ld\n", sizeof (vetchar));
        //terceira linha - cartas de Beatriz
        for (i = 0; i < beatriz; i++) {
            printf("\nSequencia de Beatriz\n");
            // função de hashing? teste para saber se há no vetor
            scanf("%d", compare);
            // teste para saber se temos a carta já armazenada no vetor
            if (vetchar[compare] == NULL) {
                //se der nulo, Alice não tem essa carta 
                count++;
            }
        }

    } while (alice != 0 && beatriz != 0);

    return (EXIT_SUCCESS);
}

