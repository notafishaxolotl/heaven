#include <iostream>



int main() {
    using std::cout;
    using str = std::string;
    using std::cin;
    using std::endl;
    using std::tolower;
    using std::toupper;

    double temp;
    cout<<"Please Enter The Temputure: ";
    cin>>temp;

    if (temp >= 19 && temp <= 117){
        cout<<"dope";
    }
    else if (temp > 177){
        cout << "how vro";
    }
    else{
        cout << "wake up to reality";
    }
    

    return 0;
}