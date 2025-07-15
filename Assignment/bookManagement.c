
//Book Management System

#include<stdio.h> 
#include<stdlib.h>  
#include<string.h>  

#define MAX 100    


typedef struct 
{
	int bookId;
	char bookname[50];
	char author[50];
	char category[100];
	float price;
	float rating;
  }Book;
  
  
  Book *books=NULL;  
  int count=0; 
  int capacity=2;      

void addBooks();
void displayAllbooks();
void removeBooks();
void searchBooks();
void showAuthorBooks();
void showCategoryBooks();
void updateBooks();
void displaySortedBooks();



 
int main()
{
	
	int choice;

	do{
	    printf("\n-----------------Book Management System--------------\n");
	    printf("1. Add Book\n");
	    printf("2. Remove Book\n");
	    printf("3. Searcbh Book\n");
	    printf("4. Show Author's Books\n");
	    printf("5 Show Cateogry's Books\n");
	    printf("6. Update Book\n");
	    printf("7. Display Sorted Books\n");
	    printf("8. Display All Books\n");
	    printf("0. Exist\n");
	    printf("Enter your choice:\n");
	    scanf("%d",&choice);
	

	    switch(choice)
	    {
	    	case 1: addBooks();
	    	      break;
	    	case 2: removeBooks();
	    	       break;
		    case 3: searchBooks();
		            break;
		    case 4: showAuthorBooks();
		            break;
		    case 5: showCategoryBooks();
		            break;
		    case 6: updateBooks();
		            break;
		            
		    case 7: displaySortedBooks();
		            break;
	     	case 9 :printf("Existing program \n");
		            break;
		
		    default : printf("Invalid choice Try again\n");
		
		}
		}while(choice != 0);
	
		  return 0;
	}
           
	
	
		void addBooks()
		  {
		  	 books=(Book*)malloc(count*sizeof(Book));
		  	 int n;
		  		printf("Enter how many book you have want:\n");
		  		scanf("%d",&n);
		  		 for(int i=count;i<count+n;i++){
		  		 	  printf("The books details is:\n",i+1);
		  	if (count<100)  
		  	{   
		  	    
				   
		  		printf("Enter Book Id:\n");
		  		scanf("%d",&books[count].bookId);
		  		
		  		printf("Enter Book Name:\n");
		  		scanf("%s",books[count].bookname); 
		  		
		  		printf("Enter author name:\n");
		  		scanf("%s",books[count].author);
		  		
		  		printf("Enetr category:\n");
				scanf("%s",books[count].category);	
				
				printf("Enter Price:\n");
				scanf("%d",&books[count].price);
				
				printf("Enter rating\n");
				scanf("%f",&books[count].rating);
				count++;  
				
				printf("Book added successfully\n");
				
			 
			}
			else{
				printf("Book does not added\n");
			}
		  	
		  }
	}
		
		  void displayAllBooks()
		  {
		  	if(count==0)
		  	{
		  		printf("No books to display.\n");
		  		return;
			  }
		  	for(int i=0;i<count;i++)
		  	{
		  		printf("\n Id=%d",books[i].bookId);
		  		printf("\n Name=%s",books[i].bookname);
		  		printf("\n Author=%s",books[i].author);
		  		printf("\n Category=%s",books[i].category);
		  		printf("\n Price=%f",books[i].price);
		  		printf("\n Rating=%f",books[i].rating);
		  	
			  }
		  }
		  
	
		  void removeBooks()
          {
          	int id,flag=0;
          	printf("Enetr Book ID to remove:");
          	scanf("%d",&id);
          	
          	for(int i=0;i<count;i++)
          	  {
          	  	if(books[i].bookId==id)
          	  	 {
          	  	 	for(int j=i;j<count-1;j++)
          	  	 	  books[j]=books[j+1];
          	  	 	  
					 }
					   count--; 
					   flag=1; 
					   books=(Book*)malloc(count*sizeof(Book));
					  printf("Book removed successfully\n");
					   break;				
					 }
			
			if(!flag)
			   {
			   	printf("Book not found \n");
			  }
		}
  
			void searchBooks()
			  {
			  	 int choice;
			  	 printf("Search by 1.Id or 2.Name");
			  	 scanf("%d",&choice);
			  	 
			  	 if(choice==1)
			  	 {
			  	 	int id,flag=0;
			  	 	printf("Enetr book Id:");
			  	 	scanf("%d",&id);
			  	 	
			  	 	for(int i=0;i<count;i++)
			  	 	{
			  	 		
			  	 		if(books[i].bookId==id)
			  	 		{
			  	 			printf("The book is Found:%s\n",books[i].bookname);
			  	 			flag=1;
			  	 			break;
						}
				   }
				    if(!flag)
				         {
				         	printf("\nBook not found.");
						 }
				     	else if(choice==2)
						  {
						  	 char name[50];
						  	 int found=0;
				  	
				  	        printf("Enetr book Name:");
				  	        scanf("%s",name);
				         
					      }
		         	
		      
				  		for(int i=0;i<count;i++)
				  	     {
				  		    char name[50];
				  		   if(strcmp(books[i].bookname,name)==0)
				  		   {
				  			printf("The book is found\n",books[i].bookId);
				  			flag=1;
				  			break;
				  			
						  }
					  }
					  if(!flag)
					  {
					  
				       printf("Book not found:\n");
				      }
			         else{
			           printf("Sorry invalid choice\n");
			          }
			    }
		}
	
	   
	//Shows books by specific author
	   void showAuthorBooks()
	   {
	   	 
	   	char author[50];
	   	printf("Enetr author name:");
	   	scanf("%s",author);
	   	for(int i=0;i<count;i++)
	   	{
	   		if(strcmp(books[i].author,author)==0)
	   		{
	   			
	   			printf("\n%s\n",books[i].bookname);
			   }
		   }
	   	
	   }
	   
	   void showCategoryBooks()
	   { 
	     
	   	char category[100];
	   	 printf("Enetr Category: ");
	   	 scanf("%s",category);
	   	 for(int i=0;i<count;i++)
	   	 {
	   	 	if(strcmp(books[i].category,category)==0)
	   	 	{
	   	 		printf("%s\n",books[i].bookname);
				}
			}
	   }
	  
	   void updateBooks()
	   {
	   	int id,flag=0;
	   	printf("\nEnetr book id to update:");
	   	scanf("%d",&id);
	   	
	   	for(int i=0;i<count;i++)
	   	{
	   		if(books[i].bookId==id)
	   		{
	   			printf("\nEnetr new price:");
	   			scanf("%f",&books[i].price);
	   			
	   			printf("\nEnetr new rating:");
	   			scanf("%f",&books[i].rating);
	   			printf("Book updated successfully\n");
	   			flag=1;
	   			break;
	   			
	   			
			   }
		   }
		   if(!flag)
		     {
		         printf("Book not found\n");
		     }
		   
		}
		   
		   	
		   	  void displaySortedBooks()
		   	  {
		   	  	  Book *temp=malloc(count *sizeof(Book));
		   	  	  
	
		   	  	for(int i=0;i<count;i++)
		   	  	{
		   	  		for(int j=i+1;j<count;j++)
		   	  		{
		   	  			if(books[j].price>books[i].price||(books[j].price==books[i].price && books[j].rating>books[i].rating)) 
							                                                                 
							    {
							    	
							    	temp=books[i];
							    	books[i]=*books[j];
							    	books[j]=temp;
								}
								free temp;
						 }
						 
					 
					 printf("The top rated book is:\n");
					 for(int i=0;i<3 && i<count;i++)
					  {
					 	printf("%s-Price:%2f,Rating:%2f\n",books[i].bookname,books[i].price,books[i].rating);
					 }
				}
			}
		
		        
		
		  
		   	  
				 
				 
	   
	   
	
	
	
	
