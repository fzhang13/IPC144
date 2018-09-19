/* -------------------------------------------
 Name: Xin Song Felix Zhang
 Student number: 111976171
 Email: xszhang3@myseneca.ca
 Section: H
 Date: Mar 12th, 2018
 ----------------------------------------------
 Assignment: 1
 Milestone:  3
 ---------------------------------------------- */


struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

struct Address {
    int streetNumber;
    char streetName[41];
    int apartmentNumber;
    char postalCode[8];
    char city[41];
};

struct Numbers{

    char cell[21];
    char home[21];
    char business[21];
};

struct Contact{

    struct Name name;
    struct Address address;
    struct Numbers numbers;
};

void getName(struct Name *);
void getAddress(struct Address *);
void getNumbers(struct Numbers *);
void getContacts(struct Contact *);
void getList(struct Contact *);
