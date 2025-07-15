
import java.util.Scanner;

public class Ques3{
    public static int count(String st){
        int cnt = 0;
        if (st.length()%2!=0){
            int n=(st.length()-1)/2;
            for (int j=0;j<=n;j++){
                if (st.charAt(n+j)!=st.charAt(n-j)){
                    cnt = cnt+1;
                }
            }
            }
        return cnt;
    }

    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);

        int[][] arr = new int[5][3];
        String st = sc.nextLine();

        for (int i=0;i<5;i++){
            for(int k=0;k<3;k++){
            arr[i][k] = sc.nextInt();
        }}

       int c = count(st);
        for(int i=0;i<5;i++){
            if (c == arr[i][2]){
            System.out.println("False");
        }
        else{
            System.out.println("True");
        }
        }
        sc.close();

    }
    
}