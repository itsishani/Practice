import java.util.Scanner;

public class mat1 {
    public static int f(int base,int per){
    int fn = (base*per)/100;
    return fn;
}
    public static void print(int base, int bonus, int total){
        System.out.println("The base salary: "+base);
        System.out.println("The bonus: "+bonus);
        System.out.println("The total salary: "+total);
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Give the choice: ");
        int choice = sc.nextInt();
        switch(choice){
            case 1:
                int yr = sc.nextInt();
                if(yr>=5){print(60000,f(60000,25),60000+f(60000,25));}
                else{print(50000,f(50000,15),50000+f(50000,15));}
                break;
            case 2:
                int sk = sc.nextInt();
                print(45000*sk,f(45000*sk,12),45000*sk+f(45000*sk,12));
                break;
            case 3:
                int res = sc.nextInt();
                if(res>=100){print(35000,f(35000,10),35000+f(35000,10));}
                else{print(30000,f(30000,8),30000+f(30000,8));}
                break;
        }
        sc.close();
    }
}