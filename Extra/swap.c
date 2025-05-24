//Swap numbers without using temporary variable

//Include header file

 #include<stdio.h>
 int main()
 {
      int a,b;
      printf("Enter value of a");
      scanf("%d",&a);
      printf("Enter value of b");
      scanf("%d",&b);
      
     a=a-b;
     b=a+b;
     a=b-a;
      
      printf("After swapping the a=%d\n",a);
      printf("\nAfter swapping the b=%d\n",b);

 	
 }