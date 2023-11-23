//
//  main.c
//  PracticeArray
//
//  Created by Diba Makki on 2023-11-06.
//

#include <stdio.h>

typedef struct {
    char name[50];
    char author[50];
    int isbn;
    int qnty;
}book;

int main(void) {

 int i;
 for (i = 0; i < 10 ; i++) {
printf("\n\nLibrary inventory managment menu: \n");
printf("1.Add a new book\n");
printf("2. List all books\n");
printf("3. Exit\n\n");
printf("Enter your choice: ");
     int choice;
     scanf("%d", &choice);
     printf("\n");
     
     book bookinv[10];
     if (choice == 1) {
        printf("Enter the book title: ");
         scanf("%s[^\n]", bookinv[i].name);
        printf("Enter the author's name: ");
         scanf("%s[^\n]", bookinv[i].author);
         printf("Enter book ISBN: ");
         scanf("%d", &bookinv[i].isbn);
         printf("Enter book quantity: ");
         scanf("%d", &bookinv[i].qnty);
         printf("Book added to the inventory\n\n\n");
       
     }
     //  list`
     else if (choice == 2) {
         
         for (int j = 0; j < i; j++) {
             
             printf("%d >> Book title : %s\n", j + 1 , bookinv[j].name);
             printf("%d >> Author : %s\n", j + 1, bookinv[j].author);
             printf("%d >> ISBN : %d\n", j + 1, bookinv[j].isbn);
             printf("%d >> Quantity : %d\n\n\n", j + 1, bookinv[j].qnty);
             
         }

     }


         else if (choice == 3) {
             printf("Exiting\n");
             i = 11;
         }
   

 }
    return 0;
   
}







