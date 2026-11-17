#include <iostream>
#include <string>
#include "Book.h"


int main() {
    
    Book myBook("C++ Programming", "John Doe");
        
    myBook.addPage(1, "Introduction to C++ and Multi_File Project.");
    myBook.addPage(2, "Understanding Classes and Objects.");
    myBook.displayBook();

    return 0;
}