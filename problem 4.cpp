#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    string filtered = "";
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            if (c >= 'A' && c <= 'Z') c = c + 32;
            filtered += c;
        }
    }
    int left = 0;
    int right = filtered.size() - 1;

    while (left < right) {
        if (filtered[left] != filtered[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}
int main() {
    string s;
    cout << "enter the word: ";
    cin>> s;
    cout << boolalpha << isPalindrome(s) << endl; // Output: true
}
