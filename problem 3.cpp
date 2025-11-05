#include <iostream>
#include <algorithm>
using namespace std;

bool anagram(string s, string t) {
    if (s.size() != t.size()) return false;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main() {
    string s, t;
    cout<<"Enter S: ";
    cin>> s;
    cout << "Enter T: ";
    cin>> t;
    cout << boolalpha << anagram(s, t) << endl; // Output: true
}
