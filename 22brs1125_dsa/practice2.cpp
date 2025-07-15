#include<iostream>
#include<vector>
using namespace std;

class stack{
    private:
    vector<int> elements;
    public:
    void push(int element){
        elements.push_back(element);
    }
    void pop(){
        if(elements.empty()){
            cout<<"Stack is empty"<<endl;
        }
        else{elements.pop_back();
        }
    }
    void top(){
        if(elements.empty()){
            cout<<"Stack is empty"<<endl;
        }
        else{
            elements.back();
        }
    }
    // bool empty(){
    //     return elements.empty();
    // }

    void display(){
        vector<int> v = elements;
        if(v.empty()){cout<<"Stack is empty";return;}
        cout<<"The elements of the stack are: "<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    stack stack;
    cout << "Create a stack object:\n";
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.display();
    stack.pop();
    stack.display();
    //cout << "\nTop element is "<< stack.top()<< endl;  
}