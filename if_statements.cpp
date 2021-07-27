#include <iostream>

using namespace std;

int main()
{
    //if statements
    bool is_male = true;
    bool is_tall = false;

    if(is_male) {
        cout << "You are a male" << endl;
    } else {
        cout << "You are not a male" << endl;
    }

    if(is_male && is_tall) {
        cout << "You are tall or a male" << endl;
    } else if(is_male && !is_tall) {
        cout << "You are a male that is short" << endl;
    } else {
        cout << "You are not tall or a male" << endl;
    }
    return 0;
}
