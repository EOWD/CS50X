#include <cs50.h>
#include <stdio.h>
void sayHello(string input);
int main(void)
{
    string input;
    do
    {
        input = get_string("What's your name? ");
    }
    while (input == NULL);

    sayHello(input);
}

void sayHello(string i)
{
    printf("hello, %s\n", i);
}
