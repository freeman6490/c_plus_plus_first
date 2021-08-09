#include <iostream>

using namespace std;


string get_day_of_week(int day_number) {
    string day_of_week;

    switch(day_number) {
    case 0:
        day_of_week = "Sunday";
        break;
    case 1:
        day_of_week = "Monday";
        break;
    case 2:
        day_of_week = "Tuesday";
        break;
    case 3:
        day_of_week = "Wednesday";
        break;
    case 4:
        day_of_week = "Thursday";
        break;
    case 5:
        day_of_week = "Friday";
        break;
    case 6:
        day_of_week = "Saturday";
        break;
    default:
        cout << "Enter valid number (1-7)" << endl;
    }

    return day_of_week;
}

int main()
{
    cout << get_day_of_week(3);
    return 0;
}
