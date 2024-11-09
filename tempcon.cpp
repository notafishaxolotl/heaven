#include <iostream>


int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    using std::toupper;

    double temp;
    char unit;
    char origin;
    double result;
    cout<<"*****Temputre Conversion*****"<<endl
    <<"*****************************\n"<<endl
    <<"What unit would you like to convert to?(K F C): ";
    cin>>unit;

    unit = toupper(unit);

    if (unit == 'K'){
        cout<<"You choese Kelvin"<<endl;
    }
    else if (unit == 'F'){
        cout<<"You chose Ferenhite"<<endl;
    }
    else if (unit == 'C'){
        cout<<"You chose celcius"<<endl;
    }
    else{
        cout<<"\033[1;31mERROR";
        cout<<endl<<"*****************************\033[0m"<<endl;
        return 1;
    }
    cout<<"What Are You converting from?(K F C): ";
    cin>>origin;
    origin = toupper(origin);

    switch (origin){
    case 'K':
        cout<<"You choese Kelvin"<<endl;
        origin='K';
        break;
    case 'F':
        cout<<"You chose Ferenhite"<<endl;
        origin='F';
        break;
    case 'C':
        cout<<"You chose celcius"<<endl;
        origin='C';
        break;
    default:
        cout<<"\033[1;31mERROR";
        cout<<endl<<"*****************************\033[0m"<<endl;
        return 1;
    }

    cout<<"What is the original temperature?: ";    
    if (!(cin >> temp)) {
        cout << "\033[1;31mERROR\n*****************************\033[0m" << endl;
        return 1;
    }

    if (origin == 'K' && unit == 'K'){
        result=temp;
        cout<<"Your new temperature is " << result << unit;
    }
    else if (origin == 'K' && unit == 'F'){
        result= (temp-273.15) * 9/5 + 32;
        cout<<"Your new temperature is " << result << unit;
    }
    else if (origin == 'K' && unit == 'C'){
        result= temp-273.15;
        cout<<"Your new temperature is " << result << unit;
    }
    else if (origin == 'F' && unit == 'K'){
        result= (temp-32) * 5/9 + 273.15;
        cout<<"Your new temperature is " << result << unit;
    }
    else if (origin == 'F' && unit == 'F'){
        result= temp;
        cout<<"Your new temperature is " << result << unit;
    }
    else if (origin == 'F' && unit == 'C'){
        result= (temp-32) * 5/9;
        cout<<"Your new temperature is " << result << unit;
    }
    else if (origin == 'C' && unit == 'K'){
        result=temp+273.15;
        cout<<"Your new temperature is " << result << unit;
    }
    else if (origin == 'C' && unit == 'F'){
        result= (temp*9/5) + 32;
        cout<<"Your new temperature is " << result << unit;
    }
    else if (origin == 'C' && unit == 'C'){
        result= temp;
        cout<<"Your new temperature is " << result << unit;
    }
    else{
        cout<<"\033[1;31mERROR";
        cout<<endl<<"*****************************\033[0m"<<endl;
        return 1;
    }
    

    cout<<endl<<"*****************************"<<endl;
    return 0;
}