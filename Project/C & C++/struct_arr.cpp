#include <iostream>
#include <string>

using namespace std;

struct book {
    string creator;
    int year;
    string genere;
    float price;
};

void insertingBooks (book bookshop [], int size) {
    
    for (int i = 0; i < size; i++) {
        cout << "Enter the books name: " << endl;
        cin >> bookshop[i].creator;

        cout << "Enter the year of the book: " << endl;
        cin >> bookshop[i].year;

        cout << "Enter the genere of the book: " << endl;
        cin >> bookshop[i].genere;

        cout << "Enter the book's price: " << endl;
        cin >> bookshop[i].price;
    }
}

int main () {

    book bookshop [4];
    
    insertingBooks(bookshop, 4);

    return 0;
}
