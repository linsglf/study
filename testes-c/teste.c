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
    gets(produto.codigo);
    fflush(stdin);
    printf("Qual o valor da mercadoria? :");
    scanf("%d", &produto.preco);
    fflush(stdin);
    printf("Qual a quantidade? : ");
    scanf("%d", &produto.quantidade);
    fflush(stdin);
    printf("Qual o nome da mercadoria? :");
    gets(produto.nome);
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
    system("cls");
    printf("1 - Registrar mercadorias\n2 - Consultar mercadorias\n3 - Valor total da mercadoria\n4 - Alterar mercadoria\n5 - Sair\n");
    printf("\nDigite a opcao desejada:");
    scanf("%d", &opcao);
    
    int qtd_cadastro;

    if (opcao == 1)
    {
      printf("quantidade de cadastros: ");
      scanf("%d", &qtd_cadastro);
      fflush(stdin);

      for (i = 0; i < qtd_cadastro; i++){
        estoque[i] = Cadastrar();
        printf("index da mercadoria: %d\n", i);
        printf("||%s||\n", estoque[i].codigo);
        printf("\n");
      }
    }
    
    if (opcao == 2)
    {
      system("cls");

      int index = 0;
      for (int i = 0; i < qtd_cadastro; i++)
      {
        printf("Nome: %s\n", estoque[i].nome);
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
      system("pause");
    }
    
    if (opcao == 3)
    {
      system("cls");

      int valor_total = 0;

      for (int i = 0; i < qtd_cadastro; i++)
      {
        valor_total = valor_total + (estoque[i].preco * estoque[i].quantidade);
      }
      
      printf("VALOR: %d\n\n", valor_total);
      system("pause");
      
    }

    if (opcao == 4)
    {
        system("cls");

        int opcao_alteracao;
        int index = 0;

        for (int i = 0; i < qtd_cadastro; i++)
        {
          

          printf("Nome: %s\n", estoque[i].nome);
          printf("Index: %d\n", index);
          index++;
        }
    
        printf("Index da mercadoria: ");
        scanf("%d", &opcao_alteracao);

        for (int i = opcao_alteracao; i == opcao_alteracao; i++)
        {
          int escolhaAlt;
          printf("1 - Alterar Nome\n2 - Alterar preco\n3 - Alterar quantidade\n4 - Alterar codigo");
          printf("\nDigite a opcao desejada: ");
          scanf("%d", &escolhaAlt);
          fflush(stdin);

          if (escolhaAlt == 1)
          {
            printf("NOME: %s\n", estoque[i].nome);
            printf("Novo nome do produto:");
            gets(estoque[i].nome);
            fflush(stdin);
          }

          if (escolhaAlt == 2)
          {
            printf("Preco do produto: %dR$\n", estoque[i].preco);
            printf("Novo preco do produto: ");
            scanf("%d", &estoque[i].preco);
            fflush(stdin);
          }

          if (escolhaAlt == 3)
          {
            printf("Quantidade: %d\n", estoque[i].quantidade);
            printf("Nova quantidade: ");
            scanf("%d", &estoque[i].quantidade);
            fflush(stdin);
          }

          if (escolhaAlt == 4)
          {
            printf("Codigo do produto: %s\n", estoque[i].codigo);
            printf("Novo codigo do produto: ");
            gets(estoque[i].codigo);
            fflush(stdin);
          }
          
        }
        
        system("pause");

    }
    
    if(opcao == 5){
      printf("Voce saiu!");
    break;
    }
  }


  return 0;
}
