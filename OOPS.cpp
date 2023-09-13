#include <iostream>

class TaxCalculator {
private:
    double income;
    double section80C_deduction;
    double section80D_deduction;
    double hra_deduction;

public:
    TaxCalculator(double inc, double s80c, double s80d, double hra)
        : income(inc), section80C_deduction(s80c), section80D_deduction(s80d), hra_deduction(hra) {}

    double calculateTax() {
        // Calculate taxable income after deductions
        double taxableIncome = income - section80C_deduction - section80D_deduction - hra_deduction;

        // Calculate income tax based on income slabs
        double tax = 0;
        if (taxableIncome <= 250000) {
            tax = 0;
        } else if (taxableIncome <= 500000) {
            tax = (taxableIncome - 250000) * 0.05;
        } else if (taxableIncome <= 1000000) {
            tax = 250000 * 0.05 + (taxableIncome - 500000) * 0.2;
        } else {
            tax = 250000 * 0.05 + 500000 * 0.2 + (taxableIncome - 1000000) * 0.3;
        }
        void displayTaxDetails() {
        std::cout << "Income Tax Calculation Details:" << std::endl;
        std::cout << "-------------------------------" << std::endl;
        std::cout << "Income: " << income << " INR" << std::endl;
        std::cout << "Section 80C Deduction: " << section80C_deduction << " INR" << std::endl;
        std::cout << "Section 80D Deduction: " << section80D_deduction << " INR" << std::endl;
        std::cout << "HRA Deduction: " << hra_deduction << " INR" << std::endl;
        std::cout << "Taxable Income after Deductions: " << income - calculateTax() << " INR" << std::endl;
        std::cout << "Income Tax: " << calculateTax() << " INR" << std::endl;
    }
};

int main() {
    double income, section80C_deduction, section80D_deduction, hra_deduction;

    std::cout << "Enter your annual income in INR: ";
    std::cin >> income;

    std::cout << "Enter Section 80C deductions in INR: ";
    std::cin >> section80C_deduction;

    std::cout << "Enter Section 80D deductions in INR: ";
    std::cin >> section80D_deduction;

    std::cout << "Enter HRA deductions in INR: ";
    std::cin >> hra_deduction;


        return tax;
    }
TaxCalculator calculator(income, section80C_deduction, section80D_deduction, hra_deduction);

    calculator.displayTaxDetails();

    return 0;
