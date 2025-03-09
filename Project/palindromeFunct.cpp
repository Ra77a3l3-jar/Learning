#include <iostream>
#include <string>

using namespace std;

bool isPalindrome (const string& A ) {
    int length = A.length();

    for (int i = 0; i < length/2; i++) {
        if(A[i] != A[length - 1  - i]) {
            return false; 
        }
    }
    return true;
}

