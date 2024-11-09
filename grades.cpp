#include <iostream>


int main() {
    using std::cout;
    using str = std::string;
    using std::cin;
    using std::endl;
    using std::tolower;
    using std::toupper;

    char grade;
    str ashual_grade;

    cout<<"please enter in your grade (F-A): ";
    cin>>grade;
    grade = tolower(grade);
    
    switch (grade){
    case 'a':
        ashual_grade = 'A';
        cout<< "You did great!";
        break;
    case 'b':
        ashual_grade = 'B';
        cout<< "You did good.";
        break;
    case 'c':
        ashual_grade = 'C';
        cout<< "You did okay.";
        break;
    case 'd':
        ashual_grade = 'D';
        cout<< "You did BAD!";
        break;
    case 'f':
        ashual_grade = 'F';
        cout<< "WHY YOU FAIL!";
        break;
    
    default:
        cout<<"'+'and'-' was too mutch writing lil bro";
        break;
    }

    return 0;
}