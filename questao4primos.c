#include <stdio.h>
#include <math.h>
//MENU
void Menu (){

printf("!!!MENU!!!\n");
printf("1 : Cálculo de fatorial\n");
printf("2 : Verificação número primo\n");
printf("3 : Encontrar números primos\n");
printf("4 - 9 :Reexibir Menu\n");
printf("0 -: Terminar execução\n");
}

int main(void) {

  int opcao, loop =1;
  int numero, expoente;
  float base;
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
        case 5:
        case 6:
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
        
