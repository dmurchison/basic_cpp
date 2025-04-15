// filepath: /3-3_project/hello_world.cpp
// Developer: Duncan Murchison
// Date: 2021-09-29
// Purpose: This program prints is a clock that allows the user to add hours, minutes, and seconds to the current time.

#include <iostream>
#include <iomanip>
using namespace std;
#include <cstring>

// Function prototypes
void displayMenu();
void displayTime(int hours, int minutes, int seconds);
void addHour(int &hours);
void addMinute(int &minutes, int &hours);
void addSecond(int &seconds, int &minutes, int &hours);


int main() {
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    char choice;

    // Get user input for initial time
    cout << "Enter initial time (hours minutes seconds): ";
    cin >> hours >> minutes >> seconds;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case '1':
                addHour(hours);
                break;
            case '2':
                addMinute(minutes, hours);
                break;
            case '3':
                addSecond(seconds, minutes, hours);
                break;
            case '4':
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        displayTime(hours, minutes, seconds);

    } while (choice != '4');

    return 0;
}

// Function to display the menu
void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1 - Add Hour" << endl;
    cout << "2 - Add Minute" << endl;
    cout << "3 - Add Second" << endl;
    cout << "4 - Exit" << endl;
    cout << "Enter your choice: ";
}

// Function to display the current time in both 12-hour and 24-hour formats
void displayTime(int hours, int minutes, int seconds) {
    // Display 24-hour format
    cout << "24-hour format: "
         << setw(2) << setfill('0') << hours << ":"
         << setw(2) << setfill('0') << minutes << ":"
         << setw(2) << setfill('0') << seconds << endl;

    // Calculate 12-hour format
    int hours12 = hours % 12;
    if (hours12 == 0) {
        hours12 = 12; // AM or PM
    }
    // This is to determine AM or PM, it says if hours is less than 12 then it is AM else PM
    string period = (hours < 12) ? "AM" : "PM";

    // Display 12-hour format
    cout << "12-hour format: "
         << setw(2) << setfill('0') << hours12 << ":"
         << setw(2) << setfill('0') << minutes << ":"
         << setw(2) << setfill('0') << seconds << " " << period << endl;
}

// Function to add an hour
void addHour(int &hours) {
    hours = (hours + 1) % 24;
}

// Function to add a minute
void addMinute(int &minutes, int &hours) {
    minutes++;
    if (minutes == 60) {
        minutes = 0;
        addHour(hours);
    }
}

// Function to add a second
void addSecond(int &seconds, int &minutes, int &hours) {
    seconds++;
    if (seconds == 60) {
        seconds = 0;
        addMinute(minutes, hours);
    }
}
