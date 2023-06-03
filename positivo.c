#include <stdio.h>
int main()
{
    int num, resto;
     printf("Digite um numero e diremos se ele e positivo ou negativo\n\n");
    scanf("%d", &num);
    resto = num % 2;
    if (resto==0)
    {
       printf("\nO numero %d e positivo. \n",num);
    }
    else
    {
        printf("\nO numero %d e negativo. \n",num);
    }
    
}
