//name: Xin Song(Felix)Zhang
//email: xszhang3@myseneca.ca
//student number: 111976171

#include <stdio.h>
#define LOONIES 1.00
#define QUARTERS .25

int main(){
    int loonies, quarters;
    double amount, owed, change;

    printf("Please enter the amount to be paid: $");  //value entered
    scanf("%lf", &amount);

    loonies = amount / LOONIES;
    owed = amount - loonies;                //calculate loonies/balance owing
    quarters = (amount - loonies) / QUARTERS;
    change = amount - (loonies  + (quarters * QUARTERS));  //calculate quarters/balance owing

    printf("Loonies required: %d, balance owing $%1.2lf\n", loonies, owed);
    printf("Quarters required: %d, balance owing $%1.2lf\n", quarters, change);


    return 0;

}
