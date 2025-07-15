import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class StringPermutation {

    public static List<String> generatePermutations(String input) {
        List<String> permutations = new ArrayList<>();
        generatePermutationsHelper(input.toCharArray(), 0, permutations);
        return permutations;
    }

    private static void generatePermutationsHelper(char[] chars, int currentIndex, List<String> permutations) {
        if (currentIndex == chars.length - 1) {
            permutations.add(new String(chars));
        } else {
            for (int i = currentIndex; i < chars.length; i++) {
                swap(chars, currentIndex, i);
                generatePermutationsHelper(chars, currentIndex + 1, permutations);
                swap(chars, currentIndex, i); // Backtrack
            }
        }
    }

    private static void swap(char[] chars, int i, int j) {
        char temp = chars[i];
        chars[i] = chars[j];
        chars[j] = temp;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String inputString = scanner.nextLine();
        scanner.close();

        List<String> permutations = generatePermutations(inputString);

        System.out.println("Permutations of " + inputString + ":");
        for (String permutation : permutations) {
            System.out.println(permutation);
        }
    }

}