#include <iostream>
#include <iomanip>
using namespace std;


// Print function to display the year, balance, and interest earned
void printDetails(int year, double balance, double interest) {
    // Use 2 decimal places for currency formatting
    cout << fixed << setprecision(2);
    // Print the year, balance, and interest earned
    cout << "Year: " << year << ", Balance: $" << balance << ", Interest Earned: $" << interest << endl;
}

// Function to calculate the balance with monthly deposits
double balanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears) {
    double balance = initialInvestment; // Start with the initial investment
    double monthlyInterestRate = (interestRate / 100.0) / 12.0; // Calculate monthly interest rate

    for (int year = 1; year <= numberOfYears; ++year) {
        double yearInterest = 0.0;

        for (int month = 1; month <= 12; ++month) {
            double monthlyInterest = balance * monthlyInterestRate; // Calculate interest on the current balance
            yearInterest += monthlyInterest; // Accumulate yearly interest
            balance += monthlyInterest; // Add the interest to the balance
            balance += monthlyDeposit; // Add the monthly deposit AFTER interest is calculated
        }

        // Call printDetails to display the year, balance, and interest earned
        printDetails(year, balance, yearInterest);
    }

    return balance; // Return the final year-end balance
}

// Function to calculate the balance without monthly deposits
double calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears) {
    double balance = initialInvestment; // Start with the initial investment
    double monthlyInterestRate = (interestRate / 100.0) / 12.0; // Calculate monthly interest rate

    for (int year = 1; year <= numberOfYears; ++year) {
        double yearInterest = 0.0;

        for (int month = 1; month <= 12; ++month) {
            double monthlyInterest = balance * monthlyInterestRate; // Calculate interest for the month
            yearInterest += monthlyInterest; // Accumulate yearly interest
            balance += monthlyInterest; // Add monthly interest to the balance
        }

        // Call printDetails to display the year, balance, and interest earned
        printDetails(year, balance, yearInterest);
    }

    return balance; // Return the final year-end balance
}

// Main function to execute the program
int main() {
    double initialInvestment, monthlyDeposit, annualInterest;
    int numberOfYears;

    // Input prompt
    cout << "**********************************\n";
    cout << "********** Data Input ************\n";
    cout << "Initial Investment Amount: $";
    cin >> initialInvestment;
    cout << "Monthly Deposit: $";
    cin >> monthlyDeposit;
    cout << "Annual Interest: %";
    cin >> annualInterest;
    cout << "Number of Years: ";
    cin >> numberOfYears;
    cout << "Press any key to continue...\n";
    cin.ignore();
    cin.get();

    // Display report without monthly deposits
    cout << "\nBalance and Interest Without Monthly Deposits\n";
    cout << "=================================================\n";
    cout << "Year\tYear End Balance\tYear End Earned Interest\n";
    cout << "-------------------------------------------------\n";
    calculateBalanceWithoutMonthlyDeposit(initialInvestment, annualInterest, numberOfYears);

    // Display report with monthly deposits
    cout << "\nBalance and Interest With Monthly Deposits\n";
    cout << "=================================================\n";
    cout << "Year\tYear End Balance\tYear End Earned Interest\n";
    cout << "-------------------------------------------------\n";
    balanceWithMonthlyDeposit(initialInvestment, monthlyDeposit, annualInterest, numberOfYears);

    return 0;
}
