#include <cs50.h>
#include <stdio.h>

bool validate(long n);
string card(long n);
int main(void)
{
    long input = get_long("Number: ");
    bool val = validate(input);
    printf("%s\n", val?"true":"false");
    if(!val)
    {
        printf("INVALID\n");

    }
    else
    {
        printf("%s",card(input));
    }

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
    return res == 0;


}
//51, 52, 53, 54, or 55
string card(long n)
{
    long countN=n;
    int count=0;
    while(countN>0){
        countN/=10;
        count++;
    }
    long cardNum=n;
    while(cardNum>=100)
    {
        cardNum=cardNum/10;
    }
    if((cardNum==35||cardNum==37)&&count==15)
    {
        return "AMEX\n";

    }
    else if ((cardNum>=51&&cardNum<=55)&&count==16)
    {
        return "MASTERCARD\n";
    }
    else if((cardNum / 10 == 4) && (count==16||count==13))
    {
       return "VISA\n";
    }
    else
    {
        return "INVALID\n";
    }
}
