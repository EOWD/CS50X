#include <cs50.h>
#include <stdio.h>

bool validate(long n);
int main(void)
{
    long input = get_long("Number: ");
    bool val = validate(input);
    printf("%b)
}

bool validate(long n)
{
    long everySec = 0;
    long num = n / 10;
    //printf("%li",num);
    while(num>0)
    {
        long number=num%10;
        everySec=everySec * 10 + number;

        num = num / 100;
    }
    printf("%li \n", everySec);

    long ma = 0;
    long newEverySec = everySec;
    while(newEverySec>0)
    {
        long currentNum=newEverySec % 10;
        int m=currentNum*2;
        if(m>9)
        {
            while(m>0)
            {
               int newNum=m%10;
               ma+=newNum;
               m=m/10;
            }
        }else{
            ma+=m;


        }
       newEverySec=newEverySec/10;

    }
    printf("%li\n",ma);
    printf("%li\n",n);
    int result=ma;
    long otherNums= n;
    while(otherNums>0)
    {
        int currentNum = otherNums % 10;
        result+=currentNum;
        otherNums=otherNums/100;

    }
    printf("%i",result);
    const int res = result % 10;
    return res == 0


}
