#include <stdio.h>
//Menu
void Menu(){
  printf("!!!MENU!!!\n\n1 - 9: Reexibir Menu;\n\n0: Terminar Execução;\n\n\nEscolha uma opção no menu: ");
}

int main(void) {

  int opcao, loop =1;
Menu();
scanf("%i", &opcao);

while(loop ==1) {
    switch (opcao) {
      case 1:
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
