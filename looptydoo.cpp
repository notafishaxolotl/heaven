#include <iostream>
#include <string>

int main() {
    using std::cout;
    using str = std::string;
    using std::cin;
    using std::endl;
    using std::tolower;
    using std::toupper;
    using std::getline;
    using std::ws;

    
    str name;
    int no;
    

    while(name.empty() || name.length() <= 3){
        cout<<"what is your name? ";
        getline(cin, name);
    }
    cout<<"hello "<<name;
    do{
        cout<<endl<<"enter a positive number: ";
        cin>>no;
    }while(no <= 0);
    for (int i = 72; i >= 0; i-=3){
        cout<<i<<endl;
    }
    cout<<"Danny";
    return 0;
}