#include <iostream>

using namespace std;


int main()
{
    //guess the number
    int number = 9;
    int current_guess;
    int guess_count = 0;
    int max_guess_count = 5;

    while (current_guess != number) {
        cout << "Guess a number: ";
        cin >> current_guess;
    }

    cout << "Good guess. You got it" << endl;

    //do while
    do {
        cout << "Guess a number: ";
        cin >> current_guess;
        guess_count++;
        if (guess_count > max_guess_count) {
            cout << "Max number of guesses. Sorry" << endl;
            break;
        }
    } while (current_guess != number);

    cout << "Good guess. You got it" << endl;
    return 0;
}
