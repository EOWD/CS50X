#include<cs50.h>
#include<stdio.h>
void buildBlocks(int n);
int main(void)
{
    int input;
    do
    {
        input = get_int("Height");
    }
    while(input<1);
    buildBlocks(input);
}
void buildBlocks(int n)
{
    string space=" ";
    string block="#";
    int spaceNum=n-1;
    int blockNum=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<spaceNum; j++)
        {
           printf("%s", space);
           spaceNum --;
        }
         for(int k=0; k<blockNum; k++)
        {
           printf("%s", block);
           blockNum ++;

        }
        print("\n");

    }
}
