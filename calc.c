#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float num1,num2,result;
    int cond;
    char op;

    printf("Escolha uma operação:\n+ - SOMA\n- -> SUBTRAÇÃO\n* -> MULTIPLICAÇÃO\n/ - DIVISÃO\n");

    while(cond != 1){
        
        printf("Operação:");
        scanf(" %c",&op);

        printf("\nDigite um numero:");
        scanf(" %f",&num1);

        printf("Digite outro numero:");
        scanf(" %f",&num2);


        switch(op){
            case '+':
                result = num1+num2;
                printf("Resultado: %f\n",result);
                break;

            case '-':
                result = num1-num2;
                printf("Resultado: %f\n",result);
                break;

            case '*':
                result = num1*num2;
                printf("Resultado: %f\n",result);
                break;
            
            case '/':
                result = num1/num2;
                printf("Resultado: %f\n",result);
                break;
        }
            
        printf("\nDeseja Sair?\n1 - S\n2 - N\n");
        scanf(" %d",&cond);
    } 
    return 0; 
}
