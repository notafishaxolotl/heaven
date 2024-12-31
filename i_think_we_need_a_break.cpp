#include <iostream>


int main() {
    using std::cout;
    using std::endl;
    
    for(int i = 1; i <= 20; i++){
        if(i==13){
            continue;
        }
        else if (i==19)
        {
            break;
        }
        cout<<i<<endl;
    }

    return 0;
}