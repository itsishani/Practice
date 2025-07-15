import java.util.Scanner;
abstract class base{
    base(){
        System.out.println("base");
    }
    abstract int sum();
}

class child extends base{
    int sum(){System.out.println("Sum");return 0;}
    child(){
        super();
        System.out.println("Child");
    }
}
public class prac10 {
    
    public static void main(String[] args){
        int x =1;
        Scanner sc = new Scanner(System.in);
    do{    try{
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();
        int sum = n1/n2;
        System.out.println(sum);
        x =2;
    }
    catch(Exception e){
        System.out.println("Denominator cannot be zero");
    }}while(x == 1);
}
}
