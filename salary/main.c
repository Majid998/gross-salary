//program to calculate gross salary of a person whose salary is user-input and out of which 40% is in dearness allowance and 20 percent is house rent.
// Author Majid Mujahid Hussain Dated 2 December 2020.

#include <stdio.h>
#include <stdlib.h>
//#include<conio.h>
int main()
{
    float gross_salary = 0, Basic_salary = 0; //not needed in the new formula calculated together //dearness_allowance = 0, //house_rent = 0;

    printf("Hello world!\n");
    printf("please enter the Basic salary of Ramesh\n");
    scanf("%f",&Basic_salary);

    // calculating dearness_allowance
    //dearness_allowance = (40 * Basic_salary)/ 100;
   // printf("\n the dearness allowance out of the basic salary = %f of Ramesh is %f",Basic_salary,dearness_allowance);

    // calculating house_rent

    //house_rent = (20 * Basic_salary)/ 100;

    //printf("\nThe house rent out of the basic salary = %f of Ramesh is %f", Basic_salary, house_rent);

    //calculating gross_salary

   // wrong formula  gross_salary = Basic_salary - (dearness_allowance + house_rent);
    // gross salary is equal to salary + dearness allowance + house rent
    gross_salary = (Basic_salary + (( Basic_salary * 40) / 100)+ (( Basic_salary * 20 ) / 100));
    printf(" \n \t The gross salary is = %f\n", gross_salary);

  //  getch();
    return 0;
}
