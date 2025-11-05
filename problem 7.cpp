#include <iostream>
#include <string>
using namespace std;
int authenticchar(const string &s) {
    int seen[26] = {0};
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z') {
            int index = ch - 'A';
            if (seen[index] == 0) { 
                seen[index] = 1;
                count++;
            }
        }
    }
    return count;
}

int main() {
    string s;
    cout << "Enter the text: ";
    cin >> s;

    int result = authenticchar(s);
    cout << "Number of authentic characters: " << result << endl;

    return 0;
}
