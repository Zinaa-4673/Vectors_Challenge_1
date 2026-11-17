#include "Book.h"

#include <iostream>

Book::Book(std::string bookTitle, std::string bookAuthor) {
    title = bookTitle;
    author = bookAuthor;
}

void Book::addPage(int pageNumber, std::string content) {
    pages.emplace_back(Page(pageNumber, content));
}

void Book::displayBook() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    for (const auto& page : pages) {
        page.display();
    }
}

// Students will implement the Book class methods here