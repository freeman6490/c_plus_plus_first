#include <iostream>

using namespace std;


int main()
{
    int index = 0;

    while(index <= 7) {
        cout << index << endl;
        index++;
    }

    int index2 = 7;
    do {
        cout << index2 << endl;
        index2++;
    } while (index <= 5);

    return 0;
}
