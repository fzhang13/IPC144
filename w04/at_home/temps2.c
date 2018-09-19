//name: Xin Song(Felix)Zhang
//email: xszhang3@myseneca.ca
//student number: 111976171
//section:IPC144SHH


#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define DAYS 10

int main(){
    int days, highDay = 0, lowDay= 0, i;
    int averageDays;
    double total ,totalSum = 0, high = -41, low = 41, totalAverage = 0;
    double arrayHigh[DAYS]= {0};
    double arrayLow[DAYS]= {0};

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
	while(arrayHigh[i] > high){
	    high = arrayHigh[i];
	    highDay = i + 1;
	}
	printf("Day %d - Low: ", i + 1);
	scanf("%lf", &arrayLow[i]);
	while(arrayLow[i] < low){
	    low = arrayLow[i];
	    lowDay = i + 1;
	}

    }

    printf("\nDay  Hi  Low\n");
    for(i = 0; i < days; i ++){
	printf("%d    %1.0lf    %1.0lf\n", i + 1, arrayHigh[i], arrayLow[i]);
    }
	printf("\n");

    printf("The highest temperature was %1.0lf, on day %d\n", high, highDay);
    printf("The lowest temperature was %1.0lf, on day %d\n",low, lowDay);
    printf("\n");

    while(averageDays >= 0){
	printf("Enter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
	scanf("%d", &averageDays);
	printf("\n");

	while(averageDays >= 5){
	    printf("Invalid entry, please enter a number between 1 and 4, inclusive: ");
	    scanf("%d", &averageDays);
	    printf("\n");
		}
	if(averageDays <= 0){
	    printf("Goodbye!\n");
	    averageDays = 0;
	    return 0;
		}
	if(averageDays > 0){
		totalSum = 0;
		for(i = 0; i < averageDays; i++){
	    	total = (arrayLow[i] + arrayHigh[i]);
	    	totalSum += total;
	       		}
		}
	totalAverage = totalSum	 / (averageDays * 2.0);	

	printf("The average temperature up to day %d is: %.2f\n\n", averageDays, totalAverage);

	}
    return 0;
}
