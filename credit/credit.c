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
    long num = n / 10;
    //printf("%li",num);
    while(num>0)
    {
        long number=num%10;
        newLong=newLong * 10 + number;

        num = num / 100;
    }
    printf("%li \n", newLong);

    long ma = 0;
    while(newLong>0)
    {
        long currentNum=newLong % 10;
        ma+=currentNum*2;
        newLong=newLong/10;

    }
    printf("%li",ma);


}
