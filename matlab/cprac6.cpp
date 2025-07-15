#include<iostream>
using namespace std;
class shape {
    public:
    int length;
    int height;
    int r;
    virtual void area(int length,int height )=  0;
    virtual void perimeter(int length,int height) = 0;    
};
class circle: public shape{
    public:
    void area (int r, int R = 0){
        cout<<"Area of the circle is "<<3.14*r*r<<endl;
    }
    void perimeter(int r,int R = 0){
        cout<<"Perimeter of the circle is:  "<<2*3.14*r<<endl;
    } 
};
class rect : public shape{
    public:
    void area (int l,int b){
        cout<<"Area of the rectangle is "<<l*b<<endl;
    }
    void perimeter(int l,int b){
        cout<<"Perimeter of the rectangle is "<<2*(l+b)<<endl;
    }
};
int main(){
    circle gol;
    shape* sh;
    rect teda;
    sh = &gol;
    sh->area(4,6);
    sh->perimeter(3,1); 
    sh = &teda;
    sh->area(4,5);
    sh->perimeter(3,2);
}
// Overriding the functions
// #include<iostream>
// using namespace std;
// class abc{
//     public:
//     void print(){
//         cout<<"abc"<<endl;
//     }
// };
// class bc : public abc{
//     public:
//     void print(){
//         cout<<"bc"<<endl;
//         abc::print();
//     }
// };
// class c : public bc{
//     public:
//     void print(){
//         cout<<"c"<<endl;
//         bc::print();
//     }
// };
// int main(){
//     c cat;
//     cat.print();
// }

// C++ program to demonstrate can also be used for implicit
// conversion to the class being constructed
// #include <iostream>
// using namespace std;
  
// class Point {
// private:
//     int x, y;
// public:
//     Point(int i = 0, int j = 0)
//     {
//         x = i;
//         y = j;
//     }
//     void print()
//     {
//         cout << "x = " << x << ", y = " << y << '\n';
//     }
// };
// class well: public Point {
//     void dot(Point t){
//         cout<<"The dimensions are: "<<t.x<<" and "<<t.y<<endl;
//     }
// };
  
// int main()
// {
//     Point t(20, 20);
//     t.print();
//     t = 30;     //Member x of t becomes 30
//     t.print();
//     well s;
//     s.dot(t);
//     return 0;
// }