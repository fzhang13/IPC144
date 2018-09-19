//name: Xin Song(Felix)Zhang
//email: xszhang3@myseneca.ca
//student number: 111976171

#include <stdio.h>
#define NUMS 3
#define _CRT_SECURE_NO_WARNINGS

int main(){
    int i;
    double high, low, average, totalHigh = 0, totalLow = 0;

    printf("---=== IPC Temperature Analyzer ===---\n");

	for(i =0; i < NUMS; i ++){
	    printf("Enter the high value for day %d: ", i + 1); 
	    scanf("%lf", &high);
	    printf("\n");
	    printf("Enter the low value for day %d: ", i + 1);
	    scanf("%lf", &low);
 	    printf("\n");


	    while(low <= -41 || high >= 41 || low > high){
		printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
		printf("\n");
		printf("Enter the high value for day %d: ", i + 1);
                scanf("%lf", &high);
	        printf("\n");
		printf("Enter the low value for day %d: ", i + 1);
	        scanf("%lf", &low);
		printf("\n");
	    }
	    totalHigh = high + totalHigh;
	    totalLow = low + totalLow;
	}

    average = (totalLow + totalHigh )/ (NUMS *2);
    printf("The average (mean) temperature was: %1.2lf\n", average);
   
    return 0;

}