#include <iostream>

using namespace std;

string balanceBrackets(char string[]);

void addBrackets(char string[], char bracket);

int searchLens(char string[]);

int main() {

    char string[CHAR_MAX] {0};

    cout << "Enter a string:";
    cin >> string;

    cout << balanceBrackets(string);
}

string balanceBrackets(char string[]) {
    for (int i = searchLens(string); i >= 0; --i) {
        if (string[i] == '{') {
            addBrackets(string, '}');
        }
        if (string[i] == '(') {
            addBrackets(string, ')');
        }
        if (string[i] == '[') {
            addBrackets(string, ']');
        }
    }
    return string;
}

void addBrackets(char string[], char bracket) {
    int i = searchLens(string);
    string[i] = bracket;
}

int searchLens(char string[]) {
    int lens = 0;
   while (string[lens] != '\0') {
       lens ++;
   }
    return lens;
}