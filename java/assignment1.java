// import java.util.Scanner;
// class employee{
//     Scanner sc= new Scanner(System.in); 
//     int Employee_ID;
//     String Name;
//     int year,month,date;
//     int Phone;

//     public void Set_EmployeeInfo(){
        
//         System.out.println("Enter the emplyee ID:");
//         this.Employee_ID =sc.nextInt();
//     }
//     public void set_Profile(){
//     System.out.println("Enter the Name:");
//      this.Name=sc.next(); 
//      System.out.println("Enter the year of birth:");
//      this.year=sc.nextInt(); 
//      System.out.println("Enter the month of birth:");
//      this.month=sc.nextInt(); 
//      System.out.println("Enter the date of birth:"); 
//      this.date=sc.nextInt(); 
//      System.out.println("Enter the phone number:");
//     this.Phone =sc.nextInt();

// }
// public String getName() {
//         return Name;
//     }

//     public int Sort_Employee(employee otherEmployee){
//          return this.Name.compareTo(otherEmployee.getName());
//     }
    
// }
// public class assignment1 {
//     public static void main(String args[]){
//         employee[] java = new employee[3];
//         for(int i=0;i<java.length;i++){
//             java[i] = new employee();
//         }
//         for(int i=0;i<java.length; i++){
//             java[i].Set_EmployeeInfo();
//             java[i].set_Profile();
//         }
        
//      for (int i=0;i<java.length; i++) {
//         java[i].set_Profile();
//         java[i].Set_EmployeeInfo();

//         System.out.println();
//     }
//     }    
    
// }
    


import java.util.Arrays;

class Employee implements Comparable<Employee> {
    private int employeeID;
    private String name;
    private String dateOfBirth;
    private String phone;

    // Constructor to initialize Employee object
    public Employee(int employeeID, String name, String dateOfBirth, String phone) {
        this.employeeID = employeeID;
        this.name = name;
        this.dateOfBirth = dateOfBirth;
        this.phone = phone;
    }

    // Getter methods for accessing Employee details
    public int getEmployeeID() {
        return employeeID;
    }

    public String getName() {
        return name;
    }

    public String getDateOfBirth() {
        return dateOfBirth;
    }

    public String getPhone() {
        return phone;
    }

    // Implement the compareTo method for sorting by name
    @Override
    public int compareTo(Employee otherEmployee) {
        return this.name.compareTo(otherEmployee.getName());
    }

    // Method to set Employee information
    public void setEmployeeInfo(int employeeID, String name, String dateOfBirth, String phone) {
        this.employeeID = employeeID;
        this.name = name;
        this.dateOfBirth = dateOfBirth;
        this.phone = phone;
    }

    // Method to view Employee profile
    public void viewProfile() {
        System.out.println("Employee ID: " + employeeID);
        System.out.println("Name: " + name);
        System.out.println("Date of Birth: " + dateOfBirth);
        System.out.println("Phone: " + phone);
    }
}

public class assignment1 {
    public static void main(String[] args) {
        Employee[] employees = new Employee[5];

        // Populate Employee objects
        employees[0] = new Employee(1, "Josan Sarma", "1990-05-15", "555-1234");
        employees[1] = new Employee(2, "Aditi Joshi", "1985-09-20", "555-5678");
        employees[2] = new Employee(3, "Baburao Atalvale", "1992-03-10", "555-7890");
        employees[3] = new Employee(4, "Isha Daud", "1988-07-25", "555-4321");
        employees[4] = new Employee(5, "Champak Gada", "1995-01-05", "555-8765");

        // Sort employees by name in ascending order
        Arrays.sort(employees);

        // Display Employee details
        for (Employee employee : employees) {
            employee.viewProfile();
            System.out.println();
        }
    }
}





