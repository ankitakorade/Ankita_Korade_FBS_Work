<<<<<<< HEAD
//program to print pattern

/*#include<stdio.h>
int main()
{
	
	int i,j;
	for(i=1;i<=5;i++)//row
	{
		for(j=1;j<=i;j++)//column
		{
		   printf("* ");	
		}
		printf("\n");
	}
	return 0;
    }*/
    
   /* #include<stdio.h>
    int main()
    {
    	int i,j;
    	for(i=1;i<=4;i++)
    	{
    		for(j=1;j<=i;j++)
    		{
    			printf("*");
			}
			printf("\n");
		}
		return 0;
	}
	  */
	  
	 /* #include<stdio.h>
	   int main()
	   {
	   	int i,j;
	   	for(i=1;i<=5;i++)
	   	{
		  for(j=5;j>=i;j--)
		   {
		    printf("*");
		   }
     	
		   printf("\n");
	   }
	   }*/
	   
	  /* #include<stdio.h>
	   int main()
	   {
	   	int i,j,k;
	   	for(i=1;i<=5;i++)
	   	{
	   		for(j=i;j<5;j++)
	   		{
	   			printf(" ");
			   }
		   
		   for(k=1;k<=i;k++)
		   {
		   	printf("*");
		   }
		   printf("\n");
	}
	   }*/
	   
	  /* #include<stdio.h>
	   int main()
	   {
	   	int i,j,k;
	   	for(i=1;i<=5;i++)
	   	{
	   		for(j=1;j<5;j++)
	   		{
	   			printf(" ");
	   			
			   }
			   for(k=i;k<=5;k++)
			   {
			    printf("#");
			   }
			   printf("\n");
			   }
		   }*/
		   
	/*	#include<stdio.h>
		 int main()
		 {
		 	int i,j;
		 	for(i=1;i<=5;i++)
		 	{
		 		for(j=1;j<=5;j++)
		 		{
		 		    printf("@");	
				 }
				 printf("\n");
			 }
		 }*/
		 
	#include<stdio.h>
	int main()
	{   int i,j;
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=5;j++)
			{
			  if(i==1 || i==5 || j==1 || j==5)
			  printf("*");
			  else
			   printf(" ");
			}
			printf("\n");
			}
		}
		 	 
=======
//program to print pattern

/*#include<stdio.h>
int main()
{
	
	int i,j;
	for(i=1;i<=5;i++)//row
	{
		for(j=1;j<=i;j++)//column
		{
		   printf("* ");	
		}
		printf("\n");
	}
	return 0;
    }*/
    
   /* #include<stdio.h>
    int main()
    {
    	int i,j;
    	for(i=1;i<=4;i++)
    	{
    		for(j=1;j<=i;j++)
    		{
    			printf("*");
			}
			printf("\n");
		}
		return 0;
	}
	  */
	  
	 /* #include<stdio.h>
	   int main()
	   {
	   	int i,j;
	   	for(i=1;i<=5;i++)
	   	{
		  for(j=5;j>=i;j--)
		   {
		    printf("*");
		   }
     	
		   printf("\n");
	   }
	   }*/
	   
	  /* #include<stdio.h>
	   int main()
	   {
	   	int i,j,k;
	   	for(i=1;i<=5;i++)
	   	{
	   		for(j=i;j<5;j++)
	   		{
	   			printf(" ");
			   }
		   
		   for(k=1;k<=i;k++)
		   {
		   	printf("*");
		   }
		   printf("\n");
	}
	   }*/
	   
	  /* #include<stdio.h>
	   int main()
	   {
	   	int i,j,k;
	   	for(i=1;i<=5;i++)
	   	{
	   		for(j=1;j<5;j++)
	   		{
	   			printf(" ");
	   			
			   }
			   for(k=i;k<=5;k++)
			   {
			    printf("#");
			   }
			   printf("\n");
			   }
		   }*/
		   
	/*	#include<stdio.h>
		 int main()
		 {
		 	int i,j;
		 	for(i=1;i<=5;i++)
		 	{
		 		for(j=1;j<=5;j++)
		 		{
		 		    printf("@");	
				 }
				 printf("\n");
			 }
		 }*/
		 
	#include<stdio.h>
	int main()
	{   int i,j;
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=5;j++)
			{
			  if(i==1 || i==5 || j==1 || j==5)
			  printf("*");
			  else
			   printf(" ");
			}
			printf("\n");
			}
		}
		 	 
>>>>>>> 6a82df13945791b2c097598d6f2f13fa7ca2a4bf
	   