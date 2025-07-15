//book management#include <stdio.h>
#include<stdio.h>
#include <string.h>

struct Book {
    int book_id;
    char book_name[100];
    char book_author_name[100];
    char book_category[100];
    float price;
    float rating;
};

struct Book b[100];
int count = 1;

void hardcodedbook()
{
	b[0].book_id=1;
	strcpy(b[0].book_name, "C_Programming");
	strcpy(b[0].book_author_name, "Dennis_Ritchie");
	strcpy(b[0].book_category, "Programming");
	b[0].price=678.00;
	b[0].rating=5;	
}

void addBook() {
    int n;
    printf("How many books do you want to add? ");
    scanf("%d", &n);

    for (int i = count; i < count + n; i++) {
        printf("\nEnter Book %d details:\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].book_id);

        printf("Book Title: ");
        scanf("%s", b[i].book_name);

        printf("Author Name: ");
        scanf("%s", b[i].book_author_name);

        printf("Category: ");
        scanf("%s", b[i].book_category);

        printf("Price: ");
        scanf("%f", &b[i].price);

        printf("Rating: ");
        scanf("%f", &b[i].rating);
    }

    count += n;
    printf("\nBooks Added!\n");
}

void showBooks() {

    for (int i = 0; i < count; i++) {
        printf("\nBook ID: %d | Name: %s | Author: %s | Category: %s | Price: %.2f | Rating: %.1f\n",
               b[i].book_id, b[i].book_name, b[i].book_author_name,
               b[i].book_category, b[i].price, b[i].rating);
    }
}

void search() {
    int id, found = 0;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (b[i].book_id == id) {
            printf("\nBook ID: %d | Name: %s | Author: %s | Category: %s | Price: %.2f | Rating: %.1f\n",
                   b[i].book_id, b[i].book_name, b[i].book_author_name,
                   b[i].book_category, b[i].price, b[i].rating);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}
void authorbook(){
	char author[100];
	int found=0;
	
	printf("Enter Author Name: ");
	scanf("%s",author);
	
	for(int i=0;i<count;i++)
	{
		if(strcmp(b[i].book_author_name, author)==0)
		{
			printf("\nBook ID: %d | Name: %s | Price: %.2f | Rating: %.1f\n", b[i].book_id, b[i].book_name, b[i].price, b[i].rating);
			found=1;
		}
	}
	if(!found){
		printf("Author Book Not Found! \n");
	}
}
void category() {
    char category[100];
    int found = 0;

    printf("Enter category to search: ");
    scanf("%s", category);

    for (int i = 0; i < count; i++) {
        if (strcmp(b[i].book_category, category) == 0) {
            printf("\nBook ID: %d | Name: %s | Author: %s | Price: %.2f | Rating: %.1f\n",
                   b[i].book_id, b[i].book_name, b[i].book_author_name,
                   b[i].price, b[i].rating);
            found = 1;
        }
    }

    if (!found) {
        printf("No books found in this category.\n");
    }
}
void update()
{
 	int id, found = 0;
    printf("Enter Book ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (b[i].book_id == id) {
            found = 1;

            printf("\nCurrent details:\n");
            printf("Book ID: %d | Name: %s | Author: %s | Category: %s | Price: %.2f | Rating: %.1f\n",
                   b[i].book_id, b[i].book_name, b[i].book_author_name, b[i].book_category, b[i].price, b[i].rating);

            printf("\nEnter new details:\n");

            printf("Book Title: ");
            scanf("%s", b[i].book_name);

            printf("Author Name: ");
            scanf("%s", b[i].book_author_name);

            printf("Category: ");
            scanf("%s", b[i].book_category);

            printf("Price: ");
            scanf("%f", &b[i].price);

            printf("Rating: ");
            scanf("%f", &b[i].rating);

            printf("Book updated successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}
void removebook() {
    int id, found = 0;
    printf("Enter Book ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (b[i].book_id == id) {
            for (int j = i; j < count - 1; j++) {
                b[j] = b[j + 1];
            }
            count--;
            printf("Book deleted successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}
void sortedBooks() {
	printf("which type of Sorting you want?");
	printf("\n1 Low to High");
	printf("\n2 High to low");
	int c;
	printf("\n Enter the your option");
	scanf("%d",&c);
	if(c==1)
	{
		struct Book temp;
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (b[i].rating < b[j].rating) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    printf("\n Books sorted by rating (low to high):\n");
    showBooks();
	}
	else if(c==2)
	{
		struct Book temp;
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (b[i].rating > b[j].rating) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    printf("\nBooks sorted by rating (high to low):\n");
    showBooks();
	}
}
void exit()
{
	printf("Thank you visit again");
}
int main() 
{
	hardcodedbook();
    int choice;

	  printf("\n----------------------------------");
        printf("\n Book Management System Menu");
        printf("\n----------------------------------");
        printf("\n1. Add Books");
        printf("\n2. Delete Book");
        printf("\n3. Search Book by ID");
        printf("\n4. Author Book");
        printf("\n5. Search Book by Category");
		printf("\n6. Update Book");
        printf("\n7. Display Books");
        printf("\n8. Sorted Books");
        printf("\n0. Exit");
        
    do {
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1: addBook(); 
					break;
            case 2: removebook(); 
					break;
            case 3: search(); 
					break;
            case 4: authorbook(); 
					break;
            case 5: category(); 
					break;
			case 6: update(); 
					break;
            case 7: showBooks(); 
					break;
			case 8: sortedBooks();
					break;
            case 0: printf("Exiting.......");
            		exit();
					break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);

    return 0;
}

