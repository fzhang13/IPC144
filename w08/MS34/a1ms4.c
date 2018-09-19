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

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contacts.h"
int main(){
    struct Contact contact;
    printf("Contact Management System\n");
    printf("-------------------------\n");
    getContacts(&contact);
    getList(&contact);
    printf("Structure test for Contact using functions done!\n");
    return 0;
}
/*  SAMPLE OUTPUT:
 Contact Management System
 -------------------------
 Please enter the contact's first name: Wilma
 Do you want to enter a middle initial(s)? (y or n): y
 Please enter the contact's middle initial(s): Dino
 Please enter the contact's last name: Flintstone
 Please enter the contact's street number: 100
 Please enter the contact's street name: Bedrock
 Do you want to enter an apartment number? (y or n): y
 Please enter the contact's apartment number: 14
 Please enter the contact's postal code: Z8Z 7R7
 Please enter the contact's city: Markham
 Do you want to enter a cell phone number? (y or n): Y
 Please enter the contact's cell phone number: 647-505-5555
 Do you want to enter a home phone number? (y or n): Y
 Please enter the contact's home phone number: 905-222-3333
 Do you want to enter a business phone number? (y or n): Y
 Please enter the contact's business phone number: 416-491-5050
 Contact Details
 ---------------
 Name Details
 First name: Wilma
 Middle initial(s): Dino
 Last name: Flintstone
 Address Details
 Street number: 100
 Street name: Bedrock
 Apartment: 14
 Postal code: Z8Z 7R7
 City: Markham
 Phone Numbers:
 Cell phone number: 647-505-5555
 Home phone number: 905-222-3333
 Business phone number: 416-491-5050
 Structure test for Contact using functions done!
 */
