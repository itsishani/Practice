import java.util.Scanner;

public class Ques2 {
    public int longestPalindromeSubseq(String s) {
        int n = s.length();
        
        int[][] dp = new int[n][n];
        for (int i = 0; i < n; i++) {
            dp[i][i] = 1;
        }
        for (int len = 2; len <= n; len++) {
            for (int i = 0; i < n - len + 1; i++) {
                int j = i + len - 1;
                
                if (s.charAt(i) == s.charAt(j)) {
                    dp[i][j] = 2 + dp[i + 1][j - 1];
                } else {
                    dp[i][j] = Math.max(dp[i + 1][j], dp[i][j - 1]);
                }
            }
        }
        
        return dp[0][n - 1];
    }

    public static void main(String[] args) {
        Ques2 solution = new Ques2();
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int result = solution.longestPalindromeSubseq(s);
        System.out.println("Longest palindromic subsequence length: " + result);
        sc.close();
    }
}
