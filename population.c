#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int start;
    int end;
    int n = 0;
    // TODO: Prompt for start size
    do
    {
        start = get_int("Start size:");
    }
    while (start < 9);
    // TODO: Prompt for end size
    do
    {
        end = get_int("End size:");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold

    do
    {
        start  = start + round(start/3) - round(start/4);
        n = n + 1;
    }
    while (start < end);

    // TODO: Print number of years
    printf("Years: %i\n", n);
}
