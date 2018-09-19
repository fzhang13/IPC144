/* -------------------------------------------
 Name: Xin Song Felix Zhang
 Student number: 111976171
 Email: xszhang3@myseneca.ca
 Section: H
 Date: Mar 12th, 2018
 ----------------------------------------------
 Assignment: 1
 Milestone:  4
 ---------------------------------------------- */

#include <stdio.h>
#include "contacts.h"


void getName(struct Name *name){
    char prompt = 'n';
    printf("Please enter the contact's first name: ");
    scanf(" %s",(*name).firstName );
    printf("Do you want to enter a middle initial(s)? (y or n): ");
    scanf(" %c", &prompt);
    if(prompt == 'y' || prompt == 'Y'){
	printf("Please enter the contact's middle initial(s): ");
	scanf(" %s", (*name).middleInitial);
    }
    printf("Please enter the contact's last name: ");
    scanf(" %s", (*name).lastName);
}

void getAddress(struct Address *address){
    char prompt = 'n';
    printf("Please enter the contact's street number: ");
    scanf(" %d", &(*address).streetNumber);
    printf("Please enter the contact's street name: ");
    scanf(" %s", (*address).streetName);
    printf("Do you want to enter an apartment number? (y or n): ");
    scanf(" %c", &prompt);
    if (prompt == 'y' || prompt == 'Y'){
	printf("Please enter the contact's apartment number: ");
	scanf(" %d", &(*address).apartmentNumber);
    }
    printf("Please enter the contact's postal code: ");
    scanf(" %[^\n]", (*address).postalCode);
    printf("Please enter the contact's city: ");
    scanf(" %s", (*address).city);
}

void getNumbers(struct Numbers *number){
    char prompt = 'n';
    printf("Do you want to enter a cell phone number? (y or n): ");
    scanf(" %c", &prompt);
    if (prompt == 'y' || prompt == 'Y'){
	printf("Please enter the contact's cell phone number: ");
	scanf(" %s",(*number).cell);
    }
    printf("Do you want to enter a home phone number? (y or n): ");
    scanf(" %c", &prompt);
    if (prompt == 'y' || prompt == 'Y'){
	printf("Please enter the contact's home phone number: ");
	scanf(" %s", (*number).home);
    }
    printf("Do you want to enter a business phone number? (y or n): ");
    scanf(" %c", &prompt);
    if (prompt == 'y' || prompt == 'Y'){
	printf("Please enter the contact's business phone number: ");
	scanf(" %s", (*number).business);
    }
}

void getContacts(struct Contact *contact){
    getName(&(*contact).name);
    getAddress(&(*contact).address);
    getNumbers(&(*contact).numbers);
}

void getList(struct Contact *contact){
    printf("\nContact Details\n");
    printf("---------------\n");
    printf("Name Details\n");
    printf("First name: %s\n", (*contact).name.firstName);
    printf("Middle initial(s): %s\n", (*contact).name.middleInitial);
    printf("Last name: %s\n\n", (*contact).name.lastName);
    printf("Address Details\n");
    printf("Street number: %d\n", (*contact).address.streetNumber);
    printf("Street name: %s\n", (*contact).address.streetName);
    printf("Apartment: %d\n", (*contact).address.apartmentNumber);
    printf("Postal code: %s\n", (*contact).address.postalCode);
    printf("City: %s\n\n", (*contact).address.city);
    printf("Phone Numbers:\n");
    printf("Cell phone number: %s\n", (*contact).numbers.cell);
    printf("Home phone number: %s\n", (*contact).numbers.home);
    printf("Business phone number: %s\n\n", (*contact).numbers.business);
}


