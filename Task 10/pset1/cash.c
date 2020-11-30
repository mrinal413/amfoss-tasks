#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    int cents; float dollars;

    do
    {
        dollars = get_float("Change_owed: ");
        cents = round(dollars*100);
    }while(cents<=0);
    
    int quarters = cents/25;
    int dimes = (cents%25)/10;
    int nickels = ((cents%25)%10)/5;
    int pennies = (((cents%25)%10)%5);

    printf("%d \n", quarters+dimes+nickels+pennies);
}
