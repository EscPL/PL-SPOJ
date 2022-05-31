#include <iostream>
using namespace std;

void count_letters(string line, int letter_counter []) {
    for (int i = 0; i < line.length(); i++) {
        if (line[i] != ' ') {
            letter_counter[(int)line[i]]++;
        }
    }
}

void output(int letter_counter[]) {
    for (int i = 97; i <= 122; i++) {
        if (letter_counter[i] > 0) cout << (char)i << " " << letter_counter[i]
            << endl;
    }
    for (int i = 65; i <= 90; i++) {
        if (letter_counter[i] > 0) cout << (char)i << " " << letter_counter[i]
            << endl;
    }
}

int main()
{
    int letter_counter[128] = {};
    int test;
    cin >> test;
    cin.ignore();

    while (test--) {
        string line;
        getline(cin, line);
        count_letters(line, letter_counter);
    }

    output(letter_counter);
    
    return 0;
}