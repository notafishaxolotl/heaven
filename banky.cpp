#include <iostream>
#include<list>
#include <algorithm>
#include <limits>
#include <iomanip>

using namespace std;

void ballance(double cash);
double deposit(double cash);
double withdraw(double cash);
int main(){
    list<int> select = {1, 2, 3, 4};
    double cash = 0.00;
    int choice = 0;

    while(true){ 
        
        cout<<"\n***********************\n1:Veiw valable ballance\n2:Deposit cash\n"<<
        "3:Withdraw cash\n4:Ext\n***********************\nEnter your choice: ";cin>>choice;
        cout<<"\n***********************\n";

        if (cin.fail()||find(select.begin(), select.end(), choice) == select.end()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid choice. Please enter a number between 1 and 4. ";
            continue;
        }
        
        switch (choice)
        {
        case 1:ballance(cash);break;
        case 2:cash+=deposit(cash);break;
        case 3:cash-=withdraw(cash);break;
        case 4:cout<<"Thanks for visiting!\n***********************\n";return 0;
        
        default:
            break;
        }
    }

    return 0;
}
void ballance(double cash){
    cout<<"\nYour ballance is $"<< setprecision(2) << fixed <<cash;
}
double deposit(double cash){
    double amount;
    char check;
    cout<<"How much would you like to deposite?\n";
    cin>>amount;
    if (amount<0) {
        cout << "Invalid ammount!" << endl;
    
        return 0;
    }
    cout<<"Funds were sucsefully added!\nWould you like to see your new balance(Y/n): ";
    
    do{
        cin>>check;
        switch (check){
        case 'y':
            amount+=cash;
            ballance(amount);
            break;

        case 'n':
            break;
        default:
            cout<<"Please only enter Y/n: ";
            break;
        }
        
    }while(check != 'y' && check != 'n');
    return amount;
}
double withdraw(double cash){
    double amount;
    char check;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if (amount<0) {
        cout << "Invalid ammount!" << endl;
    }
    if (amount > cash) {
        cout << "Insufficient funds!" << endl;
        return 0;
    }
    cout << "Amount withdrawn successfully!" << endl;
    cout<<"Funds were sucsefully withdrawed!\nWould you like to see your new balance(Y/n): ";
    do{
        
        cin>>check;
        switch (check){
        case 'y':
            cash -= amount;;
            ballance(amount);
            return amount;
            break;
        case 'n':
            return amount;
            break;
        default:
            cout<<"Please only enter Y/n: ";
            break;
        }
    }while(check != 'y' && check != 'n');
    return amount;
}