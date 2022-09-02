#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct{
    char nome[30];
    long  cpf;
}Pessoa;

Pessoa Quantidade_Cadastros[];

/*int QuantidadeCad(int quantidade){
    

    printf("Digite a quantidade de cadastros desejados: ");
    scanf("%d", &quantidade);
    fflush(stdin);

    return quantidade;
}*/

Pessoa Cadastrar(){ 
    Pessoa pessoas;
    
    printf("NOME: ");
    fgets(pessoas.nome, 29, stdin);
    printf("CPF: ");
    scanf(" %ld", &pessoas.cpf);
    scanf("%*c");
    
    return pessoas;
}

void printCadastros(Pessoa pessoas_print){

    printf("NOME: %s", pessoas_print.nome);
    printf("CPF: %ld\n", pessoas_print.cpf);
    printf("\n");
}

int main()
{   
    int i, qtd_cadastros;

    printf("Quantidade de cadastros: ");
    scanf("%d", &qtd_cadastros);
    fflush(stdin);

    //Pessoa lista_pessoas[qtd_cadastros];

    for (int i = 0; i < qtd_cadastros; i++){
        Quantidade_Cadastros[i] = Cadastrar();
    }

    for (i = 0; i < qtd_cadastros; i++){
        printCadastros(Quantidade_Cadastros[i]); 
    }
    
    //printCadastros(qtd_cadastros, lista_pessoas);

    return 0;
}