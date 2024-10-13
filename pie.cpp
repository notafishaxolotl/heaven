#include <iostream>

namespace first{// to allow 2 differnt variables have the same name
    std::string x = "red robin hood";
    std::string b = "bats";
}
int main() {
    //allosw entitys in the name space to be used without being formaly decleard (note: it won work if its decleard here)
    using namespace first; 
    using  std::string;
    using  std::cout;//save youselfe time using std
    int b = 2;
    const double PI = 3.14159;
    double radius = 19;
    double cucumfrance = 2 * PI * radius;

    cout << cucumfrance << "cm\n" << x << std::endl << first::b;
    return 0;   
}