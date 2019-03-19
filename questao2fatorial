#include <stdio.h>

//MENU
void Menu (){

printf("!!!MENU!!!\n");
printf("1 : Cálculo de fatorial\n");
printf("2 - 9 :Reexibir Menu\n");
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
      scanf("%i", &opcao);
      break;
      case 2:
      case 3:
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
