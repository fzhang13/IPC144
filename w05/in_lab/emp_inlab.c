//Name: Xin Song (Felix) Zhang
//Student number: 111976171
//Email: xszhang3@myseneca.ca
//Workshop: Workshop 5
//Section: H
//Date: Feb 20th, 2018


#include <stdio.h>
#define SIZE 2
#define _CRT_SECURE_NO_WARNINGS


struct employee {
    int number;
    int age;
    float salary;
};

int main(){
    int i = 0;
    int option;
    struct employee emp[SIZE] = {{0}};

    printf("---=== EMPLOYEE DATA ===---\n");

    printf("\n1. Display Employee Information\n");
    printf("2. Add Employee\n");
    printf("0. Exit\n\n");
    printf("Please select from the above options: ");
    scanf("%d", &option);
    printf("\n");


    while(option != 0){
	switch (option){

	case 1:
	    printf("EMP ID  EMP AGE EMP SALARY\n");
	    printf("======  ======= ==========\n");
	    for(i = 0; i< SIZE; i++){
		if (emp[i].number<=0||emp[i].age<=0||emp[i].salary<=0) {
		    continue;
		}
	    printf("%6d%9d%11.2lf\n",emp[i].number,emp[i].age,emp[i].salary);
	    }
	    printf("\n1. Display Employee Information\n");
	    printf("2. Add Employee\n");
	    printf("0. Exit\n\n");
	    printf("Please select from the above options: ");
	    scanf("%d", &option);
	    printf("\n");
	    break;

	case 2:
	    if(i == SIZE){
		printf("Adding Employee\n===============\n");
		printf("ERROR!!! Maximum Number of Employees Reached\n");
		printf("\n1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");
		scanf("%d", &option);
		printf("\n");
		break;
	    }

		printf("Adding Employee\n");
		printf("===============\n");
		printf("Enter Employee ID: ");
		scanf("%d", &emp[i].number);
		printf("Enter Employee Age: ");
		scanf("%d",&emp[i].age);
		printf("Enter Employee Salary: ");
		scanf("%f", &emp[i].salary);
		i++;
		printf("\n1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");
		scanf("%d", &option);
		printf("\n");
		break;

		default:
		printf("ERROR: Incorrect Option: Try Again\n");
		printf("\n1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");
		scanf("%d", &option);
		printf("\n");
		break;
	}
    }

    printf("Exiting Employee Data Program. Good Bye!!!\n");
    return 0;
}
