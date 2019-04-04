#include <stdio.h>
#include <cs50.h>

int main(void)
{
    double c_real;
    int coins=0;

    do
    {

        c_real = get_double("Change owed: ");

    }
    while(c_real < 0);


    int c = c_real*100; // Convert to cents

    while(c - 25 >= 0)
    {
        coins++;
        c = c - 25;


    }

    while(c - 10 >= 0)
    {

        coins++;
        c = c - 10;


    }

    while(c - 5 >= 0)
    {
        coins++;
        c = c - 5;


    }

    while(c - 1 >= 0)
    {
       coins++;
       c = c - 1;


    }


    printf("%d\n", coins);


}
