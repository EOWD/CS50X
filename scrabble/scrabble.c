#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(int argv, string argc[])
{
    printf("%s\n", argc[1]);
    int d[int(argc[1])];
    d[0]=1;
    int array_len=sizeof(d)/sizeof(d[0]);
   // printf("%i \n",array_len);
    for (int i=1;i<array_len;i++)
    {
        d[i]=d[i-1]*2;
        printf("%i ",d[i]);
    }
printf("\n");
}
