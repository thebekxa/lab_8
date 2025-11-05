#include <iostream>
using namespace std;

char to_lower(const char s) {
    if (s >= 'A' && s <= 'Z')
        return s - 'A' + 'a';
    return s;
}

void countChar(const char* str, int& vowelCount, int& consonantCount) {
    vowelCount = 0;
    consonantCount = 0;

    while (*str != '\0') {
        char ch = to_lower(*str);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowelCount++;
            else
                consonantCount++;
        }
        str++;
    }
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int vowels, consonants;
    countChar(str, vowels, consonants);

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
