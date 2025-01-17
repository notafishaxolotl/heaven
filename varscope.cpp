#include <iostream>

using std::cout;

int no=2;

void num(int no);
int main() {
    int no = 3;
    num(no);
    return 0;
}
void num(int no){
    cout<<::no;
}