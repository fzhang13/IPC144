//name: Xin Song(Felix)Zhang
//email: xszhang3@myseneca.ca
//student number: 111976171

#include <stdio.h>
#define NUMS 4
#define _CRT_SECURE_NO_WARNINGS

int main(){
    int i, j = 0 , k = 0;
    double high, low, average, totalHigh = 0, totalLow = 0, highTemp =-41, lowTemp = 41;

    printf("---=== IPC Temperature Analyzer ===---\n");

	for(i =0; i < NUMS; i ++){
	    printf("Enter the high value for day %d: ", i + 1);
	    scanf("%lf", &high);
	    printf("\n");
	    printf("Enter the low value for day %d: ", i + 1);
	    scanf("%lf", &low);
	    printf("\n");


	    while(low <= -41 || high >= 41 || low > high){
		printf("Incorrect values, temperature must be in the range -40 to 40, high must be greater than low.\n");
	        printf("\n");
		printf("Enter the high value for day %d: ", i + 1);
		scanf("%lf", &high);
                printf("\n");
		printf("Enter the low value for day %d: ", i + 1);
		scanf("%lf", &low);
	        printf("\n");
	    }
	    while(high > highTemp){
		highTemp = high;
		j = i + 1;

	    }
	    while(low < lowTemp){
		lowTemp = low;
		k = i + 1;
	    }

	    totalHigh = high + totalHigh;
	    totalLow = low + totalLow;
	}

    average = (totalLow + totalHigh )/ (NUMS *2);
    printf("The average (mean) temperature was: %1.2lf\n", average);
    printf("The highest temperature was %1.0lf, on day %d\n", highTemp,j );
    printf("The lowest temperature was %1.0lf, on day %d\n", lowTemp, k);

    return 0;

}

