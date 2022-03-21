/* wap to menu driven program following task using udf different catagory*/
#include<stdio.h>
#include<conio.h>
 void addition();
 // function wuthout arg without return type
 void subtraction(int,int);
 //function with arg without return type
 int division();
 // function without arg with return type
 int modulas(int,int);
 // function arg with return type
 int menu();
 // function without arg with return type
 void main()
 {
 int c,x,y,div;
 char yn;
 clrscr();
 do
 {
 c=menu();
 switch(c)
 {
 case 1: addision();
	 break;
 case 2: printf("\n Enter two value");
	 scanf("%d%d",&x,&y);
	 subtraction(x,y);
	 break;
case 3: div=division();
	printf("division is %d",div);
	break;
case 4:
	printf("\n Enter two value");
	scanf("%d%d",&x,&y);
	div=modulas(x,y);
 printf("\n modulas of %d is %d",x,y,div);
	break;
 case 5:
	exit(0);
 default:
	printf("invalid choice");
	}
	printf("\n\n\t do ypu want to countinue?(yes=y/Y,no=n/N");
	flushall();
	scanf("%c",&yn);
	}while(yn=='y'||yn=='Y');
	getch();
}
int menu()
{

	int choice();
	printf("\n\n menu");
	printf("\n -------\n 1 addition \n2 subtrection \n3 division \n4 modulas\n5 exit \n----\n");
	printf("Enter your choise");
	scanf("%d",&choice);
	return(choice);
}
void addtion()
	{
	int x,y;
	printf("Enter teo value");
	scanf("%d%d",&x,&y);
	printf("\n addtion of %d& %d is %d",x,y,x+y);
	}
void subtrection(int x,int y)
	{
	printf("\n subtrection of %d& %d is %d",x,y,x-y);
	}
int division()
	{
	int x,y;
	printf("Enter two value");
	scanf("%d%d",x,y);
	return(x/y);
	}
int modulas(int x,int y);
	{
	return(x%y);
	}








