#include <iostream>
using namespace std;

int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;

    if (character >= 'a' && character <= 'z')
    {
        cout << "The entered character is lowercase." << endl;
    }

    else if (character >= 'A' && character <= 'Z')
    {
        cout << "The entered character is uppercase." << endl;
    }

    else {
        cout << "The entered character is not an alphabet." << endl;
    }

    return 0;
}
