#include <iostream>
using namespace std;

void move_numbers(int numbers[], int temp[], int how_many, int cycles) {
    int counter = 0;
    for (int i = 0; i < how_many; i++) {
        if (how_many - i > cycles) numbers[i] = temp[i + cycles];
        else {
            numbers[i] = temp[counter];
            counter++;
        }
    }
}

int main()
{
    int how_many, cycles;
    cin >> how_many >> cycles;
    int* numbers = new int[how_many];
    int* temp = new int[how_many];

    for (int i = 0; i < how_many; i++) {
        cin >> numbers[i];
        temp[i] = numbers[i];
    }
    
    move_numbers(numbers, temp, how_many, cycles);

    for (int i = 0; i < how_many; i++) {
        cout << numbers[i] << " ";
    }

    delete[] numbers;
    delete[] temp;

    return 0;
}