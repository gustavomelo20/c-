#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char nome[50];
    float np1, np2, pim;
    int x, y;
    for (x=0; x<=LIM;x++){
        printf("Digite o nome do aluno:\t");
        scanf("%s", nome);
        printf("\NP 1:");
        scanf("%f", &np1);
        printf("Np 2:");
        scanf("%f", &np2);
        printf("pi:");
        scanf("%f", &pim);
        printf("Nota 4:");


        soma=np1+np2+pim;
        media=soma/4;
               if (media>=5) {
                      printf("Aluno aprovado! Media %f\n", media);
               }
               else {
                      printf("Aluno reprovado! Media %f\n", media);
               }
        printf("-----------------------------\n\n");
        }
  system("PAUSE");
  return 0;
}
