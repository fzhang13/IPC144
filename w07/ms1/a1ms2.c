/* -------------------------------------------
 Name: Xin Song Felix Zhang
 Student number: 111976171
 Email: xszhang3@myseneca.ca
 Section: H
 Date: Mar 6th, 2018
 ----------------------------------------------
 Assignment: 1
 Milestone:  2
 ---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"

int main (void)
{
    struct Name name;
    struct Address add;
    struct Numbers num;


    printf("Contact Management System\n");
    printf("-------------------------\n");

    char prompt = 'n';


    printf("Please enter the contact's first name: ");
    scanf("%s",name.firstName);
    printf("Do you want to enter a middle initial(s)? (y or n): ");
    scanf(" %c", &prompt);
    if(prompt == 'y' || prompt == 'Y'){
	printf("Please enter the contact's middle initial(s): ");
	scanf("%s", name.middleInitial);
    }
    printf("Please enter the contact's last name: ");
    scanf("%s", name.lastName);


    printf("Please enter the contact's street number: ");
    scanf("%d", &add.streetNumber);
    printf("Please enter the contact's street name: ");
    scanf("%s", add.streetName);
    printf("Do you want to enter an appartment number? (y or n): ");

    scanf(" %c", &prompt);
    if(prompt == 'y' || prompt == 'Y'){
	printf("Please enter the contact's appartment number: ");
	scanf("%d", &add.apartmentNumber);
    }
    printf("Please enter the contact's postal code: ");

    scanf(" %[^\n]", add.postalCode);
    printf("Please enter the contact's city: ");
    scanf("%s", add.city);


    printf("Do you want to enter a cell phone number? (y or n): ");
    scanf(" %c", &prompt);
    if(prompt == 'y' || prompt == 'Y'){
	printf("Please enter the contact's cell phone number: ");
	scanf("%s", num.cell);
    }
    printf("Do you want to enter a home phone number? (y or n): ");
    scanf(" %c", &prompt);

    if(prompt == 'y' || prompt == 'Y'){
	printf("Please enter the contact's home phone number: ");
	scanf("%s", num.home);
    }
    printf("Do you want to enter a business phone number? (y or n): ");
    scanf(" %c", &prompt);
    if(prompt == 'y' || prompt == 'Y'){
	printf("Please enter the contact's business phone number: ");
	scanf("%s", num.business);
    }

	printf("\nContact Details\n");
	printf("---------------\n");
	printf("Name Details\n");
	printf("First name: %s\n", name.firstName);
	printf("Middle initial(s): %s\n", name.middleInitial);
	printf("Last name: %s\n\n", name.lastName);

	printf("Address Details\n");
	printf("Street number: %d\n", add.streetNumber);
	printf("Street name: %s\n", add.streetName);
	printf("Apartment: %d\n", add.apartmentNumber);
	printf("Postal code: %s\n", add.postalCode);
	printf("City: %s\n\n", add.city);

	printf("Phone Numbers:\n");
	printf("Cell phone number: %s\n", num.cell);
	printf("Home phone number: %s\n", num.home);
	printf("Business phone number: %s\n\n", num.business);

	printf("Structure test for Name, Address, and Numbers Done!\n");

    return 0;
}







