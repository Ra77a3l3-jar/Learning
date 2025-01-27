#include <iostream>

using namespace std;

int main() {
    int anno = 1999;

    for(int i = 0; i < 27; i++) {
        cout << "#include <iostream>" << endl
             << "using namespace std;" << endl
             << "int main() {" << endl
             << "cout << \"Hello, World! \"" << anno++ << endl
             << "}" << endl;
    }
    return 0;
}