#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int b;

    x = 0;
    y = 0;

    while (x <= 10)
    {
        printf("Laço 1\n");
        y= 0;
        while (y <= 5)
        {
            printf("\t laço 2\n");
            y++;            
        }
        x++;
    }
}