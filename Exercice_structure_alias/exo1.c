#include <stdio.h>
#include <limits.h>

struct Book
{
    char title[100];
    char author[50];
    long int isbn;
    double price;
};

void printBook(struct Book *book)
{
    printf("Book title : %s\n", book->title);
    printf("Book author : %s\n", book->author);
    printf("Book ISBN : %li\n", book->isbn);
    printf("Book price : %.2f\n", book->price);
}

void changePrice(struct Book *book, double percent){
    book->price *= 1+percent/100;
}

int main()
{
    struct Book book1 = {"Le Seigneur des anneaux", "J.R.R. Tolkien", 2266286269, 18.90};
    printBook(&book1);
    //printf("Book 1 title : %s\n", book1.title);
    //printf("Book 1 author : %s\n", book1.author);
    //printf("Book 1 ISBN : %li\n", book1.isbn);
    //printf("Book 1 price : %.2f €\n", book1.price);    

    struct Book book2 = {"Game Of Thrones, Le trône de fer", "George R.R. Martin", 2290208876, 22.0};
    printBook(&book2);
    printf("Baisse de prix !\n");
    changePrice(&book2, -5);
    printBook(&book2);

    return 0;
}