#include <stdio.h>

void hello()
{
    printf("%s", "Hi");
}

void greeter(char *name)
{
    printf("%s", name);
}

void printAllElements(int nums[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", nums[i]);
    }
}
int main()
{
    // hello();
    // greeter("Karume");
    int nums[] = {1, 2, 3, 4, 5};
    printAllElements(nums);
    return 0;
}
