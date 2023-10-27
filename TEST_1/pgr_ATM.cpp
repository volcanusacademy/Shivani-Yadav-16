// ATM program in cpp that includes cash deposit, withdraw mini statement function
#include <iostream>
#include <vector>
#include <iomanip>

class ATM {
private:
    double balance;
    std::vector<std::string> transactions;

public:
    ATM() : balance(0) {}

    void deposit(double amount) {
        balance += amount;
        transactions.push_back("Deposit: +" + std::to_string(amount));
    }

    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            transactions.push_back("Withdrawal: -" + std::to_string(amount));
            return true;
        } else {
            std::cout << "Insufficient balance." << std::endl;
            return false;
        }
    }

    void printMiniStatement() const {
        std::cout << "Mini Statement:" << std::endl;
        std::cout << std::setw(20) << std::left << "Transaction" << "Amount" << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        for (const auto &transaction : transactions) {
            std::cout << std::setw(20) << std::left << transaction << balance << std::
