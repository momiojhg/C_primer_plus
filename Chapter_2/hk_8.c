#include <stdio.h>

int main(void)
{
    printf("Starting now:\n");
    one_three();
    printf("done!");

    return 0;
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}

void two(void)
{
    printf("two\n");
}
