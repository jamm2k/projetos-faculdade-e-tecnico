// Nome 1: José Arthur de Mello Mulatinho 
// Nome 2: Gabrielly Lemos Chaim

#include <stdio.h>
#include <locale.h>
#define MAX 6

void lerNotas(float v[]){
  for (int i = 0; i < MAX; i++) {
    printf("Digite %iª nota: ", i+1);
    scanf("%f", &v[i]);
  }
}

void mostrarNotas(float v[]) {
  for (int i = 0; i < MAX; i++) {
    printf("Sua nota foi: %.1f\n", v[i]);
  }
}

float calcularMedia(float v[]) {
  float notas = 0, media;
  for (int i = 0; i < MAX; i++){
    notas = notas + v[i];
  }
  media = notas / MAX;
  return media;
}

float maiorNota(float v[]) {
  float maior = v[0];
  for (int i = 1; i < MAX; i++){
    if (v[i] > maior)
        maior = v[i];
  }
  return maior;
}

float menorNota(float v[]) {
  float menor = v[0];
  for (int i = 1; i < MAX; i++){
    if (v[i] < menor)
        menor = v[i];
  }
  return menor;
}

float segundaMaiorNota(float v[]) {
 // retornar a segunda maior nota desse vetor
    float maior = v[0], segundaMaior;
    int todasIguais = 1;

    maiorNota(v);

    for(int i = 0; i < MAX; i++){
      if (v[i] > segundaMaior && v[i] < maior){
        segundaMaior = v[i];
      }

      if (v[i] =! maior){
        todasIguais = 0;
      }
    }

    if(todasIguais == 1) {
      segundaMaior = maior;
    }

    return segundaMaior;
}

int main(void) {
  float notas[MAX], media, maior, menor, segundaMaior; 

  setlocale(LC_ALL, "Portuguese");

  lerNotas(notas);
  //mostrarNotas(notas);
  media = calcularMedia(notas);
  printf("A media das notas foi %.1f\n", media);
  maior = maiorNota(notas);
  printf("A maior nota foi %.1f\n", maior);
  segundaMaior = segundaMaiorNota(notas);
  printf("A segunda maior nota foi %.1f\n", segundaMaior);
  menor = menorNota(notas);
  printf("A menor nota foi %.1f\n", menor);

  return 0;
}