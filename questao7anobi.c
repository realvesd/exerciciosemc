#include <stdio.h>
#include <math.h>
//MENU
void Menu (){

printf("!!!MENU!!!\n");
printf("1 : Cálculo de fatorial\n");
printf("2 : Verificação número primo\n");
printf("3 : Encontrar números primos\n");
printf("4 : Cálculo de potência\n");
printf("5 : Cálculo de raiz\n:");
printf("6 : Verificar se ano é bissexto\n:")
printf("7 - 9 :Reexibir Menu\n");
printf("0 -: Terminar execução\n");
}

//ANO BISSEXTO

void bissexto(int x){
  if(x%4 == 0){
    printf("\nO ano %i é um ano bissexto.\n",x);
  }else{
    printf("\nO ano %i não é um ano bissexto.\n",x);
  }
}

#include <stdio.h>
#include <math.h>
//MENU
void Menu (){

printf("!!!MENU!!!\n");
printf("1 : Cálculo de fatorial\n");
printf("2 : Verificação número primo\n");
printf("3 : Encontrar números primos\n");
printf("4 : Cálculo de potência\n");
printf("5 : Cálculo de raiz\n:");
printf("6 : Verificar se ano é bissexto\n:")
printf("7 - 9 :Reexibir Menu\n");
printf("0 -: Terminar execução\n");
}

//FATORIAL
void Fatorial (int i){
int fatorial = i;
int resposta = 1;

if (i > 0 ) {
 for(;fatorial >= 1; --fatorial) {
  resposta *= fatorial;
  }
  printf("o valor do fatorial é %i\n", resposta);

  } 
  else{
  printf("erro!");
}
}

//PRIMO
void Primo (int p) {
int num, resposta;

while (p <= num) {
  p = 1;
if (num%p == 0) {
  resposta = resposta + 1;
} else {
  p = p+1;
}
}
if (resposta == 2) {
  printf("\nO %d número é primo!\n", num);
} else {
  printf("\nO %d número não é primo\n", num);
}
}

//POTENCIA
void Potencia (int b) {

float a, resposta;

resposta = pow(a,b);

printf("A potência de %f elevado a %d é igual a:%.2e\n",a, b, resposta);

}

//RAIZ

void Raiz (int c) {

float a, resposta;

resposta = pow(c, 1/a);
printf("O resultado da raiz de %f em %d é igual a %.2e\n", a, c, resposta); 

}

//ANO BISSEXTO

void Bissexto(int x){
  if(x%4 == 0){
    printf("\nO ano %i é um ano bissexto.\n",x);
  }else{
    printf("\nO ano %i não é um ano bissexto.\n",x);
  }
}
int main(void) {

  int opcao, loop =1;
  int numero;
Menu();
scanf("%i", &opcao);

while(loop ==1) {
    switch (opcao) {
      case 1:
        printf("1:  Cálculo de fatorial\nInforme o valor para calcular o fatorial:");
        scanf("%i", &numero);
        Fatorial(numero);
        Menu();
        break;
      case 2:
        printf("2 : Verificação número primo\nInforme um número:");
        scanf("%d", &numero);
        Primo(numero);
        Menu();
        scanf("%d", &opcao);
        break;
      case 3:
        while (numero !=0) {
          printf("3 : Encontrar números primos\nInforme um número:");
          scanf("%d", &numero);
          Primo(numero);
          Menu();
          scanf("%d", &opcao);
        }
        break;
      case 4:
        printf("4 : Cálculo de potência\nInforme um número:");
        scanf("%d", &numero);
        Potencia(numero);
        Menu();
        scanf("%d", &opcao);
        break;
      case 5:
        printf("5 : Cálculo de raiz\nInforme um número:");
        scanf("%d", &numero);
        Raiz(numero);
        Menu();
        scanf("%d", &opcao);
        break;
      case 6:
      printf("6 : Verificar se ano é bissexto\nInforme um ano:");
        scanf("%d", &numero);
        Bissexto(numero);
        Menu();
        scanf("%d", &opcao);
        break;
      case 7:
      case 8:
      case 9:
        Menu();
        scanf("%d", &opcao);
        break;
      case 0:
      printf("Programa encerrado!\n");
      loop = 0;
        break;
      default:
        printf("Opção não existe, tente novamente: ");
        Menu();
        scanf("%i", &opcao);
        break;



    }
}

  return 0;
}
