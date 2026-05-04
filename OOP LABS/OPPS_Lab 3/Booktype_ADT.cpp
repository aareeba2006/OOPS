#include <iostream>
#include <string>
using namespace std;

class bookType {
private:
    string title;
    string* authors;   // dynamic array of authors
    int numAuthors;
    string publisher;
    string ISBN;
    double price;
    int copies;

public:
    // Default constructor
    bookType() {
        title = "";
        numAuthors = 0;
        authors = new string[4]; // allocate space for max 4 authors
        publisher = "";
        ISBN = "";
        price = 0.0;
        copies = 0;
    }

    // Parameterized constructor
    bookType(string t, string auth[], int nAuth, string pub, string isbn, double p, int c) {
        title = t;
        numAuthors = (nAuth > 4) ? 4 : nAuth;
        authors = new string[4];
        for(int i = 0; i < numAuthors; i++)
            authors[i] = auth[i];
        publisher = pub;
        ISBN = isbn;
        price = p;
        copies = c;
    }

    // Copy constructor (deep copy)
    bookType(const bookType& b) {
        title = b.title;
        numAuthors = b.numAuthors;
        authors = new string[4];
        for(int i = 0; i < numAuthors; i++)
            authors[i] = b.authors[i];
        publisher = b.publisher;
        ISBN = b.ISBN;
        price = b.price;
        copies = b.copies;
    }

    // Destructor
    ~bookType() {
        delete[] authors;
    }

    // Getters
    string getTitle() const { return title; }
    string getAuthor(int i) const { return (i >= 0 && i < numAuthors) ? authors[i] : ""; }
    int getNumAuthors() const { return numAuthors; }
    string getPublisher() const { return publisher; }
    string getISBN() const { return ISBN; }
    double getPrice() const { return price; }
    int getCopies() const { return copies; }

    // Setters
    void setTitle(string t) { title = t; }
    void setAuthor(int i, string a) { if(i >= 0 && i < 4) authors[i] = a; }
    void setNumAuthors(int n) { numAuthors = (n > 4) ? 4 : n; }
    void setPublisher(string pub) { publisher = pub; }
    void setISBN(string isbn) { ISBN = isbn; }
    void setPrice(double p) { price = p; }
    void setCopies(int c) { copies = c; }

    // Other member functions
    bool checkTitle(string t) const { return title == t; }
    bool checkISBN(string i) const { return ISBN == i; }
    void updateCopies(int n) { copies += n; } // add or remove copies

    // Display book info
    void display() const {
        cout << "Title: " << title << endl;
        cout << "Authors: ";
        for(int i = 0; i < numAuthors; i++) {
            cout << authors[i];
            if(i < numAuthors - 1) cout << ", ";
        }
        cout << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Price: $" << price << endl;
        cout << "Copies in stock: " << copies << endl;
        cout << "-------------------------" << endl;
    }
};

// ------------------- Main Program -------------------

int main() {
    bookType books[100];  // array of 100 books
    int bookCount = 0;

    // Add first book
    string authors1[] = {"Author One", "Author Two"};
    books[bookCount++] = bookType("C++ Programming", authors1, 2, "TechPress", "1234567890", 59.99, 10);

    // Add second book
    string authors2[] = {"Jane Doe"};
    books[bookCount++] = bookType("Data Structures", authors2, 1, "CompBooks", "9876543210", 49.99, 5);

    // Display all books
    for(int i = 0; i < bookCount; i++) {
        books[i].display();
    }

    // Search by title
    string searchTitle = "C++ Programming";
    for(int i = 0; i < bookCount; i++) {
        if(books[i].checkTitle(searchTitle)) {
            cout << "Book found by title:\n";
            books[i].display();
        }
    }

    // Search by ISBN
    string searchISBN = "9876543210";
    for(int i = 0; i < bookCount; i++) {
        if(books[i].checkISBN(searchISBN)) {
            cout << "Book found by ISBN:\n";
            books[i].display();
        }
    }

    // Update copies
    books[0].updateCopies(5); // add 5 copies
    cout << "After updating copies of first book:\n";
    books[0].display();

    return 0;
}
