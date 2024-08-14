#include<stdio.h>
#include<cs50.h>
void sayHello(string input);
int main(void)
{
    do {
        string input=get_string("What's your name? ");
    }while(input==NULL)

    sayHello(input);

}


void sayHello(string i)
{
printf("hello, %s\n", i);
}
