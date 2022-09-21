#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[40]; 
    int qtd_produtos;
    float totalc;
    char cidade[30]; 
    int end;
}informacao;

int main(){

    informacao pessoa, vendas[10];
    
    int i = 0;

    while (pessoa.end != 0 && i < 10) {
        
        int retorno;

    
        fgets(pessoa.nome, 40, stdin);
        setbuf(stdin, NULL);

        retorno = strncmp(pessoa.nome, "encerrar", 8);

        //0 é o valor retornado quando a string é igual

        if (retorno != 0){

            scanf(" %d", &pessoa.qtd_produtos);
            setbuf(stdin, NULL);
        
            scanf(" %f", &pessoa.totalc);
            setbuf(stdin, NULL);
        
            fgets(pessoa.cidade, 30, stdin);
            pessoa.cidade[strcspn(pessoa.cidade, "\n")] = '\0';

            vendas[i] = pessoa;
            i++;

        }else{

            pessoa.end = 0;
        }
    }
        
    
    int soma_qtd = 0;

        for (int j = 0; j < i; j++)
        {
            soma_qtd = soma_qtd + vendas[j].qtd_produtos;
        }

    printf("Quantidade vendida: %d\n", soma_qtd);

    float soma_total = 0;

        for (int k = 0; k < i; k++){
            soma_total = soma_total + vendas[k].totalc;
        }

    printf("Valor arrecadado: %.2f\n", soma_total);

    float maior = vendas[0].totalc;
    int q = 0; 
    int index = 0;

    for (int q = 0; q < i; q++) {

        if (vendas[q].totalc > maior){
            maior = vendas[q].totalc;
            index = q;
        }
    }
    
    printf("%s", vendas[index].nome);
    printf("%s", vendas[index].cidade);

    return 0;
}