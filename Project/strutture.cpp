#include <iostream>
using namespace std;

struct Libro {
    string titolo;
    string autore;
    int anno;
};

int main() {
    Libro biblioteca[3];

    biblioteca[0].titolo = "Il signore degli anelli";
    biblioteca[0].autore = "J.R.R. Tolkien";
    biblioteca[0].anno = 1954;

    biblioteca[1].titolo = "1984";
    biblioteca[1].autore = "George Orwell";
    biblioteca[1].anno = 1949;

    biblioteca[2].titolo = "Orgoglio e pregiudizio";
    biblioteca[2].autore = "Jane Austen";
    biblioteca[2].anno = 1813;

    for (int i = 0; i < 3; i++) {
        cout << "Libro " << i + 1 << endl;
        cout << "Titolo: " << biblioteca[i].titolo << endl;
        cout << "Autore: " << biblioteca[i].autore << endl;
        cout << "Anno: " << biblioteca[i].anno << endl;
        cout << endl;
    }

    return 0;
}
