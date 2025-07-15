
// public class hello_world {
//     public static void main(String[] args) {
//         System.out.println("Hello, World!"); 
//     }
// }

import java.util.Scanner;

public class hello_world  
{  
public static void main(String args[])   
{  
    Scanner s = new Scanner(System.in);
int n1 = 225, n2 = 115, sum;  
sum = n1 + n2;  
int n = s.nextInt();
System.out.println(n);
System.out.println("The sum of numbers is: "+sum); 
s.close(); 
}  
}  