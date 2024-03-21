//Задача 3. Разность двух чисел

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, sum;
    printf("Enter two numbers: \n");
    scanf("%d%d", &num1, &num2);
    sum = num1 - num2;
    printf("Difference of two numbers: \n");
    printf("%d - %d = %d\n", num1, num2, sum);


    return 0;
}
