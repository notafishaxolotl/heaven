#include <iostream>//just keep this in nomater what
#include <string>// used for std::getline
int main() {
    using std::cout;
    using str = std::string;//std::string is now str for readablility
    using std::cin;
    using std::endl;
    using std::getline;//to  allow " " in user str
    using std::ws;//to ignore white space
    
    cout << "what is your name?" << endl;

    str name;
    getline (cin >> ws, name);

    cout << "Hello " << name << endl << "How old are you " << name << "?" << endl;

    int age;
    cin >> age;
    cin.ignore();//to clear cin buffer
    cout << "You are " << age << " years old " << name;

    return 0;
}
