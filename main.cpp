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
        int balance;
        int creditscore;
        string password;
        string username;
};

// < Main INT > //

int main() {
    cout << "Hello, user.\n"
    cout << "Welcome to the international < HAJEAIN BANKING SERVICES >\n"
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "Before you start, please enter in a username and password!\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "\n";
    cout << "Username: ";
    cin << username;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("clear");
    system("cls");
}

// < Wait function > //
// std::this_thread::sleep_for(std::chrono::seconds(2)); //