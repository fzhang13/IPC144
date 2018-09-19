//name: Xin Song(Felix)Zhang
//email: xszhang3@myseneca.ca
//student number: 111976171

#define LOONIES 100
#define QUARTERS 25
#define DIMES 10
#define NICKELS 5
#define PENNIES 1

#include <stdio.h>

int main(){
    int coin, owe;
    double amount, GST;

    printf("Please enter the amount to be paid: $");
    scanf("%lf", &amount);

    GST = amount * .13 + .005;
    amount = GST + amount;           //calculating total amount

    printf("GST: %1.2lf\n", GST);
    printf("Balance owing: $%1.2lf\n", amount);

    owe = amount * LOONIES;
    owe = owe % LOONIES;                //cacluating loonies/balance owing
    coin = (int)(amount);
    printf("Loonies required: %d, balance owing $%1.2lf\n", coin, (double)owe/100);

    coin = owe / QUARTERS;
    owe = owe % QUARTERS;                 //calculating quarters/balance owing
    printf("Quarters required: %d, balance owing $%1.2lf\n", coin,(double)owe/100);

    coin = owe / DIMES;
    owe = owe % DIMES;                //calculating dimes/balance owing
    printf("Dimes required: %d, balance owing $%1.2lf\n", coin,(double)owe/100);

    coin = owe / NICKELS;
    owe = owe % NICKELS;                 //calculating nickels/balance owing
    printf("Nickels required: %d, balance owing $%1.2lf\n", coin,(double)owe/100);

    coin = owe / PENNIES;
    owe = owe % PENNIES;                //calculating pennies/balance owing
    printf("Pennies required: %d, balance owing $%1.2lf\n", coin,(double)owe/100);

    return 0;
}
