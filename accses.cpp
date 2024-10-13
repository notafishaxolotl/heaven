#include <iostream>


int main() {
    using std::cout;
    using str = std::string;
    using std::cin;
    using std::endl;


    int age;

    cout << "How old are you?" << endl;
    cin >> age;

    if (age >= 150){
    
        cout << "Congo-rats you old fart!";

    }

    else if (age >= 18){

        cout << "Welcome in lil bru.";

    }

    else if (age < 1){
    
        cout << "How did you manage that lil bru.";

    }
        
    else{

        cout << "GET OUT LIL BRU!";

    }
    
    return 0;
}