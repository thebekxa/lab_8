#include <iostream>
using namespace std;

void count(const char s[], int counts[]) {
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z')
            ch = ch - 'A' + 'a';
        if (ch >= 'a' && ch <= 'z')
            counts[ch - 'a']++;
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); 
    int counts[26];
    count(input.c_str(), counts); 
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0)
            cout << char('a' + i) << ": " << counts[i] << endl;
    }

    return 0;
}
