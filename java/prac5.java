// import java.util.Scanner;

// public class prac5 {
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         String one = new String("44");

//         String three = new String("55");
//         three = three.concat(one);
//         Integer two =  Integer.valueOf(one);
//         System.out.println(two);
//         System.out.println(three);
        
//         System.out.println("Give the String: ");
//         String s = sc.nextLine();
//         StringBuilder res = new StringBuilder();
//         int l = s.length();
//         for(int i =0;i<l;i++){
//             char a = s.charAt(i);
//             if(Character.isUpperCase(a)){
//                 a = Character.toLowerCase(a);
//                 res.append(a);
//             }
//             else if(Character.isLowerCase(a)){
//                 a = Character.toUpperCase(a);
//                 res.append(a);
//             }
//             else if(Character.isWhitespace(a)){
//                 a = '*';
//                 res.append(a);
//             }
//         }
//         System.out.println(res.toString());
//         sc.close();

//     }

// }

public class prac5{
    public static void main(String[] args){

        int myInt = Integer.parseInt("pants");
        //System.out.println(myInt);
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Give the string: ");
        // String s = sc.nextLine();
        // //int c=0;
        // StringBuilder res = new StringBuilder();
        // for(int i=0;i<s.length();i++){
        //     char a = s.charAt(i);
        //     // if(a !='a' || a!='e'||a!='i'||a!='o'||a!='u'){
        //     //     //System.out.println(a);
        //     //     res.append(a);
        //     //     c++;
        //     // }
        //     if(!isVowel(a)){
        //         res.append(a);
        //     }
        // }
        // sc.close();
        // // System.out.println(c);
        // System.out.println(res.toString());
    }
    public static boolean isVowel(char a){
        return "AEIOUaeiou".indexOf(a)!=-1;    }
}