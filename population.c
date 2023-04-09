#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n;
    do
    {
        n = get_int("Starting population size: ");
    }
    while (n < 9);
    // TODO: Prompt for end size
    int o;
    do
    {
        o = get_int("Ending population size: ");
    }
    while (o < n);
    // TODO: Calculate number of years until we reach threshold
    int y = 0;
    for (int i = n; i < o; i = n)
    {
        n = i + (i / 3) - (i / 4);
        y++;
    }
    // TODO: Print number of years
    printf("Years: %i\n", y);
}
