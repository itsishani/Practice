import java.util.Scanner;
//basic array
// public class prac3 {
//     public static void main(String[] args){
//     Scanner sc = new Scanner(System.in);
//     int n = sc.nextInt();
//     int[] account = new int[n];
//     for(int j=0;j<n;j++){
//         account[j] = sc.nextInt(); 
//     }
//     for(int i=0; i<account.length; i++){
//         System.out.println(account[i]);   
//     }
//     sc.close();
// }
// }




public class prac3{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int r,c;
        System.out.println("Give the no of columns and rows: ");
        r= sc.nextInt();
        c = sc.nextInt();
        int[][] arr = new int[r][c] ;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j] = sc.nextInt();
            }
        }
        for(int i=0; i<r ; i++){
            for(int j=0;j<c;j++){
                System.out.print(arr[i][j]+ " ");
            }
            System.out.println();
        }
        int sum1 = 0, sum2 = 0;
        for(int i=0;i<r;i++){
            int row =0;
            for(int j=0;j<c;j++){
                row += arr[i][j];
                if(i==j){
                    sum1 += arr[i][j];
                }

                if(i+j == r-1){
                    sum2+= arr[i][j];
                }
            }
            System.out.print(row+ " ");
        }
         System.out.print("\n");
        for(int j=0;j<c;j++){
            int col = 0;
            for(int i=0;i<r;i++){
                col += arr[i][j];
            }
           
            System.out.print(col + " ");
        }

        System.out.println("Sum of the diagonals is: "+ sum1 + " "+ sum2);


        sc.close();
    }
}

