import java.util.Scanner;

interface Employee{
    double calculateSalary();
    void displayInformation();
}

class RegularEmployee implements Employee {
    private String name;

    public RegularEmployee(String name) {
        this.name = name;
    }

    @Override
    public double calculateSalary() {
        // Implement salary calculation for RegularEmployee (e.g., fixed salary)
        return 50000.0; // Example fixed salary
    }

    @Override
    public void displayInformation() {
        System.out.println("Regular Employee Information:");
        System.out.println("Name: " + name);
        System.out.println("Salary: $" + calculateSalary());
    }
}

class Manager implements Employee {
    private String name;
    private int numSubordinates;

    public Manager(String name, int numSubordinates) {
        this.name = name;
        this.numSubordinates = numSubordinates;
    }

    @Override
    public double calculateSalary() {
        // Implement salary calculation for Manager (e.g., base salary + bonus based on subordinates)
        double baseSalary = 60000.0; // Example base salary
        double bonusPerSubordinate = 5000.0; // Example bonus per subordinate
        return baseSalary + (numSubordinates * bonusPerSubordinate);
    }

    @Override
    public void displayInformation() {
        System.out.println("Manager Information:");
        System.out.println("Name: " + name);
        System.out.println("Number of Subordinates: " + numSubordinates);
        System.out.println("Salary: $" + calculateSalary());
    }
}

public class mat5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the employee's name: ");
        String name = scanner.nextLine();

        System.out.print("Select employee type (1 for Regular Employee, 2 for Manager): ");
        int employeeType = scanner.nextInt();

        Employee employee;
        if (employeeType == 1) {
            employee = new RegularEmployee(name);
        } else if (employeeType == 2) {
            System.out.print("Enter the number of subordinates: ");
            int numSubordinates = scanner.nextInt();
            employee = new Manager(name, numSubordinates);
        } else {
            System.out.println("Invalid employee type selected.");
            scanner.close();
            return;
        }

        employee.displayInformation();

        scanner.close();
    }
}
