#include <iostream>

using namespace std;

double get_max(double num1, double num2) {
    double result;

    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }

    return result;
}

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



    //comparisons
    double max_num;
    max_num = get_max(15.5,7.2);
    cout << "Max: " << max_num << endl;

    return 0;
}
