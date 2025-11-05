#include <iostream>
using namespace std;
int count(const string& s, char a) {
    int counter = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == a) {
            counter++;
        }
    }
    return counter;
}

int main() {
    string text;
    cout<< "Enter the text: ";
    cin >> text;
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    cout << "The letter '" << letter << "' appears "
         << count(text, letter) << " times in \"" << text << "\"." << endl;

    return 0;
}
