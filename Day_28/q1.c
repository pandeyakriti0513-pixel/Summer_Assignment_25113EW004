//Q.Write a program to create library management system
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 10000
struct book{
    int id;
    char title[100];
    char author[100];
    int year;
    int availability;
};
struct book library[MAX];
int count=0;
int nextID=1;
void add_book(){
    if(count>=MAX){
        printf("Sorry,the library is full!\n");
        return;
    }
    struct book b;
    b.id=nextID++;
    printf("Enter the title: ");
    scanf(" %99[^\n]",b.title);
    printf("Enter the author: ");
    scanf(" %99[^\n]",b.author);
    printf("Enter the year: ");
    scanf("%d",&b.year);
    b.availability=1;
    library[count++]=b;
    printf("Book added successfully to the library (ID: %d)\n",b.id);
}
void display_books(){
    if(count==0){
        printf("Sorry, the library is empty at the moment.\n");
        return;
    }
    printf("\n%-5s %-30s %-20s %-6s %-10s\n","ID","Title","Author","Year","Status");
    printf("----------------------------------------------------------------------------------------------------\n");
    for(int i=0;i<count;i++){
        printf("\n%-5d %-30s %-20s %-6d %-10s\n",library[i].id,library[i].title,library[i].author,
        library[i].year,library[i].availability? "Available":"Issued");

    }

}
void find_book(){
    char key[100];
    printf("Enter the title of the book you are looking for: ");
    scanf(" %99[^\n]",key);
    int found=0;
    for(int i=0;i<count;i++){
        if(strstr(library[i].title,key)!=NULL){
            printf("Book found->ID:%d\n%s\n%s\n%d\n%s\n",library[i].id,library[i].title,library[i].author,
            library[i].year,library[i].availability? "Available":"Issued");
            found=1;
        }
    
    }
    if(!found){
        printf("Sorry,book not found.\n");
    }
}
void delete_book(){
    int id;
    printf("Enter the book's ID to delete it: ");
    scanf("%d",&id);
    for(int i=0;i<count;i++){
        if(library[i].id==id){
            for(int j=i;j<count-1;j++){
                library[j]=library[j+1];
            }
            count--;
        
        printf("Book deleted successfully.\n");
        return;}
    }
    printf("Book not found.\n");
    return;
}
int main(){
    int choice;
    do{
        printf("\n-------------------------LIBRARY MANAGEMENT SYSTEM-------------------------\n");
        printf("1.Add Book\n2.Display Books\n3.Search Book\n4.Delete Book\n5.Exit\nChoice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: add_book();
                    break;
            case 2: display_books();
                    break;
            case 3: find_book();
                    break;
            case 4: delete_book();
                    break;
            case 5: printf("Goodbye_:)\n");
                    break;
            default: printf("Invalid choice\n");
        }
    }while(choice!=5);
    return 0;
}

