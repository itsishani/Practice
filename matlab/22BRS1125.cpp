//question 1
// #include<iostream>
// using namespace std;
// class time{
//     public:
//     int dh,dm,ds;
//     int ah,am,as;
//     void timecal(int ah=10,int am = 20,int as= 10){
//         ah = ah+dh;
//         am = am+dm;
//         as = as+ds;
//         if(as>=60){
//             as = as-60;
//             am+=1;
//         }
//         if(am>=60){
//             am = am-60;
//             ah+=1;
//         }
//         cout<<"The time is "<<ah<<" hours "<<am<<" minutes "<<as<<" seconds. "<<endl;
//     }
// };
// int main(){
//     time t;
//     cout<<"Give departure hour: ";
//     cin>>t.dh;
//     cout<<"Give departure minute: ";
//     cin>>t.dm;
//     cout<<"Give departure second: ";
//     cin>>t.ds;
//     t.timecal();
//     return 0;
// }

//question 2
#include<iostream>
using namespace std;
class BankAccount{
    public:
    int accountno;
    string accountholdername;
    double balance,dep,with;
    double deposit(double amt){
        balance += amt;
        return balance;
    }
    double withdraw(double amt){
        if(balance<=amt){
            cout<<"Insufficient balance"<<endl;
        }
        else{
            balance -= amt;
        }
        return balance;
    }
    double getBalance(){
        cout<<"The current balance is "<<balance<<endl;
        return 0;
    }
};
int main(){
    BankAccount no1;
    no1.accountno = 1001;
    no1.accountholdername ="abc";
    cout<<"For Account Number: "<<no1.accountno<<endl<<"Account holder name: "<<no1.accountholdername<<endl;
    cout<<"Give the balance: "<<endl;
    cin>>no1.balance;
    cout<<"Give the amount to be deposited: "<<endl;
    cin>>no1.dep;
    no1.deposit(no1.dep);
    cout<<"Give the amount to be withdrawn: "<<endl;
    cin>>no1.with;
    no1.withdraw(no1.with);
    no1.getBalance();

    BankAccount no2;
    no2.accountno = 1002;
    no2.accountholdername ="xyz";
    cout<<"For Account Number: "<<no2.accountno<<endl<<"Account holder name: "<<no2.accountholdername<<endl;
    cout<<"Give the balance: "<<endl;
    cin>>no2.balance;
    cout<<"Give the amount to be deposited: "<<endl;
    cin>>no2.dep;
    no2.deposit(no2.dep);
    cout<<"Give the amount to be withdrawn: "<<endl;
    cin>>no2.with;
    no2.withdraw(no2.with);
    no2.getBalance();
}