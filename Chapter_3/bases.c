/*100 in decimal, octal, hex*/
#include <stdio.h>

int main(void)
{
    int x = 100;

    printf("dec = %d; octal = %o; hgex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hgex = %#x\n", x, x, x);

    return 0;
}
