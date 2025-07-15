// import java.util.Scanner;
// public class prac1 {
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
//         System.out.println("Give the number: ");
//         int n = sc.nextInt();
//         int t=0;
//         while(n!=0){
//             t = t+ n%10;
//             n = n/10;
//         }
//         System.out.println(t);
//     sc.close();
//     } 
// }

import java.util.Scanner;
public class prac1{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the name: ");
        String emp_name = s.nextLine();
        System.out.print("Enter the department: ");
        String emp_dep = s.nextLine();
        System.out.println("Enter the salary: ");
        int emp_sal = s.nextInt();
        double tax;
        float tax_rate;
        switch (emp_sal){
            case 1000:
            tax_rate = (float)0.3;
            break;
            case 900:
            tax_rate = (float)0.2;
            break;
            case 800:
            tax_rate = (float)0.1;
            break;
            default:
            tax_rate = (float)0;
            break;
        }
        if(tax_rate>0){
            tax = (float)200.00;
        }
        else{
            tax = (float)100.00;
        }
        float price = (float) (emp_sal*tax_rate + tax);
        System.out.println("Employee name: "+emp_name);
        System.out.println("Employee department: "+emp_dep);
        System.out.println("Emplyee salary "+emp_sal);
        System.out.println("Tax applied: "+tax+" and the price: "+price);
        s.close();
    }
}