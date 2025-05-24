//Check whether the alphabet Vowel or constant

//Incblude header file
#include<stdio.h>
 int main()
 {
 	int uppercase_vowel,lowercase_vowel;
 	char c;
 	
 	printf("Enter an alphabet");
 	scanf("%c",&c);
 	
 	lowercase_vowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
 	uppercase_vowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
 	
 	//evalute true if c  is a vowel
 	if(lowercase_vowel||uppercase_vowel)
 	    printf("%c is vowel",c);
 	
 	else
 	    printf("%c is a constant",c);
 	
 	
 }