#include <iostream>
#include <cmath>

int main() {
    using std::cout;
    using str = std::string;
    using std::cin;
    using std::endl;
    
    double a;
    double b;
    double c;
    
    cout << "Enter side A: ";
    cin >> a;

    cout << "Enter side B: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Side C: " << c;

    return 0;
}

//hypotinuse calculator
