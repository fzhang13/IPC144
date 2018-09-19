/*------------------------------------------------------------------
 Name: Xin Song Felix Zhang
 Student number: 111976171
 Email: xszhang3@myseneca.ca
 Section: H
 Date: March 19th, 2018
 ---------------------------------------------------------------------
 Assignment: 2
 Milestone:  2
 ---------------------------------------------------------------------*/
#include <stdio.h>
#include "contactHelpers.h"

//work includes Assignment 2 Milestone 2//

void clearKeyboard(void)
{
    while (getchar() != '\n')   ; // empty execution code block on purpose
}

void pause(void)
{
    printf("(Press Enter to Continue)");
    clearKeyboard();
}

int getInt(void)
{
    int num;
    char extra;
    int returnvalue;
    int loopExit = 0;
    do {
	returnvalue = scanf(" %d%c", &num,&extra);
	if (returnvalue < 0) {
	    printf("*** INVALID INTEGER *** <Please enter an integer>: ");
	    clearKeyboard();
	}else if (returnvalue == 0) {
	    printf("*** INVALID INTEGER *** <Please enter an integer>: ");
	    clearKeyboard();
	}else if(extra != '\n'){
	    printf("*** INVALID INTEGER *** <Please enter an integer>: ");
	    clearKeyboard();
	}else {
	 loopExit = 1;
	}
    } while (loopExit != 1);
    return num;
}

int getIntInRange(int value1, int value2)
{
    int num;
    do {
	num = getInt();
	if (num < value1 || num > value2) {
	    printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", value1, value2);
	}else {
	    break;
	}
    } while (1);
    return num;
}

int yes(void)
{
    char prompt;
    char extra;
    int loopExit = 0;
    do {
	scanf(" %c%c", &prompt, &extra);
	if (extra != '\n'){
	    printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
	    clearKeyboard();
	}
	else if (prompt != 'y' && prompt != 'Y' && prompt != 'N' && prompt != 'n'){
	    printf(">*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
	    clearKeyboard();
	}
	else loopExit =1;


    }while (loopExit != 1);
    if (prompt == 'Y' || prompt == 'y') {
	return 1;
    }
    return 0;
}

int menu(void)
{
    int option;
    static int spacing = 0;
	if(spacing != 0)
		printf("\n");
	spacing++;

	do {

	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n\n");
	printf("Select an option:> ");
	option = getIntInRange(0, 6);

    } while (option == -1);
    return option;
}

void ContactManagerSystem(void)
{
    int selection = 0;
    int option;
    do {
	 option = menu();
	switch (option) {
	    case 1:
		printf("\n<<< Feature 1 is unavailable >>>\n\n");
		pause();
		break;
	    case 2:
		printf("\n<<< Feature 2 is unavailable >>>\n\n");
		pause();
		break;
	    case 3:
		printf("\n<<< Feature 3 is unavailable >>>\n\n");
		pause();
		break;
	    case 4:
		printf("\n<<< Feature 4 is unavailable >>>\n\n");
		pause();
		break;
	    case 5:
		printf("\n<<< Feature 5 is unavailable >>>\n\n");
		pause();
		break;
	    case 6:
		printf("\n<<< Feature 6 is unavailable >>>\n\n");
		pause();
		break;

	    default:
		printf("\nExit the program? (Y)es/(N)o: ");
		selection = yes();
		break;
	}
    } while (selection != 1);
    printf("\nContact Management System: terminated\n");

}
