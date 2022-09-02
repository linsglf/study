#include <stdio.h>
#include <string.h>


typedef struct 
{
  char codigo[10];
  int preco;
  int quantidade;
  char nome[30];
}Mercadoria;

Mercadoria estoque[];

Mercadoria Cadastrar(){
    Mercadoria produto;

    printf("Qual codigo da mercadoria? :");
    fgets(produto.codigo, 9, stdin);
    fflush(stdin);
    printf("Qual o valor da mercadoria? :");
    scanf("%d", &produto.preco);
    fflush(stdin);
    printf("Qual a quantidade? : ");
    scanf("%d", &produto.quantidade);
    fflush(stdin);
    printf("Qual o nome da mercadoria? :");
    fgets(produto.nome, 29, stdin);
    fflush(stdin);
    printf("\n");
    
    return produto;
}

int main()
{ 
  int opcao;
  int i = 0;

  for (;;)
  {

    printf("1 - Registrar mercadorias\n2 - Consultar mercadorias\n3 - Valor total da mercadoria\n4 - Sair\n");
    printf("\nDigite a opcao desejada:");
    scanf("%d", &opcao);
    
    int i = 0;
    int qtd_cadastro;

    if (opcao == 1)
    {
      
     

      printf("quantidade de cadastros: ");
      scanf("%d", &qtd_cadastro);
      fflush(stdin);

      for (i = 0; i < qtd_cadastro; i++){
        estoque[i] = Cadastrar();
        printf("index da mercadoria: %d\n", i);
        printf("||%s||", estoque[i].codigo);
      }
    }

    //save = i;
    
    
    if (opcao == 2)
    {
      int index = 0;
      for (int i = 0; i < qtd_cadastro; i++)
      {
        printf("Nome: %s", estoque[i].nome);
        printf("Index: %d\n", index);
        index++;
      }
      
      
      printf("index da mercadoria desejada: ");
      scanf("%d", &i);
      system("cls");
      printf("NOME: %s", estoque[i].nome);
      printf("\n");
      printf("Codigo do produto: %s", estoque[i].codigo);
      printf("\n");
      printf("Quantidade: %d", estoque[i].quantidade);
      printf("\n");
      printf("Preco do produto: %dR$\n", estoque[i].preco);
      printf("\n");
    }
    
    if(opcao == 4){
      printf("Voce saiu!");
    break;
    }
    //printf("i: %d\n", i);
    //printf("---%d---\n", save);
  }

      
      
      
    /*case 2:
      printf("Qual o codigo da mercadoria a ser consultada?: ");
      scanf("%d");
      break;
    case 3:
      system("cls");
      printf("O valor do total de mercadorias é: %f");
      break;

    case 4:
      system("cls");
      printf("\nVoce saiu!\n\n");
      return;
      break;
    }
  }*/

  return 0;
}
