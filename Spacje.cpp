#include <iostream>
#include <string>
using namespace std;

void remove_spaces(string& sentence) {
    for (int i = 0; i <= sentence.length(); i++) {
        while (sentence[i] == ' ') {
            sentence.erase(sentence.begin() + i); //usuwa spacje
            if (sentence[i] >= 97 && sentence[i] <= 122) sentence[i] = sentence[i] - 32; //zamienia male litery po spacji na duze
        }
    }
}

int main()
{
    string text;
    while (getline(cin, text)) {
        remove_spaces(text);
        cout << text << endl;
    }
    return 0;
}
