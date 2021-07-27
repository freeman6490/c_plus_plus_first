#include <iostream>

using namespace std;

void speak_to_user() {
    cout << "Hi Luke" << endl;
}

void passing_in_params(string name, int age) {
    cout << "Hi " << name << endl;
    cout << "Hi " << name << " you are " << age << endl;
}

int main()
{
    //functions
    speak_to_user();
    passing_in_params("Jason", 50);
}
