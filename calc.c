#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"portuguese");
    float num1,num2,result;
    int cond;
    char op[2];

    printf("Escolha uma opera��o:\n+ - SOMA\n- -> SUBTRA��O\n* -> MULTIPLICA��O\n/ - DIVIS�O\n");

    while(cond != 1){
        
        printf("Opera��o:");
        gets(op);

        if(strcmp(op,"+") == 0){
            printf("Digite um numero:");
            scanf("%f",&num1);

            printf("Digite outro numero:");
            scanf("%f",&num2);

            result = num1+num2;
            printf("Resultado: %f\n",result);

            printf("\nDeseja Sair?\n1 - S\n2 - N\n");
            scanf("%d",&cond);
        }
            
        if(strcmp(op,"-") == 0){
            printf("Digite um numero:");
            scanf("%f",&num1);

            printf("Digite outro numero:");
            scanf("%f",&num2);

            result = num1-num2;

            printf("Resultado: %f\n",result);

            printf("\nDeseja Sair?\n1 - S\n2 - N\n");
            scanf("%d",&cond);
        }

        if(strcmp(op,"*") == 0){
            printf("Digite um numero:");
            scanf("%f",&num1);

            printf("Digite outro numero:");
            scanf("%f",&num2);

            result = num1*num2;

            printf("Resultado: %f\n",result);

            printf("\nDeseja Sair?\n1 - S\n2 - N\n");
            scanf("%d",&cond);
        }

        if(strcmp(op,"/") == 0){
            printf("Digite um numero:");
            scanf("%f",&num1);

            printf("Digite outro numero:");
            scanf("%f",&num2);

            result = num1/num2;

            printf("Resultado: %f\n",result);

            printf("\nDeseja Sair?\n1 - S\n2 - N\n");
            scanf("%d",&cond);
        }
    } 
    return 0; 
}