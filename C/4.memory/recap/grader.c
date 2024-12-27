#include <stdio.h>

char grader(float marks);
int main()
{
    char grade = grader(70);
    printf("%c", grade);
    return 0;
}

char grader(float marks)
{
    if (marks >= 70)
    {
        return 'A';
    }
    else if (marks >= 60)
    {
        return 'B';
    }
    else if (marks >= 50)
    {
        return 'C';
    }
    else
    {
        return 'F';
    }
}
