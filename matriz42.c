#include <stdio.h>
#include <stdlib.h>

int main(){

  char materia[3][200];
  float notas[3][2];
  float somaNotas = 0;
  float media[3];
  int i, j;

  for(i = 0; i < 3; i++){
    printf("Digite o nome da materia: ");
    gets(materia[i]);
    
    for(j = 0; j < 2; j++){
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
      printf("Nome da disciplina: %s\n", materia[i]);
    for(j = 0; j < 2; j++){
      printf("Notas do aluno: %.1f\n", notas[i][j]);
    }
    printf("Media do aluno: %.1f\n", media[i]);
    
      if (media >= 7){
      printf("Aprovado.\n");
      } else if (media >= 5){
      printf("Recuperacao.\n");
      } else{
      printf("Reprovado.\n");
      }
    }



  return 0;
}