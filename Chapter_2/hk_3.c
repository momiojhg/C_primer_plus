#include <stdio.h>

int main(void)
{
    int age, day;
    age = 20;
    day = 365 * age;

    printf("I'm %d years old\n", age);
    printf("I've been living %d days", day);

    return 0;
}