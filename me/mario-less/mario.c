#include<cs50.h>
#include<stdio.h>
void buildBlocks(int n);
int main(void)
{
    int input;
    do
    {
        input = get_int("Height")
    }
    while(input)
    buildBlocks();
}
void buildBlocks(int n)
{
    string space=" ";
    string block="#";
    int spaceNum=n-1;
    int blockNum=1;
    for(int i=0; i<n, i++)
    {
        for(int i=0; i<spaceNum, i++)
        {
           printf("%s", space)
           spaceNum --
        }
         for(int i=0; i<blockNum, i++)
        {
           printf("%s", block)
           blockNum ++

        }
        print("\n")

    }
}
