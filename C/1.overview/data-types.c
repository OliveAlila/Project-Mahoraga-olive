#include <stdio.h>

int main()
{
    // int
    // int num = 10;
    // int num1 = 10;
    // int num2 = 10;
    // int num3 = 10;

    // declaration with assignment
    int num, num1, num2, num3 = 10;

    // only declaration
    int num, num1, num2, num3;

    // only assigmnent
    num = 2;

    // float
    float numFloat = 20.2;

    // double
    double numDouble = 20.2;

    // char
    char letter = 'D';

    // string
    char *letters;

    // array
    int numArray[10];
    int numArray2[] = {1, 2};

    // format specifier
    printf("Integer: %i \n", num);
    printf("Float: %f \n", numFloat);
    printf("Double:  %lf \n", numDouble);
    printf("Character: %c \n", letter);
    printf("String %c \n", letters);
    printf("Array element %d \n", num);

    return 0;
}
