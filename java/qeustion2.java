import java.util.HashMap;
import java.util.Map;

public class qeustion2 {
    public static void main(String[] args) {
        Map<String, Map<String, Integer>> studentData = new HashMap<>();

        // Adding student information with subjects and grades
        Map<String, Integer> johnData = new HashMap<>();
        johnData.put("Math", 85);
        johnData.put("Science", 90);

        Map<String, Integer> aliceData = new HashMap<>();
        aliceData.put("Math", 92);
        aliceData.put("Science", 88);

        Map<String, Integer> bobData = new HashMap<>();
        bobData.put("Math", 78);
        bobData.put("Science", 82);

        studentData.put("John", johnData);
        studentData.put("Alice", aliceData);
        studentData.put("Bob", bobData);

        // Retrieving student information including subjects and grades
        System.out.println("Student data:");
        for (Map.Entry<String, Map<String, Integer>> entry : studentData.entrySet()) {
            System.out.println(entry.getKey() + ": " + entry.getValue());
        }
        System.out.println("Average grades for each student:");
        for (Map.Entry<String, Map<String, Integer>> entry : studentData.entrySet()) {
            String studentName = entry.getKey();
            Map<String, Integer> subjectsAndGrades = entry.getValue();
            int total = 0;
            int count = 0;
            for (int grade : subjectsAndGrades.values()) {
                total += grade;
                count++;
            }
            double average = (double) total / count;
            System.out.println(studentName + ": " + average);
    }}
}
