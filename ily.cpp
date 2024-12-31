#include <iostream>


int main() {
    using std::cout;
    using std::endl;

    int line = 0;
    int loops = 100;

    for (int i = 0; i < loops; ++i) {

        cout<<line+1<<".I LOVE YOU"<<endl;
        line = line+1;
        
    }
    return 0;
}