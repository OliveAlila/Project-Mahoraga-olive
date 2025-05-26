#include <stdio.h>

int main()
{
    char *vowels = "aeiou";
    int numbers[] = { 10, 20, 30, 40, 50 };

    for (int i = 0; i < 5; i++)
    {
        printf("%c", *(vowels + i));
    }
    

    // printf("%c", vowels[0]);
    // printf("%c", *vowels);
    // printf("%c", *vowels);
    // printf("%c", *vowels);
    // printf("%c", *vowels);
    // printf("%c", *vowels);
    // printf("%d\n", *(numbers + 1));
    // printf("%d", *(numbers) + 1);

    return 0;
}
