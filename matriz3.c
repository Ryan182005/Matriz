#include <stdio.h>
#include <stdlib.h>

int main(){

  char nomes[3][200];
  float notas[3][3];
  float somaNotas = 0;
  float media[3];
  int i, j;
  
  for(i = 0; i < 3; i++){
      printf("\nDigite o nome do aluno: ");
      gets(nomes[i]);
      
    for(j = 0; j < 3; j++){
      printf("Digite a nota: ");
      scanf("%f", &notas[i][j]);

      somaNotas += notas[i][j];
    }
        media[i] = somaNotas / j;
        somaNotas = 0;
        fflush(stdin);
  }

  printf("\n\n\nExibindo resultados...\n\n\n");

  for(i = 0; i < 3; i++){
    printf("\nNome do aluno: %s\n", nomes[i]);
    
    for(j = 0; j < 3; j++){

      printf("Notas do aluno: %.1f \n", notas[i][j]);

    }

      printf("Media do aluno: %.1f\n", media[i]);

  }
  return 0;
}