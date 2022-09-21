#include <stdio.h>
#include <string.h>

typedef struct {
    int led;
    char descricao[100];
    float preco;
} store;

int main(){

    int q, i = 0;
    scanf("%d", &q);
    store produto[q];

    //Cadastrando produtos
    for (i = 0; i < q; i++){   
        scanf(" %d", &produto[i].led);
        setbuf(stdin, NULL);
        fgets(produto[i].descricao, 100, stdin);
        setbuf(stdin, NULL);
        scanf(" %f", &produto[i].preco);
        setbuf(stdin, NULL);
    }

    int cod, qtd;
    float pagamento = 0;

    //Comprando produtos
    while (cod != 0){
        scanf(" %d", &cod);
        setbuf(stdin, NULL);

        if(cod == 0){
            break;
        }else{
            scanf(" %d", &qtd);
            setbuf(stdin, NULL);

            if (qtd < 0){
                break;
            }
        }
        
        for (int j = 0; j < q; j++){
            if (cod == produto[j].led){
                pagamento = pagamento + (produto[j].preco * qtd);
            }
        }
    }

    //Imprimindo o valor total
    printf("%.2f", pagamento);

    return 0;
}