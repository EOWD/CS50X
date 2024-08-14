#include <cs50.h>
#include <stdio.h>

void validate(long n);
int main(void)
{
    long input = get_long("Number: ");
    validate(input);
}

void validate(long n)
{
    long newLong = 0;
    long multiplier = 1;
    long num = n / 10;
    //printf("%li",num);
    while(num>0)
    {
        long number=num%10;
        newLong=newLong * multiplier + number;
        multiplier *=10;
        number = num / 10;
    }
    printf("%li", newLong);


}
