#include <iostream>
#include <cstring>
using namespace std;

class Book {
private:
    char* title;
    char* author;
    int pages;

public:
    Book(const char* t = "", const char* a = "", int p = 0) {
        title = new char[strlen(t) + 1];
        strcpy(title, t);

        author = new char[strlen(a) + 1];
        strcpy(author, a);

        pages = p;
    }

    Book(const Book& b) {
        title = new char[strlen(b.title) + 1];
        strcpy(title, b.title);

        author = new char[strlen(b.author) + 1];
        strcpy(author, b.author);

        pages = b.pages;
    }

    Book& operator=(const Book& b) {
        if (this != &b) { 
            delete[] title;
            delete[] author;

            title = new char[strlen(b.title) + 1];
            strcpy(title, b.title);

            author = new char[strlen(b.author) + 1];
            strcpy(author, b.author);

            pages = b.pages;
        }
        return *this;
    }

    void display() const {
        cout << "Title: " << title << ", Author: " << author << ", Pages: " << pages << endl;
    }

    ~Book() {
        delete[] title;
        delete[] author;
    }
};

int main() {
    Book book1("1984", "George Orwell", 328);
    Book book2("Brave New World", "Aldous Huxley", 288);

    cout << "Before assignment:" << endl;
    book1.display();
    book2.display();

    book1 = book2;

    cout << "\nAfter assignment:" << endl;
    book1.display();
    book2.display();

    return 0;
}
