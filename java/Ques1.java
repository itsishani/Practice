import java.util.HashSet;

public class Ques1 {
     public String Ques1(String s) {
        int left = 1, right = s.length() - 1;
        String result = "";

        while (left <= right) {
            int mid = left + (right - left) / 2;
            String candidate = searchForDuplicate(s, mid);

            if (candidate != null) {
                result = candidate;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result;
    }

    private String searchForDuplicate(String s, int length) {
        long hash = 0;
        long mod = (long) Math.pow(2, 32); // To avoid integer overflow
        HashSet<Long> seen = new HashSet<>();
        
        for (int i = 0; i < length; i++) {
            hash = (hash * 26 + (s.charAt(i) - 'a')) % mod;
        }
        seen.add(hash);

        long base = 1;
        for (int i = 0; i < length; i++) {
            base = (base * 26) % mod;
        }

        for (int i = 1; i < s.length() - length + 1; i++) {
            hash = (hash * 26 + (s.charAt(i + length - 1) - 'a')) % mod;
            hash = (hash - (base * (s.charAt(i - 1) - 'a')) % mod + mod) % mod;

            if (seen.contains(hash)) {
                return s.substring(i, i + length);
            }

            seen.add(hash);
        }

        return null;
    }

    public static void main(String[] args) {
        Ques1 solution = new Ques1();
        String s = "banana";
        String result = solution.Ques1(s);
        System.out.println("Longest duplicated substring: " + result);
    }
}
