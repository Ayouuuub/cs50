#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    int number_entered = 0;
    do {
         number_entered  = get_int("Number of cents: ");
    } while(number_entered < 0);

    return number_entered;
}

int calculate_quarters(int cents){
    int cc = 0;
    if (cents >= 25) {
        cc = cents / 25 ;
    }
    return cc;
}

int calculate_dimes(int cents)
{
    // TODO
        // int cc = calculate_quarters(cents);
        // int tmp = cents - cc * 25 ;
        int calculate_dimes = 0;
        if (cents >= 10) {
        calculate_dimes = cents / 10 ;
            }
    return calculate_dimes;
}

int calculate_nickels(int cents)
{
    // int cc = calculate_quarters(cents);
    // int cd = calculate_dimes(cents);
    //     int tmp = cents - cc * 25 - cd * 10;
        int calculate_nickels = 0;
            if (cents >= 5) {
        calculate_nickels = cents / 5 ;
            }
    return calculate_nickels;
}

    int calculate_pennies(int cents)
    {
        // TODO
    //     int cc = calculate_quarters(cents);
    // int cd = calculate_dimes(cents);
    // int cn = calculate_nickels(cents);
    //     int tmp = cents - cc * 25 - cd * 10 - cn * 5;
        int calculate_pennies = 0;
                if (cents >= 1) {
            calculate_pennies = cents ;
                }
        return calculate_pennies;
    }
