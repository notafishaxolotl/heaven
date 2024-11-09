#include <iostream>


int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    using std::tolower;
    using std::toupper;
    
    int temp;
    bool night = false;
    cout<<"enter temputure" << endl;
    cin>>temp;

    //temp >= 1 && temp <= 35? cout << "thats good\n" : cout << "thats not good\n";

    if (temp >= 1 && temp <= 35){
        cout<<"thats good" << endl;
    }
    else if (temp < 1 || temp > 35){
        cout << "thats not good\n";
    }
    
    else{
        cout<<"fail" << endl;
    }
    if (!night){
        cout<<"it is bright\n";
    }
    else{
        cout<<"it is dark\n";
    }
    cout << "night == " << night; //"!" before bool flips it, 1 turns into 0 and viseversa
    return 0;
}