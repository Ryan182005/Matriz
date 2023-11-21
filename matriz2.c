#include <stdio.h>
#include <stdlib.h>


int main(){

 char alunos[4][200];//Dois alunos;
 float notas[4][3];//Dois alunos para 3 notas. 
 int a, b; 

  for(a = 0; a < 4; a++) {
    printf("\nDigite o nome do aluno: ");
    gets(alunos[a]);

    for(b = 0; b < 2; b++){
    printf("Digite a nota do aluno: ");
    scanf("%f", &notas[a][b]);
    }

    fflush(stdin); //Para Windows.
    //setbuf(stdin, 0); Para Linux
  }

printf("\nExibindo os dados dos alunos... \n");

  for(a = 0; a < 4; a++){
    printf("\nNome do aluno: %s \n", alunos[a]);
    for(b = 0; b < 2; b++){
      printf("Nota: %.1f \n", notas[a][b]);
    }
  }

  return 0;
}