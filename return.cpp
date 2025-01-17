#include <iostream>
//#include <string>
//#include <ctime>

using std::cout;
using str = std::string;
//using std::cin;
//using std::endl;
//using std::tolower;
//using std::toupper;
/*using std::getline;
using std::ws;*/
str concatStrings(str name1, str name2);

int main() {   
    str first_name = "Hanna";
    str last_name = "Montana";
    str full_name = concatStrings(first_name, last_name);
    cout << "Hello "<<full_name;
    return 0;
}
str concatStrings(str name1, str name2){ //replace x for new function name
    return name1 + " " + name2;
}
