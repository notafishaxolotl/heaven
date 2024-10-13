#include <iostream>


int main() {
    using std::cout;
    using str = std::string;
    using std::cin;
    using std::endl;
    using std::tolower;
    using std::toupper;

    int grade;
    cout << "what is your grade: ";
    cin>> grade;
    grade >= 50 ? cout<<"Good Job, You Passed!" : cout << "Why You Dum, Go Back And Study You failuar, NOW!";
    //grade % 2 ? cout << "ODD" : cout << "EVEN";

    return 0;
}
//basical just checking if the  statment is true or false and executes a difrent  code for eatch one