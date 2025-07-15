import java.util.Scanner;

class BankAccount{
    private int Account_Number;
    private String Account_Holder_Name; 
    private double Balance;

    private BankAccount(int Account_Number){
        this.Account_Number = Account_Number;
        this.Balance = 0.0;
    }

    public void deposit(double amount){
        Balance += amount;
    }
    public void withdraw(double amount){
        if(Balance>=amount){
            Balance -= amount;
        }
        else{
            System.out.println("Insufficient balance.");
        }
    }
    public double getBalance(){
        return Balance;
    }
}
public class prac6{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BankAccount[] accounts = new BankAccount[3];
        int accountCount = 0;
        while(true){
            System.out.println("Banking Application Menu:");
            System.out.println("1. Create a new bank account");
            System.out.println("2. Deposit money into an existing account");
            System.out.println("3. Withdraw money from an existing account");
            System.out.println("4. Check the balance of an account");
            System.out.println("5. Exit");


            System.out.println("Enter your choice: ");
            int choice = sc.nextInt();

            switch(choice){
                case 1:
                if(accountCount < accounts.length){
                    System.out.print("Enter account number: ");
                    int accountNumber = sc.nextInt();
                        //accounts[accountCount] = new BankAccount(accountNumber);
                        accountCount++;
                        System.out.println("Account created successfully.");
                }
            }
        }
    }
}