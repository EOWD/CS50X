#include<stdio.h>
#include<cs50.h>
string sayHello(string,input);
int main(void)
{
    string input=get_string("What's your name?");
    sayHello(input)

}


string sayHello(string input)
{
printf("hello, %s\n", input);
}
