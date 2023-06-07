#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include "BOOKCATEGORY.h"
class Book
{
private:
std::string bookid;
std::string bookAuthor;
float bookprice;

enum class BOOKCATEGORY BOOKCATEGORY;
public:
    Book(const Book&);
    Book(std::string id,std::string Author,float Price);
    Book(std::string id,std::string Author,float Price,enum class BOOKCATEGORY);
    ~Book() {}

    std::string getBookid() const { return bookid; }
    void setBookid(const std::string &bookid_) { bookid = bookid_; }

    std::string getBookAuthor() const { return bookAuthor; }
    void setBookAuthor(const std::string &bookAuthor_) { bookAuthor = bookAuthor_; }

    float getBookprice() const { return bookprice; }
    void setBookprice(float bookprice_) { bookprice = bookprice_; }
};

#endif // BOOK_H
