#include <iostream>
#include <limits> // for input validation

struct BankAccount {
    int id;
    double balance;
};

// Function prototypes
void showBalance(const BankAccount& acc);
void deposit(BankAccount& acc);
void withdraw(BankAccount& acc);
void clearInput(); // utility for bad input

int main() {
    BankAccount acc{};
    
    std::cout << "=== Simple Bank Account System ===\n";

    // Setup account
    std::cout << "Enter Account ID: ";
    std::cin >> acc.id;
    clearInput();

    std::cout << "Enter Starting Balance: ";
    std::cin >> acc.balance;
    clearInput();

    // Menu loop
    int choice;
    do {
        std::cout << "\n-------------------------\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";
        std::cout << "Choose an option: ";
        std::cin >> choice;
        clearInput();

        switch (choice) {
            case 1:
                showBalance(acc);
                break;
            case 2:
                deposit(acc);
                break;
            case 3:
                withdraw(acc);
                break;
            case 4:
                std::cout << "Exiting... Goodbye!\n";
                break;
            default:
                std::cout << "Invalid option. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

// --- Function Definitions ---

void showBalance(const BankAccount& acc) {
    std::cout << "Account ID: " << acc.id << "\n";
    std::cout << "Current Balance: $" << acc.balance << "\n";
}

void deposit(BankAccount& acc) {
    double amount;
    std::cout << "Enter amount to deposit: $";
    std::cin >> amount;
    clearInput();

    if (amount > 0) {
        acc.balance += amount;
        std::cout << "Deposited $" << amount << ". New balance: $" << acc.balance << "\n";
    } else {
        std::cout << "Deposit must be positive.\n";
    }
}

void withdraw(BankAccount& acc) {
    double amount;
    std::cout << "Enter amount to withdraw: $";
    std::cin >> amount;
    clearInput();

    if (amount <= 0) {
        std::cout << "Invalid withdrawal amount.\n";
    } else if (acc.balance >= amount) {
        acc.balance -= amount;
        std::cout << "Withdrew $" << amount << ". Remaining balance: $" << acc.balance << "\n";
    } else {
        std::cout << "Insufficient funds! Current balance: $" << acc.balance << "\n";
    }
}

// Clears invalid input if user types letters instead of numbers
void clearInput() {
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}