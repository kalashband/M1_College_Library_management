#include<stdio.h>
#include <string.h>
#include <stdlib.h>

void displayBook(){
    /*
    
   */
 FILE *libraryFile = fopen ("library.bin", "rb");
 if(libraryFile == NULL){
    printf("t\t\t No book is available");
    exit(0);
 }
 else 
 {
    char line[200];
    while (fgets(line,sizeof(line),libraryFile))
        printf("\n\t\t\t\t * %s", line);
    fclose(libraryFile);
 }
    
}

void returnBook(){

    /*
    Take Number Of Book at n
    Take Name of Book  at  Book
    */

    int i;
    int n=1;
    printf(" \n\t\t\t Number of Book  to Return :  ");
    scanf("%d",&n);
    char Book[1021];
    printf("\n\t\t\t Enter Book Name  : ");

    FILE *libraryFile = fopen("library.bin", "ab");
    for(i=1;i<=n;i++){
        fgets(Book , sizeof Book , stdin);
        fputs(Book,libraryFile);
        printf(" Clink on Option No 4 ");
    }
    fputs(Book,libraryFile);
    fclose(libraryFile);
}

void requestBook(){
    /*
    Takes two  Input Number of books and at j
        And  Book Name  
    */
    char Required[10];
    int j=1;
    if ( NULL ){
        printf("Library is close.Time 9 Am To 5 Pm * Sunday Close ");
    }
    else{
        displayBook();
        printf("No.of book ");
        scanf("%d",&j);
        for (int i=1;i<=j;i++){
        printf("\n\t\t\t Enter book name:");
        scanf("%s",&Required[j]);
        }
    }
    
    
}


