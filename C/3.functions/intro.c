#include <stdio.h>

// prototypes
char *helloWorld();
char *greeter(char *name);
int sum(int a, int b);

int main(int argc, char const *argv[])
{
    // function call
    int value = sum(11, 2);

    printf("%d", value);
    return 0;
}

// function declarations
char *helloWorld()
{
    return ("Hello World");
}

char *greeter(char *name)
{
    return (name);
}

int sum(int a, int b)
{
    return (a + b);
}
