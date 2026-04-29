// < Bank System > //

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <cstdlib>

using namespace std;

// < User Account System > //
class user {
    public:
        double balance;
        double creditscore;
        string password;
        string username;
        string userinput;
};

int mainselectorinpt;

double paycheck = 19.99;

void wait15() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    
}

void wait1() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

void wait2() {
    std::this_thread::sleep_for(std::chrono::seconds(2));
}

void clear() {
    system("clear");
    system("cls");
}


user usr;

// < Main INT > //

int main() {
    cout << "Hello, user.\n";
    cout << "Welcome to the international < HAJEAIN BANKING SERVICES >\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "Before you start, please enter in a username and password!\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "\n";
    cout << "Username: ";
    cin >> usr.username;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    // < MAJOR FIX!! FIX OPERATING SYSTEMS!!! > //
    clear();
    wait1();
    cout << "Welcome, " << usr.username << ".\n";
    wait1();
    do {
        cout << "Please create a password. KEEP THIS PRIVATE!\n";
        wait2();
        cout << "Password: ";
        cin >> usr.password;
        clear();
        cout << "Are you sure you want your password to be: " << usr.password << "?\n";
        cout << "\n";
        cout << "[Y] for yes, [N] for no.\n";
        cin >> usr.userinput;
    } while (usr.userinput == "N" || usr.userinput == "n");
    
    clear();
    wait2();
    usr.userinput = " ";

    cout << "[===================================================]\n";
    cout << "|           < Hajeain Banking Services >            |\n";
    cout << "[---------------------------------------------------]\n";
    cout << "\n";
    cout << "\n";
    cout << "Welcome, " << usr.username << "!\n";
    cout << "\n";
    cout << "Please list the service you would like to do:\n";
    cout << "\n";
    cout << "[ 1. View Balance ]\n";
    cout << "[ 2. Withdraw Money ]\n";
    cout << "[ 3. View credit score]\n";
    cout << "[ 4. Shop ]\n";
    cout << "[ 5. Claim Paycheck ]\n";


    cout << "Input: ";
    cin >> mainselectorinpt;


    if (mainselectorinpt == 1) {
        clear();
        cout << "Current Balance: " << usr.balance;
    }
    if (mainselectorinpt == 5) {
        clear();
        usr.balance = usr.balance + paycheck;
        cout << "Claimed: " << paycheck;
        cout << "\nCurrent Balance: " << usr.balance;
    }

    return 0;
}
// < Wait function > //
// std::this_thread::sleep_for(std::chrono::seconds(2)); //