import java.util.Scanner;
public class prac2 {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int[] g = new int[5];
        for(int i=0;i<g.length;i++){
            g[i]= s.nextInt();
        }
        int t = s.nextInt();
        for(int i=0;i<5;i++){
            if(t==g[i]){
                System.out.println("The number is found at: "+ i);
            }
        }
        for(int i=0;i<g.length;i++){
            System.out.println("The element is: "+g[i]);
        }
        
        s.close();
    }
    
}
