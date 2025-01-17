#include <iostream>

using std::cout;

double square(double length);
double cube(double length);
int main() {   

    double length = 9.8;
    
    double area = square(length);
    double volume = cube(length);

    cout<<"Area: "<< area << " cm^2\n";
    cout<<"Volume: "<< volume << " cm^3\n";
    
    return 0;
}
double square(double length){
    return length * length;
}
double cube(double length){
    return length * length * length;
}
