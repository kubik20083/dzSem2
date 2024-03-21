//Задача 1. Сумма трех чисел
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3, sum;
    printf("Enter three numbers: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    sum = num1 + num2 + num3;
    printf("%d + %d + %d = %d\n", num1, num2, num3, sum);


    return 0;
}
