#include <iostream>
#include <string>

using namespace std;

struct product {
    string name;
    float price = 0;
    float priceKg = 0;
    float quantityKg = 0;
    float quantity = 0;
};

void grocerieList (product grocerie[], int size) {
    string choice;
    for (int i = 0; i < size; i++) {
        cout << "Enter what kind of product would you like to enter (p)normal - (wp)weight: " << endl;
        cin >> choice;

        if (choice == "p") {
            cout << "Enter the product: " << endl;
            cin >> grocerie[i].name;

            cout << "Enter the price per single object: " << endl;
            cin >> grocerie[i].price;

            cout << "Enter the quantity: " << endl;
            cin >> grocerie[i].quantity;
        } else if (choice == "wp") {
            cout << "Enter the product: " << endl;
            cin >> grocerie[i].name;

            cout << "Enter the price per Kg: " << endl;
            cin >> grocerie[i].priceKg;

            cout << "Enter quantity in Kg: " << endl;
            cin >> grocerie[i].quantityKg;
        }
    }
}

float groceriePrice (product grocerie[], int size) {
    float totPrice = 0;
    for (int i = 0; i < size; i++) {
        if (grocerie[i].quantity > 0 && grocerie[i].quantityKg == 0) {
            totPrice = totPrice + (grocerie[i].price * grocerie[i].quantity);
        } else if (grocerie[i].quantityKg > 0 && grocerie[i].quantity == 0) {
            totPrice = totPrice + (grocerie[i].priceKg * grocerie[i].quantityKg);
        }
    }
    return totPrice;
}

void list (product grocerie[], int size) {
    for (int i = 0; i < size; i++) {
        if (grocerie[i].quantity > 0 && grocerie[i].quantityKg == 0) {
            cout << "You bought " << grocerie[i].quantity << " " << grocerie[i].name << " for " << grocerie[i].price << "$ a piece" << endl;
        } else if (grocerie[i].quantityKg > 0 && grocerie[i].quantity == 0) {
            cout << "You bought " << grocerie[i]. quantityKg << " Kg of " << grocerie[i]. name << " for " << grocerie[i].priceKg << "$ a Kg" << endl;
        }
    }
}

int main() {

    product grocerie [5];

    grocerieList(grocerie, 5);
    float totPrice = groceriePrice(grocerie, 5);

    cout << "The total cost of the groceries is " << totPrice << " $" << endl << endl;

    list(grocerie, 5);

    return 0;
}
