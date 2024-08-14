#include <cs50.h>
#include <stdio.h>
void buildBlocks(int n);
int main(void)
{
    int input;
    do
    {
        input = get_int("Height: ");
    }
    while (input < 1);
    buildBlocks(input);
}
void buildBlocks(int n)
{
    string space = " ";
    string block = "#";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf("%s", space);
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%s", block);
        }
        printf("\n");
    }
}
