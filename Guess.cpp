#include <iostream>


int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    int num;
    int guess;
    int tries=0;
    
    srand(time(NULL));
    num=(rand()%100)+1;
    cout<<"**************************************\n*********NUMBER GUESSING GAME*********\n**************************************\n";
    cout<<"Pick a number between 1 and 100: ";
    do{
        cin>>guess;

        if (cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Invalid input. Please enter a number.\n";
            continue; 
        }
        
        if(guess != num){
            tries=tries+1;
            cout<<"Guess again\nNo.Tries: "<<tries<<endl;
        }
    } while (guess != num);
    
    tries=tries+1;
    cout<<"Well done\nNo.Tries: "<<tries<<endl<<"**************************************";
    return 0;
}