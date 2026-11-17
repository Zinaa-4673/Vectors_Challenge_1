#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <vector>
#include "Page.h"

class Book {
private:
    std::string title;
    std::string author;
    std::vector<Page> pages;
public:
    Book(std::string bookTitle, std::string bookAuthor);
    void addPage(int pageNumber, std::string content);
    void displayBook() const;
};
// Students will define the Book class here

#endif // BOOK_H