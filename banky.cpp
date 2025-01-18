#include <iostream>
#include<list>
#include <algorithm>
#include <limits>

using namespace std;

void ballance(double cash);
double deposit();
double withdraw(double cash);
int main(){
    list<int> select = {1, 2, 3, 4};
    double cash = 0.00;
    int choice = 0;

    while(true){ 
        
        cout<<"\n***********************\n1:Veiw valable ballance\n2:Deposit cash\n"<<
        "3:Withdraw cash\n4:Ext\n***********************\nEnter your choice: ";cin>>choice;
        cout<<"***********************\n";

        if (cin.fail()||find(select.begin(), select.end(), choice) == select.end()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid choice. Please enter a number between 1 and 4.\n";
            continue;
        }
        
        switch (choice)
        {
        case 1:ballance(cash);break;
        case 2:cash+=deposit();break;
        case 3:cash-=withdraw(cash);break;
        case 4:cout<<"Thanks for visiting!\n***********************\n";return 0;
        
        default:
            break;
        }
    }

    return 0;
}
void ballance(double cash){
    cout<<"\nYour ballance is $"<<cash;
}
double deposit(){
    double money;
    cout<<"How much would you like to deposite?\n";
    cin>>money;
    return money;
}
double withdraw(double cash){
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if (amount > cash) {
        cout << "Insufficient funds!" << endl;
        return 0;
    }
    cout << "Amount withdrawn successfully!" << endl;
    return amount;
}