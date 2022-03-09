
/* wap to 3by 3 matrix and check it is digonal matrix or not
date 21/2/2022*/
#include<stdio.h>
#include<conio.h>
  void main()
  {
    int m[3][3],i,j,f;
    clrscr();
      for(i=0;i<3;i++)
      {
	for(j=0;j<3;j++)
	{
	   printf("Enter value for m[%d][%d]",i,j);
	   scanf("%d",&m[i][j]);
	 }
      }
      // logic print array
      printf("matrix array:\n");
      for(i=0;i<3;i++)
      {
       for(j=0;j<3;j++)
       printf("%d\t",m[i][j]);
      printf("\n");
      }
      // logic  digonal matrix

	 for(i=0;i<3;i++)
	 {
	   for(j=0;j<3;j++)
	   {
	      if(i!=j && m[i][j]!=0)
	      {
		 f=1;
	      }
	    }
	 }
	      if(f==1)
       printf("\n matrix is not digonal");
       else
       printf("\n matrix is digonal");
       getch();
       }

