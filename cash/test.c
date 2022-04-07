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

    // // Calculate the number of dimes to give the customer
    // int dimes = calculate_dimes(cents);
    // cents = cents - dimes * 10;

    // // Calculate the number of nickels to give the customer
    // int nickels = calculate_nickels(cents);
    // cents = cents - nickels * 5;

    // // Calculate the number of pennies to give the customer
    // int pennies = calculate_pennies(cents);
    // cents = cents - pennies * 1;

    // // Sum coins
    // int coins = quarters + dimes + nickels + pennies;

    // // Print total number of coins to give the customer
    // printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    int number_entred = 0;
    do {
         number_entred  = get_int("Number of cents: ");
    } while(number_entred < 0);

    return number_entred;
}

int calculate_quarters(int cents){
    int calculate_quarters = 0;
    if (cents >= 25) {
        calculate_quarters = cents / 25 ;
        int tmp = get_cents - calculate_quarters * 25 ;
    }
    return calculate_quarters;
}

// int calculate_dimes(int cents)
// {
//     // TODO
//         if (tmp >= 10) {
//         calculate_dimes = tmp / 10 ;
//             }
//             tmp = tmp - calculate_dimes * 10 ;
//     return calculate_dimes;
// }

// int calculate_nickels(int cents)
// {
//     // TODO
//             if (tmp >= 5) {
//         calculate_nickels = tmp / 5 ;
//             }
//             tmp = tmp - calculate_nickels * 5 ;
//     return calculate_nickels;
// }

// int calculate_pennies(int cents)
// {
//     // TODO
//             if (tmp >= 1) {
//         calculate_pennies = tmp ;
//             }
//     return calculate_pennies;
// }
