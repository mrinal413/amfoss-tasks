#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long ccnum = get_long("Number: ");
    int d1 = 0, d2 = 0, pos = 0, odds = 0, evens = 0;

    while (ccnum > 0)
    {
        d2 = d1;
        d1 = ccnum % 10;

        if (pos % 2 == 0)
        {
            evens += d1;
        }
        else
        {
            int x = 2 * d1;
            odds += (x / 10) + (x % 10);
        }

        ccnum /= 10;
        pos++;
    }

    bool valid = (evens + odds) % 10 == 0;
    int first_two_digits = (d1 * 10) + d2;

    if (d1 == 4 && pos >= 13 && pos <= 16 && valid)
    {
        printf("VISA\n");
    }
    else if (first_two_digits >= 51 && first_two_digits <= 55 && pos == 16 && valid)
    {
        printf("MASTERCARD\n");
    }
    else if ((first_two_digits == 34 || first_two_digits == 37) && pos == 15 && valid)
    {
        printf("AMEX\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
