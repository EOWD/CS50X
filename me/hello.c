#include<stdio.h>
#include<cs50.h>
string sayHello(string input);
int main(void)
{
    string input=get_string("What's your name?");
    sayHello(input);

}


string sayHello(string i)
{
printf("hello, %s\n", i);
}
