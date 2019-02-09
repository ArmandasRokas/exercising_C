/*
 * main.c
 *
 *  Created on: Feb 8, 2019
 *      Author: Armandas
 */

#include <stdio.h>

// function main begins program execution
int main()
{
	int integer1; // first number to be entered by user
	int integer2; // second number to be entered by user
	int sum; // variable in which sum will be stored

	puts("Enter two integers followed by return"); // prompt
	fflush( stdout ); // executes printf before scanf
	scanf("%d%d", &integer1, &integer2); // read an integer
/*
	printf("Enter second integer \n"); //prompt
	fflush( stdout ); // executes printf before scanf
	scanf("%d", &integer2); //read an integer
*/
	sum = integer1 + integer2; // assign total to sum
	printf("Sum is %d\n", sum); // print sum
} // end function main
