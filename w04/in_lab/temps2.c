//name: Xin Song(Felix)Zhang
//email: xszhang3@myseneca.ca
//student number: 111976171
//section: IPC144SHH


#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define DAYS 10

int main(){
    int days, i;
    double arrayHigh[DAYS]= {0};
    double arrayLow[DAYS]={0};

    printf("---=== IPC Temperature Calculator V2.0 ===---\n");

    printf("Please enter the number of days, between 3 and 10, inclusive: ");
    scanf("%d",&days);
    printf("\n");
    while(days < 3 || days > 10){
	printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
	scanf("%d",&days);
	printf("\n");
    }
    for(i = 0; i < days; i++){
	printf("Day %d - High: ", i + 1);
	scanf("%lf", &arrayHigh[i]);

	printf("Day %d - Low: ", i + 1);
	scanf("%lf", &arrayLow[i]);

    }

    printf("\nDay  Hi  Low");
    for(i = 0; i < days; i ++){
	printf("\n%d    %1.0lf    %1.0lf", i + 1, arrayHigh[i], arrayLow[i]);
    }
    printf("\n");
	
    return 0;
}
