#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");

    }
    while(h < 0 || h > 23);
    if(h != 0)

    {
        for(int i = 0; i < h; i++)

    {
        for(int spaces = h-i; spaces > 1; spaces--)

        {
            printf(" ");

        }

        for(int hash = 1+i; hash >= 0; hash--)

        {
            printf("#");

        }

        printf("\n");



    }

    }

}
