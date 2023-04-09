#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // repeat prompt if n < 1 or n > 8
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    // make brick pyramid
    for (int i = 0; i < n; i++)
    {
        // make spaces before bricks
        for (int j = (i + 1); j < n; j++)
        {
            printf(" ");
        }
        // make bricks
        for (int k = n + i; k >= n; k--)
        {
            printf("#");
        }
        // space between pyramids
        printf("  ");
        // right side of pyramid
        for (int l = n + i; l >= n; l--)
        {
            printf("#");
        }
        // move to next line
        printf("\n");
    }
}
