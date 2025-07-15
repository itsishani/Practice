import java.util.Scanner;

class ZigZagConversion{
    public static String convert(String s, int numRows){
        if (numRows == 1 || numRows >= s.length()){
            return s;
        }
        StringBuilder[] rows = new StringBuilder[numRows];
        for (int i = 0; i < numRows; i++) {
            rows[i] = new StringBuilder();
        }
        int currentRow = 0;
        boolean down = false;
        for (char c : s.toCharArray()){
            rows[currentRow].append(c);
            if (currentRow == 0 || currentRow == numRows - 1)
            {
                down = !down;
            }
            currentRow += down ? 1 : -1;
        }
        StringBuilder result = new StringBuilder();
        for (StringBuilder row : rows) {
            result.append(row);
        }
        return result.toString();
    }
}


public class mat3{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the string: ");
        String inputString = scanner.nextLine();
        
        System.out.print("Enter the number of rows: ");
        int numRows = scanner.nextInt();
        ZigZagConversion one = new ZigZagConversion();
        String zigzag = one.convert(inputString, numRows);
        System.out.println("Zigzag Conversion: " + zigzag);
        
        scanner.close();
    }
}
