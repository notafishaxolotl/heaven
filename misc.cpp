#include <iostream>
#include <string>
#include <limits>

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
    int age;
    bool alive, game;
    char sure;

    cout<<"what is your name?\nname: ";
    getline (cin >> ws, name);

    cout<<"hello "<<name<<endl<<"how old are you?";

    while (true) {
        if (cin >> age) {
            cout<<"are you sure?";
            cin>>sure;
            sure = toupper(sure);
            switch (sure)
            {
            case 'Y':
                age = age;
                break;
            case 'N':
                cout<<"then how old are you really?";
                break;
            default:
                cout<<"ninja";
                break;
            }
            if (sure == 'Y') {
                break;
            }
        } else {
            cout << "That isn't your age, silly :P" << endl;
            cin.clear();
            cin.ignore();
            cout << "go on tell me you age\nage: ";
        }
    }
    cout<<age;
    return 0;
}