/* -------------------------------------------
 Name: Xin Song Felix Zhang
 Student number: 111976171
 Email: xszhang3@myseneca.ca
 Section: H
 Date: Mar 19th, 2018
 ----------------------------------------------
 Assignment: 2
 Milestone:  2
 ---------------------------------------------- */

#include <stdio.h>
#include "contacts.h"
#include "contactHelpers.h"


void getName(struct Name *name){
    char prompt = 'a';
    printf("Please enter the contact's first name: ");
    scanf(" %s",(*name).firstName );
    printf("Do you want to enter a middle initial(s)? (y or n): ");
    prompt = yes();
    if (prompt == 1){
	printf("Please enter the contact's middle initial(s): ");
	scanf(" %s", (*name).middleInitial);
    }
    printf("Please enter the contact's last name: ");
    scanf(" %s", (*name).lastName);
}

void getAddress(struct Address *address){
    char prompt = 'a';
    printf("Please enter the contact's street number: ");
    (*address).streetNumber = getInt();
    printf("Please enter the contact's street name: ");
    scanf(" %[^\n]", (*address).street);
    printf("Do you want to enter an apartment number? (y or n): ");
    prompt = yes();
    if (prompt == 1){
	printf("Please enter the contact's apartment number: ");
	(*address).apartmentNumber = getInt();
    }

    printf("Please enter the contact's postal code: ");
    scanf(" %[^\n]", (*address).postalCode);
    printf("Please enter the contact's city: ");
    scanf(" %[^\n]", (*address).city);
}

void getNumbers(struct Numbers *number){
    char prompt = 'a';

    printf("Please enter the contact's cell phone number: ");
    scanf(" %s",(*number).cell);
    printf("Do you want to enter a home phone number? (y or n): ");
    prompt = yes();
    if (prompt == 1){
	printf("Please enter the contact's home phone number: ");
	scanf(" %s", (*number).home);
    }
    printf("Do you want to enter a business phone number? (y or n): ");
    prompt = yes();
    if (prompt == 1){
	printf("Please enter the contact's business phone number: ");
	scanf(" %s", (*number).business);
    }
}


void getContact(struct Contact *contact){
    getName(&(*contact).name);
    getAddress(&(*contact).address);
    getNumbers(&(*contact).numbers);
}
