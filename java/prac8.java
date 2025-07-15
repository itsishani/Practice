// class child1 extends Parent{
//     void message(){
//         System.out.println("This is chlid 1.");
//     }
// }

// class child2 extends Parent{
//     void message(){
//         System.out.println("This is also child.");
//     }
// }

// question2
// abstract class Bank{
//     float balance;
//     abstract float getbalance();
// }

// class bankA extends Bank{
//     float getbalance(){
//         return 100;
//     }
// }

// class bankB extends Bank{
//     float getbalance(){
//         return 150;
//     }
// }

// class bankC extends Bank{
//     float getbalance(){
//         return 200;
//     }
// }

// question3
// abstract class marks{
//     float sub1;
//     float sub2;
//     abstract float average();
// }

// class studa extends marks{
//     float sub3;
//     float average(){
//         return (sub3+sub1+sub2)/3;
//     }
// }

// class studb extends marks{
//     float sub4;
//     float sub5;
//     studb(){
//     }
//     float average(){
//         return (sub1+sub2+sub4+sub5)/4;
//     }
// }

// question4
// abstract class base{
//     base(){
//         System.out.println("This is constructor of abstract class.");}
//         void a_method(){
//             System.out.println("This is a normal method of abstract class");
//         }
//         abstract void a_meth();
// }

// class subclass extends base{
//     void a_meth(){
//         System.out.println("This is abstract method.");
//     }
// }

// question5
// abstract class animal{
//     abstract void cats();
//     abstract void dogs();
// }

// class dog extends animal{
//     void dogs(){System.out.println("Dog is barking!!");}
//     void cats(){}
// }

// class cat extends animal {
//     void dogs(){}
//     void cats(){System.out.println("Cat is meowing!!");}
// } 

// abstract class shape{
//     abstract void rectangleArea(int l,int b);
//     abstract void squarearea(int s);
//     abstract void circlearea(int r);
// }

// class area extends shape{
//     void rectangleArea(int l,int b){System.out.println("Area of rectangle "+l*b);}
//     void squarearea(int s){System.out.println("Area of square is "+s*s);}
//     void circlearea(int r){System.out.println("Area of circle is "+r*r);}
// }

// public class prac8 {
//     public static void main(String[] args){
//         child1 one = new child1();
//         one.message();
//         child2 two = new child2();
//         two.message();

//         bankA a = new bankA();
//         System.out.println(a.getbalance());
//         bankB b = new bankB();
//         System.out.println(b.getbalance());
//         bankC c = new bankC();
//         System.out.println(c.getbalance());

//         studa a = new studa();
//         a.sub1 = 23;
//         a.sub2 = 233;
//         a.sub3 = 35;
//         System.out.print(a.average());

//         subclass x = new subclass();
//         x.a_meth();;
//         x.a_method();

//         dog d = new dog();
//         d.dogs();
//         cat c = new cat();
//         c.cats();


//         area[] r = new area[5];
//         r[0] = new area();
//         r[1] = new area();
//         r[2] = new area();
//         r[3] = new area();
//         r[4] = new area();
        
//         r[0].circlearea(5);
//         r[1].circlearea(6);
//         r[2].circlearea(7);
//         r[3].circlearea(2);
//         r[4].circlearea(3);
//         area[] rec = new area[4];
//         rec[0].rectangleArea(2, 3);
//         rec[1].rectangleArea(3, 04);
//         rec[2].rectangleArea(4, 5);
//         rec[3].rectangleArea(5, 6);
//         area[] sq = new area[4];
//         sq[0].squarearea(4);
//         sq[1].squarearea(5);
//         sq[2].squarearea(6);
//         sq[3].squarearea(7);
//     }
// }
