#ifndef AUTHOR_H
#define AUTHOR_H
#include <iostream>
class Author
{
private:
    std::string authorName;
    std::string authorId;

public:
    


    Author() {}
    friend std::ostream &operator<<(std::ostream &os, const Author &rhs);
    ~Author() {}

}
inline std::ostream &operator<<(std::ostream &os, const Author &rhs) {
    os << "authorName: " << rhs.authorName
       << " authorId: " << rhs.authorId;
    return os;
}
#endif // AUTHOR_H