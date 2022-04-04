/*wap a menu driven program which pergrome follwonigoperation
date:29/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int c,v1,v2;
  char ch;
  clrscr();
  do
  {
  printf("\n\n\t\t menu\n\t");
  printf("---------------------------");
  printf("\n\n\t\t1. addision \n\n\t\t2. substetcton\n\n\t\t 3.exit");
  printf("\n\t----------------------------");
  printf("\n\t\t Enter your choice");
  scanf("%d",&c);
  switch(c)
  {
   case 1:
     printf("\n\t Enter two velue");
     scanf(" %d%d",&v1,v2);
     printf("\n addision of %d & %d is %d",v1,v2,v1+v2);
     break;
  case 2:
      printf("\n Enter two velue");
      scanf("%d%d",&v1,v2);
      printf("\n subtrection  of %d & %d is %d",v1,v2,v1-v2);
      break;
   case 3:
      exit(0);
    default:
       printf("\n\n\t\t invalid choice\n please Enter number betwwen 1to 3");
       break;
       }
	 printf("\n\t\t\t  do you want to continue?(yes=y/Y,No=n/N)");
	 flushall();
	 scanf("%c",&ch);
	 } while (ch=='y'||ch=='Y');
	 getch();
	 }