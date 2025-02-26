//possible list of libraries needed (Might Develop Custom)
#include <iostream>
#include <atomic>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

//Meant to memorize transactions
class Transaction
{
public:
    string type;
    double amount;

    Transaction(string t, double a);
};

// Class meant to store account details for User Authentication and later program memorization
class Account
{
public:

    // These datatypes are for accounts.
    int accountID;
    double balance;
    vector <Transaction> history;
    string password;

    Account(int accID, double bal, string ps);

    //function for Checkings
    void checking(double amount)
    {

    }

    //function for Savings
    void savings(double amount)
    {
        
    }

    // This function is for depositing
    void deposit(double amount)
    {
        //Operator Overloading here 
    }

    // Withdraw Function
    void withdraw(double amount)
    {
        //Operator Overloading here

    }

    //Meant to hold Transaction Histories here.
    void transHistory()
    {
    }

    //Meant to Save Account
    void saveAccount()
    {
        //Save File for later use
        //use ofstreaming
    }

    // To load for later when signing in.
    bool loadAccount(int accID)
    {
        //Use ifstreaming 
    }
};

//Handles the actual Login Process 
Account login()
{

}

// Main Menu Class to help give a GUI to the user
class Menu
{
public:
    //Main GUI (Temporary GUI for example)
    void showMenu()
    {
        cout << "1: User Management " << endl;
        cout << "2: Transaction History " << endl;
        cout << "3: Exit " << endl;
    }

    //Handles Show Menu Choice
    void handleMenu(Account& user)
    {
    }

private:
    //Handles Deposits and Withdraw choice (Temporary Example)
    void manageTransactions(Account& user)
    {
        int userChoice;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "Please make your selection: ";
        cin >> userChoice;
    }
};

    int main()
    {
        //The program starts by calling Login then calls for Menu to handle information after user is identified

    }
