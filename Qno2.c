#include<stdio.h>
#include<conio.h>
int main ()
{
int num1,num2,sum,product;
clrscr();
	printf("Enter 1st number: \n");
	scanf("%d",&num1);
	printf("Enter 2nd number : \n");
	scanf("%d",&num2);
	sum = num1 + num2;
	product = num1*num2;
	printf(" \n Sum of %d and %d is   : %d \n Multipilaction  of %d and %d is   %d ", num1,num2,sum ,num1,num2,product);
	getch();
	return 0;
	}

