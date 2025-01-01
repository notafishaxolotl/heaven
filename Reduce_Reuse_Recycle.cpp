#include <iostream>

using std::cout;

void hbd(){
    cout<<"Happy Birthday To You!\nHappy Birthday To You!\nHappy Birthday Dear You!\nHappy Birthday To You!\n";
}
void  NHBD();
int main() {
    
    hbd();

    NHBD();
    return 0;
}
void NHBD(){
    cout<<"Not Happy Birthday To You!\nNot Happy Birthday To You!\nNot Happy Birthday Dear You!\nNot Happy Birthday To You!";
}


/*note: functions cant veiw other functions content
to get around this:

void hbd(int num, bool smart){

}

int main() {
    int num = 21;
    bool smart = True;

    hbd(num, smart);

    return 0;
}

the variables can be renamed in the reciving function*/