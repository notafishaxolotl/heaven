#include <iostream>


int main() {
    using std::cout;
    using str = std::string;
    using std::cin;
    using std::endl;
    int pi = 0;
    for(int i=17;i>=1;i-=1){
        
        for(int j=1;j<=15;j++){
            
            pi=pi+1;
            
            if (pi >= 12){
                pi=0;
                break;
            }
            cout<<pi<<endl;
        }
        cout<<endl;
    }
    return 0;
}