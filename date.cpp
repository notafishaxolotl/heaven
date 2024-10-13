#include <iostream>


int main() {
    using std::cout;
    using str = std::string;
    using std::cin;
    using std::endl;
    str month_name;
    int month;
    cout<< "Please enter in month (1-12): ";
    cin >> month;
    switch (month){
    case 1:
        month_name = "JAN";
        cout<< "It is " << month_name;
        break;
    case 2:
        month_name = "FEB";
        cout<< "It is " << month_name;
        break;
    case 3:
        month_name = "MAR";
        cout<< "It is " << month_name;
        break;
    case 4:
        month_name = "APR";
        cout<< "It is " << month_name;
        break;
    case 5:
        month_name = "MAY";
        cout<< "It is " << month_name;
        break;
    case 6:
        month_name = "JUN";
        cout<< "It is " << month_name;
        break;
    case 7:
        month_name = "JUL";
        cout<< "It is " << month_name;
        break;
    case 8:
        month_name = "AUG";
        cout<< "It is " << month_name;
        break;
    case 9:
        month_name = "SEP";
        cout<< "It is " << month_name;
        break;
    case 10:
        month_name = "OCT";
        cout<< "It is " << month_name;
        break;
    case 11:
        month_name = "NOV";
        cout<< "It is " << month_name;
        break;
    case 12:
        month_name = "DEC";
        cout<< "It is " << month_name;
        break;
    
    default:
        cout<<"please only enter in numbers 1 - 12";
        break;
    }
    
    return 0;
}