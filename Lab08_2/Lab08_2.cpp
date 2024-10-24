#include <iostream>
#include <string>

using namespace std;

size_t MaxWordLength(const string& s) {
    size_t tmp = 0;
    size_t maxLength = 0;
    for (char c : s) {
        if (c != ' ')
            tmp++;
        else {
            if (tmp > maxLength) {
                maxLength = tmp;
            }
            tmp = 0;
        }
    }

    if (tmp > maxLength) {
        maxLength = tmp;
    }

    return maxLength;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    size_t res = MaxWordLength(str);
    cout << "Length of the longest word: " << res << endl;
    return 0;
}
