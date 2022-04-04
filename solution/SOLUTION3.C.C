/* write a program to maltlipicaton  matrix
date:23/2/2022*/
#include<stdio.h>
#include<conio.h>
  void main()
  {
    int m1[3][3],m2[3][3],i,j,k,sum=0,m[3][3];
    clrscr();
    // logoc 1 array
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {
	      printf("\n Enter value for m1[%d][%d]",i,j);
	      scanf("%d",&m1[i][j]);
	   }
       }
       // logic 2 array
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {
	      printf("\n Enter value for m2[%d][%d]",i,j);
	      scanf("%d",&m2[i][j]);
	   }
       }
       printf("\n");
	 printf("\n-----------------------\n");
	//logic print 1 array
		printf("\n mtrix 1\n");

		    for(i=0;i<3;i++)
		    {
		      for(j=0;j<3;j++)
		      printf("%d\t",m1[i][j]);
		      printf("\n");
		    }
		    printf("\n");
	  // logic print 2 array
	  printf("\n mtrix 2\n");
	  printf("\n----------------------------\n");
		for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   printf("%d\t",m2[i][j]);
	   printf("\n");
	}
	  printf("\n");
	  // maltipicaton of two array
	    for(i=0;i<3;i++)
	    {
	       for(j=0;j<3;j++)
	       {
		 sum=0;
	       for(k=0;k<3;k++)
	       {
		  sum=sum+m1[i][k]*m2[k][j];
		  m[i][j]=sum;
	       }
	   }
	}
	// logic maltipicaton of matrix
	  printf("\n maltification matrix: \n");
	    for(i=0;i<3;i++)
	    {
		for(j=0;j<3;j++)
		  printf("%d\t",m[i][j]);
		  printf("\n");
	     }
	     getch();
	     }










