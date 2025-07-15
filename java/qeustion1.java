import java.util.HashMap;
import java.util.Map;

interface BankOperations {
    void depositMoney(double amount);
    void withdrawMoney(String accountNumber, double amount) throws InsufficientFundsException, InvalidAccountException;
    double checkAccountBalance();
}

class OnlineBank implements BankOperations {
    private Map<String, Double> accounts = new HashMap<>();

    @Override
    public void depositMoney(double amount) {
        // Implementation for depositing money
    }

    @Override
    public void withdrawMoney(String accountNumber, double amount) throws InsufficientFundsException, InvalidAccountException {
        if (!accounts.containsKey(accountNumber)) {
            throw new InvalidAccountException("Invalid account number: " + accountNumber);
        }

        double balance = accounts.get(accountNumber);
        if (amount > balance) {
            throw new InsufficientFundsException("Insufficient funds in account: " + accountNumber);
        }

        // Implementation for withdrawing money
    }

    @Override
    public double checkAccountBalance() {
        // Implementation for checking account balance
        return 0.0;
    }

    public void addAccount(String accountNumber, double initialBalance) {
        accounts.put(accountNumber, initialBalance);
    }
}

class InvalidAccountException extends Exception {
    public InvalidAccountException(String message) {
        super(message);
    }
}

class InsufficientFundsException extends Exception {
    public InsufficientFundsException(String message) {
        super(message);
    }
}

public class qeustion1 {
    public static void main(String[] args) {
        OnlineBank bank = new OnlineBank();
        bank.addAccount("12345", 1000.0);

        try {
            bank.depositMoney(100.0);
            bank.withdrawMoney("12345", 500.0);
            System.out.println(bank.checkAccountBalance());
        } catch (InsufficientFundsException | InvalidAccountException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}

