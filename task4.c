//Задача 4. Найти среднее арифметическое цифр числа

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num, num1, num2, num3, num4;
    printf("Enter four-digit positive integer: \n");
    scanf("%d", &num);
    num1 = num % 10;
    num2 = num / 10 % 10;
    num3 = num /100 % 10;
    num4 = num / 1000 % 10;
    //int res = num1 + num2 + num3 + num4;
    float result = (float)(num1 + num2 + num3 + num4) / 4;
    
    printf("%.2f\n", result);
    


    return 0;
}
