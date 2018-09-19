/*
 +--------------------------------------------------------*
 |           2  0  1  8  ~  W  I  N  T  E  R
 |                 I  P  C  :  1  4  4
 |                 ASSIGNMENT #2 MS# 4
 |
 |   S  E  N  E  C  A               C  O  L  L  E  G  E
 |   ========  =======  =====  ========  ======  ======
 |      ==     ==      ==        ==     ==      ==   ==
 |     ==     ====     ====     ==     ====    ======
 |    ==     ==          ==    ==     ==      == ==
 |   ==     ======  =====     ==     ======  ==   ==
 |
 |  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 |  !!!   DO NOT ALTER THE CONTENTS OF THIS FILE   !!!
 |  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 +--------------------------------------------------------*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"
#include "contactHelpers.h"

void printSectionHeader(const char*);

int main(void)
{
    printSectionHeader("Final A#2-Milestone #4");

    ContactManagerSystem();

    return 0;
}

// Display specified test section header
void printSectionHeader(const char* testName)
{
    printf("\n");
    printf("------------------------------------------\n");
    printf("Testing: %s\n", testName);
    printf("------------------------------------------\n");
}
