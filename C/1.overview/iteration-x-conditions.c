#include <stdio.h>

int main()
{
    int num = 10;

    if (num < 20)
    {
        printf("Failure!");
    }
    else if (num < 50)
    {
        printf("Smol Failure.");
    }
    else
    {
        printf("Winner");
    }

    return 0;
}
