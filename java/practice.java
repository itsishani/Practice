import java.util.Arrays;
class job implements Comparable <job> {
    public String name;
    private int salary;

    public job(String name, int salary){
        this.name = name;
        this.salary = salary;
    }

    public String getName() {
        return name;
    }
 
    public int getsalary() {
        return salary;
    }

    public String toString() {
        return "{" + "name='" + name + '\'' +
                    ", Salary=" + salary + '}';
    }
    public int compareTo(job o){
        if (this.salary != o.getsalary()) {
            return this.salary - o.getsalary();
        }
        return 0;
    }    
    public static void main(String[] args){
        job[] j = { new job("Rick", 1), new job("Sam", 20),
                    new job("Adi", 5), new job("Ben", 10) };


        System.out.println("Original Array of Employee objects:");
        System.out.println(Arrays.toString(j));
        //sort array on empId
        Arrays.sort(j);
        //display sorted array
        System.out.println("\nSorted Array of Employee objects:");
        System.out.println(Arrays.toString(j));            
    } 
}


