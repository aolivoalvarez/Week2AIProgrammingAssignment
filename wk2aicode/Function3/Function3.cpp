#include <iostream>
#include <string>
using namespace std;

void Function3(string s) {
    string wackyS = " ";

    for (int j = 0; j < s.size(); j++) {

        char v = s[j];

        if ((v != 'a') && (v != 'e') && (v != 'i') && (v != 'o') && (v != 'u')) {
            wackyS += s[j];
        }
    }

    cout << wackyS << endl;
}

int main() {

    string sentence = " ";

    cout << "Please enter a sentence: ";
    getline(cin, sentence);

    Function3(sentence);

    return 0;
}
