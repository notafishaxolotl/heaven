#include <iostream>

int main() {
    using std::cout;

    srand(time(NULL));

    int num= (rand() % 6)+1;
    
    cout<<num;
    return 0;
}