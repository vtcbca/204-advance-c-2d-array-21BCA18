
/* wapcreate structure marakseet
date :24/2/2022*/
#include<stdio.h>
#include<conio.h>
    struct student
    {
       int id[5],m1[5],m2[5],m3[5],total[5];
       char name[5][30];
       float per[5];
     };
       void main()
       {
	 struct  student x;
	 int i;
	 clrscr();
	   for(i=0;i<5;i++)
	   {

	  printf("n Enter student id ");
	  scanf("%d",&x.id[i]);
	  printf("Enter student  name");
	  scanf("%s",&x.name[i]);
	  printf("Ente student m1");
	  scanf("%d",&x.m1[i]);
	  printf("Ente student m2");
	  scanf("%d",&x.m2[i]);
	  printf("Ente student m3");
	  scanf("%d",&x.m3[i]);
	  x.total[i]=x.m1[i]+ x.m2[i]+ x.m3[i];
	  x.per[i]=x.total[i]/3;
	 }
	   for(i=0;i<5;i++)
	   {
	     printf("\n-----------------------------");
	     printf("\n id:%d\n",x.id[i]);
	     printf("name: %s\n",x.name[i]);
	     printf("m1: %d\n",x.m1[i]);
	     printf("m2:%d\n",x.m2[i]);
	     printf("m3: %d\n",x.m3[i]);
	    // printf("m4:%d\n",x.m4[i]);
	    // printf("m5:%d\n",x.m5[i]);
	     printf("total :%d\n",x.total[i]);
	     printf("per:%f\n",x.per[i]);
	   }

	  getch();
	  }

