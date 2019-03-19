#import <stdio.h>

void menu(){
  printf("\n    ----MENU----\n\n");
  printf("1: Calcular Fatorial;\n\n");
  printf("2 - 9: Reexibir Menu;\n\n");
  printf("0: Terminar Execução;\n\n\n");
  printf("Digite uma opção do menu: ");
}
void fatorial(int f){
  //f! = f * (f – 1) * (f – 2) * (f – 3) * (f - n)...
  //n > f
  int fatorial = f, contador;
  if(f > 0){
    for(contador = 1; f > contador ;contador++){
        fatorial = fatorial*(f-contador);
      }
    printf("\n!%d é igual a: %d\n", f, fatorial);
  }else{
    printf("ERRO.");
  }
}

/*----------------------------MAIN----------------------------*/

int main(void) {
  int opcao, repeticao = 1;
  int numero;
  menu();
  scanf("%d", &opcao);
  while(repeticao == 1){
    switch(opcao){
      case 1:
        printf("\n----Calculadora de Fatorial----\n\nDigite um número: ");
        scanf("%d", &numero);
        fatorial(numero);
        menu();
        scanf("%d", &opcao);
        break;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        menu();
        scanf("%d", &opcao);
        break;
      case 0:
        printf("\nAdeus!");
        repeticao = 0;
        break;
      default:
        printf("Opção desejada é inexistente, tente novamente: ");
        menu();
        scanf("%d", &opcao);
        break;
    }
  } 
  return 0;
}
