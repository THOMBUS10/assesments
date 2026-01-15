#include <iostream>
#include <string>
using namespace std;

void clearConsole() {
    cout << "\033[2J\033[1;1H"; // Clear the console
}

//declare functions for each utility here
void calculator();
void temperatureConverter();
void currencyConverter();


int main() {
    clearConsole();
    cout << "Welcome to the Utility App!\n"; //welcomes the user
    cout << "-----------------------------------\n";
    cout << "What would you like to use!\n";
    cout << "-----------------------------------\n";
    cout << "Please select a option using the numbers provided below:\n";
    cout << "-----------------------------------\n";
    cout << "1. Calculator\n";
    cout << "2. Temperature Converter\n";
    cout << "3. Currency Converter\n";
    cout << "4. Exit\n";
    cout << "-----------------------------------\n";
    cout << "Enter your choice (1-4): "; //collects user choice

    int choice;
    cin >> choice;

    if (choice == 1) {
        // Call calculator function
        cout << "Calculator selected.\n";
        calculator();
    } else if (choice == 2) {
        // Call temperature converter function
        cout << "Temperature Converter selected.\n";
    } else if (choice == 3) {
        // Call currency converter function
        cout << "Currency Converter selected.\n";
    } else if (choice == 4) {
        // Exit the application
        cout << "Exiting the application. Goodbye!\n";
        return 0;
    } else {
        // Handle invalid input
        cout << "Invalid choice! Please select a valid option.\n";
    }
    return 0;
}





//creating the functions for each utility

void calculator() {

    int num1, num2, total;
    cout << "---------------------" << endl;
    cout << "Welcome to the calculator" << endl;
    cout << "---------------------" << endl;
    
    
    cout << "Please enter a number" << endl;
    cout << "---------------------" << endl;
    // collcet number 1
    cin >> num1;
    //collect number 2
    cout << "Please enter a number" << endl;
    cout << "---------------------" << endl;
    cin >> num2;
    // collect operand
    cout << "What calculation do you want to perform" << endl;
    cout << "1: Addition \n2: Subtraction\n3: Division\n4: Multiplication" << endl;
    
    int operand;
    cin >> operand;
    
    if(operand == 1){
        total = num1 + num2;
    }else if(operand == 2){
        total = num1 - num2;
    }else if(operand == 3){
        total = num1 / num2;
    }else if(operand == 4){
        total = num1 * num2;
    }
    
    cout << "Result" << endl;
    cout << "---------------------" << endl;
    cout << total << endl;
 
} 
