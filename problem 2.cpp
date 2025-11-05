#include <iostream>
using namespace std;
int main() {
    string s= "hello", rev;
    char temp;
    cin>> s;
    for (int i=s.length()-1; i>=0; i--) {
        temp = s[i];
        rev = rev + temp;
    }
    cout << rev << endl;
}
