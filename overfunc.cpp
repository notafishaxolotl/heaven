#include <iostream>

using std::cout;
using str = std::string;

void dozen();
void dozen(str topping1);
void dozen(str topping1, str topping2);
int main() {
    dozen("cheese","pepper");
    return 0;
}

void dozen(){
    cout<<"here is your pizza\n";
}
void dozen(str topping1){
    cout<<"here is your "<< topping1 <<" pizza\n";
}
void dozen(str topping1, str topping2){
    cout<<"here is your "<< topping1 << " and "<< topping2 <<" pizza\n";
}