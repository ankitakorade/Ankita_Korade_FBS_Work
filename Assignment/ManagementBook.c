#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct {
    int bookId;
    char bookname[50];
    char author[50];
    char category[50];
    float price;
    float rating;
} Book;

Book *books = NULL;
int count = 0;

void hardCodedBooks();
void addBook();
void displayAllBooks();
void removeBook();
void searchBook();
void showAuthorBooks();
void showCategoryBooks();
void updateBook();
void displaySortedBooks();

int main() {
    int choice;

    hardCodedBooks();  

    do {
        printf("\n--- Book Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Remove Book\n");
        printf("3. Search Book\n");
        printf("4. Show Author's Books\n");
        printf("5. Show Category's Books\n");
        printf("6. Update Book\n");
        printf("7. Display Sorted Books\n");
        printf("8. Display All Books\n");
        printf("0. Exit\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        

        switch (choice) {
            case 1: addBook(); 
			          break;
			          
            case 2: removeBook(); 
			          break;
			          
            case 3: searchBook();
			           break;
			           
            case 4: showAuthorBooks(); 
			           break;
			           
            case 5: showCategoryBooks();
			        break;
			            
            case 6: updateBook(); 
			        break;
			            
            case 7: displaySortedBooks();
			        break;
			            
            case 8: displayAllBooks(); 
			        break;
			            
            case 0: printf("Exist...\n");
			        break;
			            
            default: printf("Invalid choice. Try again.\n");
        }

    } while (choice != 0);

    free(books); 
    return 0;
}

void hardCodedBooks() 
{
    count = 3;
    books = (Book *)malloc(MAX_BOOKS * sizeof(Book));

    books[0] = (Book){101, "Agnipankh", "Abdul Kalam", "Inspirational", 499.50, 4.5};
    books[1] = (Book){102, "Bhagavatgita", "Ved Vyasa", "Spiritual", 399.99, 4.0};
    books[2] = (Book){103, "Shyamchi Ai", "Sane Guruji", "Emotional", 699.00, 4.8};
}


void addBook() 
{
    if (count >= MAX_BOOKS) 
	{
        printf("Book limit reached!\n");
        return;
    }

    Book newBook;

    printf("Enter Book ID: ");
    scanf("%d", &newBook.bookId);

    printf("Enter Book Name: ");
    scanf(" %s", newBook.bookname);
    

    printf("Enter Author Name: ");
    scanf(" %s", newBook.author);
    

    printf("Enter Category: ");
    scanf(" %s", newBook.category);
    
	printf("Enter Price: ");
    scanf("%f", &newBook.price);

    printf("Enter Rating: ");
    scanf("%f", &newBook.rating);

    books[count++] = newBook;
    printf("Book added successfully!\n");
}

// Display all books
void displayAllBooks() {
    if (count == 0) {
        printf("No books to display.\n");
        return;
    }

    for (int i = 0; i < count; i++)
	 {
        printf("\nBook ID: %d\n", books[i].bookId);
        printf("Name: %s\n", books[i].bookname);
        printf("Author: %s\n", books[i].author);
        printf("Category: %s\n", books[i].category);
        printf("Price: %.2f\n", books[i].price);
        printf("Rating: %.2f\n", books[i].rating);
    }
}


void removeBook() 
{
    int id, found = 0;
    printf("Enter Book ID to remove: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) 
	{
        if (books[i].bookId == id) 
		{
            for (int j = i; j < count - 1; j++)
                books[j] = books[j + 1];
            count--;
            found = 1;
            printf("Book removed successfully.\n");
            break;
        }
    }

    if (!found)
    {
	
        printf("Book not found.\n");
    }
}

void searchBook()
 {
    int choice;
    printf("Search by 1. ID or 2. Name? ");
    scanf("%d", &choice);
    getchar();

    if (choice == 1) {
        int id, found = 0;
        printf("Enter Book ID: ");
        scanf("%d", &id);

        for (int i = 0; i < count; i++)
		 {
            if (books[i].bookId == id)
			 {
                printf("Book found: %s\n", books[i].bookname);
                found = 1;
                break;
            }
        }
        if (!found)
            printf("Book not found.\n");

    } else if (choice == 2) 
	{
        char name[50];
        int found = 0;
        printf("Enter Book Name: ");
        getchar();
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0;

        for (int i = 0; i < count; i++)
		 {
            if (strcmp(books[i].bookname, name) == 0)
			 {
                printf("Book found: ID %d, Author %s\n", books[i].bookId, books[i].author);
                found = 1;
                break;
            }
        }
        if (!found)
        {
		
            printf("Book not found.\n");
        }
    } else 
	{
        printf("Invalid choice.\n");
    }
}


void showAuthorBooks()
 {
    char author[50];
    int found = 0;
    printf("Enter Author Name: \n");
    scanf(author, sizeof(author), stdin);
    author[strcspn(author, "\n")] = 0;

    for (int i = 0; i < count; i++)
	 {
        if (strcmp(books[i].author, author) == 0) 
		{
            printf("%s\n", books[i].bookname);
            found = 1;
        }
    }

    if (!found)
    {
	
       printf("No books found by this author.\n");
   }
}

void showCategoryBooks()
 {
    char category[50];
    int found = 0;
    printf("Enter Category: \n");
    scanf(category, sizeof(category), stdin);
    category[strcspn(category, "\n")] = 0;

    for (int i = 0; i < count; i++) 
	{
        if (strcmp(books[i].category, category) == 0) 
		{
            printf("%s\n", books[i].bookname);
            found = 1;
        }
    }

    if (!found)
    {
	
        printf("No books found in this category.\n");
    }
}


    
void updateBook()
 {
    int id, found = 0;
    printf("Enter Book ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) 
	{
        if (books[i].bookId == id)
		 {
            printf("Enter new Price: ");
            scanf("%f", &books[i].price);
            printf("Enter new Rating: ");
            scanf("%f", &books[i].rating);
            printf("Book updated successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found)
      {
	
        printf("Book not found.\n");
    }
}


void displaySortedBooks() 
{
    if (count == 0) 
	{
        printf("No books available.\n");
        return;
    }

    Book temp;
    for (int i = 0; i < count - 1; i++) 
	{
        for (int j = i + 1; j < count; j++)
		 {
            if (books[j].price > books[i].price ||
                (books[j].price == books[i].price && books[j].rating > books[i].rating)) 
				{
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }

    printf("Top rated books:\n");
    for (int i = 0; i < 3 && i < count; i++) {
        printf("%s - Price: %.2f, Rating: %.2f\n",
               books[i].bookname, books[i].price, books[i].rating);
    }
}

