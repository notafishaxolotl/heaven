#include <iostream>
#include <string>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    using str = std::string;

    int rows;
    int collums;
    str symbol;

    cout<<"how many rows would you like?\n";cin>>rows;
    cout<<"how many collums would you like?\n";cin>>collums;
    cout<<"what symbol would you like?\n";cin>>symbol;

    for(int i =1 ;i <= rows; i++){
        for(int j = 1;j <= collums; j++){
            cout<<symbol;
        }
        cout<<endl;
    }
    return 0;
}