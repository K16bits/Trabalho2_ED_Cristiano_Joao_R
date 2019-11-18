#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int vetor[], int n) { //http://www.devfuria.com.br/logica-de-programacao/exemplos-na-linguagem-c-do-algoritmo-bubble-sort/
    int k, j, aux;

    for (k = 1; k < n; k++) {
        for (j = 0; j < n - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j+1] = aux;
            }
        }
    }
}





int main(){

    srand(time(NULL)); //TIME
    
    int x; // Tamanho do Malloc
    int *Vetor_1; // 1 vetor 

    FILE *arquivo; // 1 txt

    arquivo = fopen("arquivo_misto.txt", "w");

    printf("Digite a quantidade de numeros: ");
    scanf("%d",&x);
    
    Vetor_1 = (int*)malloc(x*sizeof(int)); //Alocar o Tam do vetor do tamanho de X

    for(int i = 0; i < x ; i++){ //Colocando valores aleatorios
        
        Vetor_1[i] = rand()%x;
        fprintf(arquivo, "%d",Vetor_1[i]); //Adicionando os valores
        fprintf(arquivo, "%c",'\n');  // Dando espaços
        }

    for(int i = 0; i < x;i++)
        printf("V[%d]: %d\n",i,Vetor_1[i]);

    printf("\n");
    bubble_sort(Vetor_1,x); 

    for(int i = 0; i < x;i++)
        printf("V[%d]: %d\n",i,Vetor_1[i]);

    fclose(arquivo);
    free(Vetor_1);
}