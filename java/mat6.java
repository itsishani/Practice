import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
class MaxUniqueSubstring {
    public static int maxLength(List<String> arr) {
        return findMaxLength(arr, 0, "");
    }
    private static int findMaxLength(List<String> arr, int index, String current) {
        if (index == arr.size()) {
            if (hasUniqueCharacters(current)) {
                return current.length();
            }
            return 0;
        }
        int lengthWithoutCurrent = findMaxLength(arr, index + 1, current);
        int lengthWithCurrent = findMaxLength(arr, index + 1, current + arr.get(index));
        return Math.max(lengthWithoutCurrent, lengthWithCurrent);
    }
    private static boolean hasUniqueCharacters(String str) {
        int[] charCount = new int[26]; // Assuming lowercase English letters
        for (char c : str.toCharArray()) {
            if (charCount[c - 'a'] > 0) {
                return false;
            }
            charCount[c - 'a']++;
        }
        return true;
    }
}
public class mat6{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<String> arr = new ArrayList<>();

        System.out.print("Enter the number of strings in the array: ");
        int n = scanner.nextInt();
        scanner.nextLine(); // Consume the newline

        System.out.println("Enter the strings one by one:");
        for (int i = 0; i < n; i++) {
            String str = scanner.nextLine();
            arr.add(str);
        }
        MaxUniqueSubstring u = new MaxUniqueSubstring();
        int result = u.maxLength(arr);
        System.out.println("Maximum possible length of a substring with unique characters: " + result);

        scanner.close();
    }
}
