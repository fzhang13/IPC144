/*------------------------------------------------------------------
 Name: Xin Song Felix Zhang
 Student number: 111976171
 Email: xszhang3@myseneca.ca
 Section: H
 Date: March 26th, 2018
 ---------------------------------------------------------------------
 Assignment: 2
 Milestone:  4
 ---------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include "contactHelpers.h"
#include <stdlib.h>

#define MAXCONTACTS 5



void clearKeyboard(void)
{
    while (getchar() != '\n')   ;
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
	    printf("*** OUT OF RANGE *** Enter a number between %d and %d: ", value1, value2);
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
    struct Contact contacts[MAXCONTACTS] =   { {    { "Rick", {'\0'}, "Grimes" },
	{ 11, "Trailer Park", 0, "A7A 2J2", "King City" },
	{ "4161112222", "4162223333", "4163334444" } },
	{
	    { "Maggie", "R.", "Greene" },
	    { 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
	    { "9051112222", "9052223333", "9053334444" } },
	{
	    { "Morgan", "A.", "Jones" },
	    { 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },
	    { "7051112222", "7052223333", "7053334444" } },
	{
	    { "Sasha", {'\0'}, "Williams" },
	    { 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
	    { "9052223333", "9052223333", "9054445555" } },
    };
    do {
	option = menu();
	switch (option) {
	    case 1:
		//printf("<<< Feature 1 is unavailable >>>\n\n");
		displayContacts(contacts,MAXCONTACTS);
		pause();
		break;
	    case 2:
	       // printf("<<< Feature 2 is unavailable >>>\n\n");
		addContact(contacts,MAXCONTACTS);
		pause();
		break;
	    case 3:
	       // printf("<<< Feature 3 is unavailable >>>\n\n");
		updateContact(contacts,MAXCONTACTS);
		pause();
		break;
	    case 4:
	       // printf("<<< Feature 4 is unavailable >>>\n\n");
		deleteContact(contacts,MAXCONTACTS);
		pause();
		break;
	    case 5:
	      //  printf("<<< Feature 5 is unavailable >>>\n\n");
		searchContacts(contacts,MAXCONTACTS);
		pause();
		break;
	    case 6:
	       // printf("<<< Feature 6 is unavailable >>>\n\n");
		sortContacts(contacts,MAXCONTACTS);
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

void getTenDigitPhone(char telNum[])
{
    int needInput = 1;

    while (needInput == 1) {
	scanf("%10s", telNum);
	clearKeyboard();

	// (String Length Function: validate entry of 10 characters)
	if (strlen(telNum) == 10)
	    needInput = 0;
	else
	    printf("Enter a 10-digit phone number: ");
    }
}

int findContactIndex(const struct Contact *contacts, int size, const char *cellNum)
{
    int i;
    for (i = 0; i < size; ++i){
	if (strcmp(contacts[i].numbers.cell,cellNum) == 0)
	    return i;
    }
    return -1;
}

void displayContactHeader(void){
    printf("\n+-----------------------------------------------------------------------------+\n");
    printf("|%*cContacts Listing%*c|\n", 30,' ',31,' ');
    printf("+-----------------------------------------------------------------------------+\n");
}


void displayContactFooter(int a){
    printf("+-----------------------------------------------------------------------------+\n");
    printf("Total contacts: %d\n\n", a);
}


void displayContact(const struct Contact *contacts){
    printf(" %s", contacts->name.firstName);

    if (contacts->name.middleInitial[0] != 0){
	printf(" %s", contacts->name.middleInitial);
    }
    printf(" %s\n", contacts->name.lastName);
    printf("    C: %-12s H: %-12s B: %-10s\n", contacts->numbers.cell,contacts->numbers.home,contacts->numbers.business);
    printf("       %d %s, ", contacts->address.streetNumber,contacts->address.street);

    if (contacts->address.apartmentNumber > 0){
	printf("Apt# %d, ", contacts->address.apartmentNumber);
    }
    printf("%s, %s\n", contacts->address.city, contacts->address.postalCode);
}


void displayContacts(const struct Contact *contacts, int a){
    int i,j = 0;
    displayContactHeader();
    for (i = 0; i < a; ++i){
	if((contacts + i)->numbers.cell[0] != 0){
	    displayContact(contacts + i); j++;
	}
    }
    displayContactFooter(j);
}


void searchContacts(const struct Contact *contacts, int a){
    char num[11] = {0};
    int i;
    printf("\nEnter the cell number for the contact: ");
    getTenDigitPhone(num);
    i = findContactIndex(contacts,a,num);

    if(i != -1){
	printf("\n");
	displayContact(&contacts[i]);
	printf("\n");
    }
    else
	printf("*** Contact NOT FOUND ***\n");
}


void addContact(struct Contact *contacts, int a){
    int i;
    struct Contact temp = {{{0}}};
    for (i = 0; i < a; ++i){
	if ((contacts + i)->numbers.cell[0] == 0){
	    printf("\n");
	    contacts[i]=temp;
	    getContacts(&contacts[i]);
	    printf("--- New contact added! ---\n");
	    return;
	}
    }
    printf("\n*** ERROR: The contact list is full! ***\n");
}


void updateContact(struct Contact *contacts, int a){
    struct Contact new = {{{0}}};
    char num[11] = {0};
    int i;
    printf("\nEnter the cell number for the contact: ");
    getTenDigitPhone(num);
    i = findContactIndex(contacts,a,num);
    if (i == -1)
	printf("*** Contact NOT FOUND ***\n");
    else{
	printf("\nContact found:\n");
	displayContact(&contacts[i]);
	printf("\nDo you want to update the name? (y or n): ");
	if (yes()==1){
	    contacts[i].name = new.name;
	    getName(&contacts[i].name);
	}
	printf("Do you want to update the address? (y or n): ");
	if (yes()==1){
	    contacts[i].address = new.address;	
	    getAddress(&contacts[i].address);
	}
	printf("Do you want to update the numbers? (y or n): ");
	if (yes()==1){
	    contacts[i].numbers = new.numbers;
	    getNumbers(&contacts[i].numbers);
	}
	printf("--- Contact Updated! ---\n");
    }
}


void deleteContact(struct Contact *contacts, int a){
    char num[11] = {0};
    int i;
    printf("\nEnter the cell number for the contact: ");
    getTenDigitPhone(num);
    i = findContactIndex(contacts,a,num);
    if (i == -1)
	printf("*** Contact NOT FOUND ***\n");
    else{
	printf("\nContact found:\n");
	displayContact(&contacts[i]);
	printf("\nCONFIRM: Delete this contact? (y or n): ");
	if (yes()==1){
	    contacts[i].numbers.cell[0] = 0;
	    printf("--- Contact deleted! ---\n");
	}
    }
}


void sortContacts(struct Contact *contacts, int a){
    struct Contact sort = {{{0}}};
    int i,j;
    for (i = 0; i < a - 1; ++i){
	for (j = i + 1; j < a; ++j){
	    if (atoll(contacts[i].numbers.cell) > atoll(contacts[j].numbers.cell)){
		sort = contacts[i];
		contacts[i] = contacts[j];
		contacts[j] = sort;
	    }
	}
    }
    printf("\n--- Contacts sorted! ---\n");
}

