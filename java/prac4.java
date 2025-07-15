// import java.util.Scanner;
// public class prac4 {
//    public static void main(String[] args){
//     Scanner sc = new Scanner(System.in);
//     int r1,c1,r2,c2;
//     System.out.println("Give the no of columns and rows: ");
//     r1= sc.nextInt(); 
//     c1 = sc.nextInt();
//     System.out.println("Give the no of columns and rows: ");
//     r2= sc.nextInt(); 
//     c2 = sc.nextInt();
//     int[][] arr1 = new int[r1][c1] ;
        
//     for(int i=0;i<r1;i++){
//             for(int j=0;j<c1;j++){
//                 arr1[i][j] = sc.nextInt();
//             }
//         }
//     for(int i=0; i<r1 ; i++){
//             for(int j=0;j<c1;j++){
//                 System.out.print(arr1[i][j]+ " ");
//             }
//             System.out.println();
//         }

//     int[][] arr2 = new int[r2][c2] ;
        
//     for(int i=0;i<r2;i++){
//             for(int j=0;j<c2;j++){
//                 arr2[i][j] = sc.nextInt();
//             }
//         }
//     for(int i=0; i<r2 ; i++){
//             for(int j=0;j<c2;j++){
//                 System.out.print(arr2[i][j]+ " ");
//             }
//             System.out.println();
//         } 


//     //Addition of two matrix 
    
//     int[][] res = new int[r1][c2];
//     for(int i=0; i<r1 ; i++){
//             for(int j=0;j<c2;j++){
//                 res[i][j]  = arr1[i][j] + arr2[i][j];
//             }

//         } 

//     //multiplication
//     int[][] prod = new int[r1][c2];
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             int s = 0;
//             for(int k =0;k<c1;k++){
//                 s = arr1[i][k] * arr2[k][j];
//             }
//             prod[i][j] = s;
//         }
//     }
//     for(int i=0; i<r2 ; i++){
//             for(int j=0;j<c2;j++){
//                 System.out.print(res[i][j]+ " ");
//             }
//             System.out.println();
//         } 
//         for(int i=0; i<r2 ; i++){
//             for(int j=0;j<c2;j++){
//                 System.out.print(prod[i][j]+ " ");
//             }
//             System.out.println();
//         } 

//         sc.close();

//    }
   

// }


