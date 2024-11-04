#include <stdio.h>

int main()
{
    char letter = 'K';
    char *letters_ptr = "K ";
    char letters_array[] = "K ";
    char letters_array_[] = {'a', 'e'};

    for (int i = 0; i < 3; i++)
    {
        printf("%c", letters_array[i]);
    }


    // printf("%c", letter);


    return 0;
}
