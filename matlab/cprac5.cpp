// #include<iostream>
// using namespace std;
// class point{
//      private:
//        int x,y;
//        friend class PointPrinter;
//     public:
//        point(int x,int y): x(x) ,y(y){}  
// };
// class PointPrinter{
//     public:
//       void printPoint( point p){
//         cout<<"x axis of p is "<<p.x<<" and the y axis of p is "<<p.y<<endl;
//       }
// };
// int main(){
//     point p{1,2};
//     PointPrinter pp;
//     pp.printPoint(p);
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// class Transaction;
// class BankAccount{
//   private:
//   double balance;
//   string account_number;
//   string account_type;
  
//   public:
//   BankAccount(double initial_balance,string account_number,string account_type) 
//   : balance(initial_balance), account_number(account_number), account_type(account_type){}
//   friend class Transaction;
//   void updateBalance(double amount){
//     balance += amount;
//   }
//   double getBalance() const{
//     return balance;
//   }
// };

// class Transaction{
//   private:
//     double amount;
//     string transaction_type;
//     string transaction_date;
//   public:
//       friend class BankAccount;
//       Transaction(double amount, string transaction_type, string transaction_date)
//       : amount(amount), transaction_date(transaction_date), transaction_type(transaction_type) {}

//     void performTransaction(BankAccount& account){
//         if(transaction_type=="deposit"){
//           account.updateBalance(amount);}
//         else if (transaction_type == "withdrawal"){
//           if(account.getBalance() >= amount){
//             account.updateBalance(-amount);
//           }
//           else{
//             cout<<"Insufficient balance"<<endl;
//           }
//         }
//         else{
//           cout<<"Invalid transaction type\n";
//         }  
//     }  
// };
// int main(){
//   BankAccount account(2000,"1234","Saving");
//   cout<<"Enter transaction amount: ";
//   double amount;
//   cin>>amount;
//   cout<<"Enter transaction type (deposit/withdrawal): ";
//   string type;
//   cin>>type;
//   Transaction newtransaction(amount, type, "24/5/23");
//   newtransaction.performTransaction(account);
//   cout<<"Updated account balance: $"<<account.getBalance()<<endl;
//   return 0;

// }    

// #include<iostream>
// #include<string>
// using namespace std;
// class Animal{
//   public:
//     string name;
//     string sound;
//     int age;
//     void getdata(){
//       cin>>name;
//       cin>>sound;
//       cin>>age;
//     }
//     void display(){
//       cout<<"Name "<<name<<endl;
//       cout<<"Age "<<age<<endl;
//       cout<<"Sound "<<sound<<endl;
//     }
// };
// class dog: public Animal{
//   public:
//     void sentence(){
//       cout<<name<<"is barking "<<endl;
//     }
// };
// class cat: public Animal{
//   public:
//     void sentence(){
//       cout<<name<<"is meowing"<<endl;
//     }
// };
// int main(){
//   dog obj1;
//   obj1.getdata();
//   obj1.display();
//   //obj1.sentence();
//   cat obj2;
//   obj2.getdata();
//   obj2.display();
//   //obj2.sentence();
//   return 0;
// }

// #include<iostream>
// using namespace std;
// class fruit{
//   public:
//     string type;
//     void print(string type){
//       cout<<"The fruit is "<<type<<endl;
//     }   
// };
// class Citrusfruit: public fruit{
//   public:
//     string type = "citrus fruit";
// };
// class berry: public fruit{
//   public:
//     string type = "Berry";
// };
// class mix: public Citrusfruit{
//   public:
//     void printit(){
//       cout<<"It is both citrus fruit and berry.";
//     }
// };
// int main(){
//   Citrusfruit ob;
//   berry obb;
//   ob.print("Citrus fruit");
//   obb.print("berry");
//   mix ob1;
//   ob1.printit();
//   return 0;
// }

// #include<iostream>
// using namespace std;
// class person{
//   int id;
//   string name;
//   public:
//     void get_d(){
//       cout<<"Give the id of the person: ";
//       cin>>id;
//       cout<<"Give the name of the person: ";
//       cin>>name;
//     }
//     void display_f(){
//       cout<<"Person details: "<<id<<" "<<name<<endl;
//     }
// };
// class student: private person{
//   string course;
//   int fees;
//   public:
//   void get_std(){
//     get_d();
//     cout<<"Give the name of course registered: ";
//     cin>>course;
//     cout<<"Give the fees: ";
//     cin>>fees;
//   }
//   void display_po(){
//     display_f();
//     cout<<"Student's details: "<<course<<" "<<fees<<endl;
//   }
// };
// class teacher: private person{
//   string school;
//   int salary;
//   public:
//     void get_tcr(){
//         get_d();
//         cout<<"Give the school: ";
//         cin>>school;
//         cout<<"Give the salary: ";
//         cin>>salary;
//     }
//     void display_r(){
//       display_f();
//       cout<<"Teacher's details: "<<school<<" "<<salary<<endl;
//     }
// };
// int main(){
//   student mai;
//   mai.get_std();
//   mai.display_po();
//   teacher aap;
//   aap.get_tcr();
//   aap.display_r();
//   return 0;

// }

// C++ program to demonstrate the use of virtual function

#include <iostream>
#include <string>
using namespace std;

class Animal {
   private:
    string type;

   public:
    // constructor to initialize type
    Animal() : type("Animal") {}

    // declare virtual function
    virtual string getType() {
        return type;
    }
};
class Dog : public Animal {
   private:
    string type;

   public:
    // constructor to initialize type
    Dog() : type("Dog") {}

    string getType() override {
        return type;
    }
};
class Cat : public Animal {
   private:
    string type;

   public:
    // constructor to initialize type
    Cat() : type("Cat") {}

    string getType() override {
        return type;
    }
};
void print(Animal* ani) {
    cout << "Animal: " << ani->getType() << endl;
}

int main() {
    Animal* animal1 = new Animal();
    Animal* dog1 = new Dog();
    Animal* cat1 = new Cat();

    print(animal1);
    print(dog1);
    print(cat1);

    return 0;
}