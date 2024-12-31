#include <iostream>


int main() {
    using std::cout;
    srand(time(0));
    int rannum = (rand() % 9) + 1;
    switch (rannum){
        case 1:
            cout<<"You win $$$$$";
            break;
        case 2:
            cout<<"You loose $$$$$";
            break;
        case 3:
            cout<<"You win $$$";
            break;
        case 4:
            cout<<"We win $$$$$";
            break;
        case 5:
            cout<<"I win $$$$$";
            break;
        case 6:
            cout<<"21 Can you do somthin fo meh";
            break;
        case 7:
            cout<<"welcome 007";
            break;
        case 8:
            cout<<"RAHHHHH";
            break;
        case 9:
            cout<<"I ran out of stuff to say";
            break;
        default:
            cout<<"dumahh";
            break;
    }
    return 0;
}