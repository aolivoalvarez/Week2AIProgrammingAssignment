

#include <iostream>
#include <string>
using namespace std;

void Function1(int a, int b) {

    for (int i = 1; i <= 1000; i++) {
        if (i % a == 0 && i % b == 0) {
            cout << i << " is divisible by " << a << " and " << b << endl;
        }
    }
}

void Function2(string s) {
    string newS = " ";
    for (int i = 0; i < s.size(); i++) {
        newS = s[i] + newS;
    }

    cout << newS << endl;
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    string sentence = " ";

    

    cout << "Please enter a sentence: ";
    getline(cin, sentence);

    cout << "Please enter the first number: ";
    cin >> num1;

    cout << "Please enter the second number: ";
    cin >> num2;

    cout << endl;

    Function1(num1, num2);

    cout << endl;

    Function2(sentence);
}


