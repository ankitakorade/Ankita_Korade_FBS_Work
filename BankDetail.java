package casestudy;
import java.util.Scanner;

abstract class Account
{
    String name;
    String login;
    int accNumber;
    double balance;

    Account(String name, String login, int accNumber, double balance) 
    {
        this.name = name;
        this.login = login;
        this.accNumber = accNumber;
        this.balance = balance;
    }

    boolean checkLogin(String inputLogin) 
    {
        return this.login.equals(inputLogin);
    }

    void deposit(double amount) 
    {
        balance += amount;
        System.out.println(amount + " deposited. New balance: " + balance);
    }

    abstract void withdraw(double amount);  

    abstract void calculateInterest();  

    void displayBalance()
    {
        System.out.println("Balance for account " + accNumber + ": " + balance);
    }

    abstract String getAccountType();

    
    boolean isActive() 
    {
        return true;
    }
}


class Savings extends Account
{
    final double minBalance = 10000;

    Savings(String name, String login, int accNumber, double balance)
    {
        super(name, login, accNumber, balance);
    }

    @Override
    void withdraw(double amount) {
        if (balance - amount >= minBalance) {
            balance -= amount;
            System.out.println(amount + " withdrawn. New balance: " + balance);
        } else {
            System.out.println("Withdrawal denied! Minimum balance " + minBalance + " must be maintained.");
        }
    }

    @Override
    void calculateInterest() {
        double interest = balance * 0.03;
        balance=balance+interest;
        System.out.println("Interest added: " + interest + ". New balance: " + balance);
    }

    @Override
    String getAccountType() 
    {
        return "Savings";
    }
}

class Salary extends Savings
{
    int monthsNoTransaction = 0;
    boolean isFrozen = false;

    Salary(String name, String login, int accNumber, double balance)
    {
        super(name, login, accNumber, balance);
    }

    @Override
    void deposit(double amount) 
    {
        if (isFrozen) 
        {
            System.out.println("Account is frozen due to inactivity!");
           
        }
        super.deposit(amount);
        monthsNoTransaction = 0;
    }

    @Override
    void withdraw(double amount) 
    {
        if (isFrozen) 
        {
            System.out.println("Account is frozen due to inactivity!");
          
        }
        super.withdraw(amount);
        monthsNoTransaction = 0;
    }

    void nextMonth()
    {
        monthsNoTransaction++;
        if (monthsNoTransaction >= 2) 
        {
            isFrozen = true;
            System.out.println("Account " + accNumber + " is frozen due to no transactions for 2 months.");
        }
    }

    @Override
    String getAccountType()
    {
        return "Salary";
    }

    @Override
    boolean isActive()
    {
        return !isFrozen;
    }
}

class Current extends Account 
{
    double overdraftLimit;

    Current(String name, String login, int accNumber, double balance, double overdraftLimit) 
    {
        super(name, login, accNumber, balance);
        this.overdraftLimit = overdraftLimit;
    }

    @Override
    void withdraw(double amount)
    {
        if (balance - amount >= -overdraftLimit)
        {
            balance=balance-amount;
            System.out.println(amount + " withdrawn. New balance: " + balance);
        } 
        else 
        {
            System.out.println("Overdraft limit exceeded!");
        }
    }

    @Override
    void calculateInterest()
    {
        System.out.println("No interest calculated for Current Account.");
    }

    @Override
    String getAccountType()
    {
        return "Current";
    }
}

class Loan extends Account
{
    Loan(String name, String login, int accNumber, double loanAmount) 
    {
        super(name, login, accNumber, -loanAmount);
    }

    @Override
    void deposit(double amount) 
    {
        balance=balance+amount;
        System.out.println(amount + " repaid on loan. Remaining loan balance: " + (-balance));
    }

    @Override
    void withdraw(double amount)
    {
        System.out.println("Withdrawals not allowed from Loan account.");
    }

    @Override
    void calculateInterest()
    {
        if (balance < 0)
        {
            double interest = -balance * 0.08; // 
            balance -= interest;
            System.out.println("Loan interest added: " + interest + ". Remaining loan balance: " + (-balance));
        }
    }

    @Override
    String getAccountType() 
    {
        return "Loan";
    }
}


public class BankDetail {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        Account[] accounts = new Account[4];
        accounts[0] = new Savings("Ravi", "ravi123", 1001, 15000);
        accounts[1] = new Salary("Priya", "priya456", 1002, 10000);
        accounts[2] = new Loan("Sneha", "sneha789", 1004, 100000);
        accounts[3] = new Current("Kiran", "kiran321", 1005, 5000, 2000);

        System.out.print("Enter login: ");
        String inputLogin = scanner.nextLine();

        boolean flag = false;

        for (int i = 0; i < accounts.length; i++)
        {
            Account account = accounts[i];
            if (account.checkLogin(inputLogin))
            {
                flag = true;
                System.out.println("Welcome, " + account.name + " Your account type is " + account.getAccountType());

                while (true) 
                {
                    System.out.println("\nEnter your choice");
                    System.out.println("1. Deposit");
                    System.out.println("2. Withdraw");
                    System.out.println("3. Calculate Interest");
                    System.out.println("4. Display Balance");
                    System.out.println("5. Exit");

                    int choice = scanner.nextInt();

                    if (choice == 1) 
                    {
                        System.out.print("Enter deposit amount: ");
                        double amount = scanner.nextDouble();
                        account.deposit(amount);
                    } 
                    else if (choice == 2) 
                    {
                        System.out.print("Enter withdrawal amount: ");
                        double amount = scanner.nextDouble();
                        account.withdraw(amount);
                    } 
                    else if (choice == 3) 
                    {
                        account.calculateInterest();
                    } 
                    else if (choice == 4)
                    {
                        account.displayBalance();
                    } 
                   else {
                        System.out.println("Invalid choice. Try again.");
                    }
                }
            }
        }

        if (!flag) 
        {
            System.out.println("Login failed! Account not found.");
        }
        printEndOfDayReport(accounts);
    }

    public static void printEndOfDayReport(Account[] accounts) 
    {
        System.out.println("\n....End of Day Report...");
  

        for (int i = 0; i < accounts.length; i = i + 1) 
        {
            if (accounts[i].isActive()) 
            {
                System.out.println("Account Number: " + accounts[i].accNumber
                        + ", Name: " + accounts[i].name
                        + ", Type: " + accounts[i].getAccountType()
                        + ", Balance: " + accounts[i].balance);
            }
        }
    }
}
