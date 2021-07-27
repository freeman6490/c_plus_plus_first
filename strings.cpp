#include <iostream>

using namespace std;

int main()
{
    string phrase = "Luke is learning c++";

    cout << phrase.length() << endl;

    cout << phrase[3] << endl;

    //second param is where to start looking
    cout << phrase.find("learning", 0) << endl;

    cout << phrase.find("learning", 5) << endl;

    //starts at position 8 and grabs 3 characters
    cout << phrase.substr(8, 3) << endl;
    return 0;
}
