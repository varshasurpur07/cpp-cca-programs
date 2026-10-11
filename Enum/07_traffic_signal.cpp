// 07_traffic_signal.cpp
// Program to simulate a traffic signal system using an enum.

#include <iostream>

using namespace std;

// Enumeration representing traffic light states
enum TrafficLight {
    RED = 1,
    YELLOW,
    GREEN
};

// Function to display the action required for each signal state
void handleSignal(TrafficLight signal) {
    switch (signal) {
        case RED:
            cout << "\n[SIGNAL: RED] Action: STOP! Vehicles must come to a complete halt.\n";
            break;
        case YELLOW:
            cout << "\n[SIGNAL: YELLOW] Action: CAUTION! Prepare to stop or proceed with caution.\n";
            break;
        case GREEN:
            cout << "\n[SIGNAL: GREEN] Action: GO! You may proceed safely.\n";
            break;
        default:
            cout << "\nInvalid traffic signal state!\n";
            break;
    }
}

int main() {
    cout << "=== Traffic Signal System Using Enum ===\n";
    cout << "Traffic light options:\n";
    cout << "1. RED\n";
    cout << "2. YELLOW\n";
    cout << "3. GREEN\n";
    cout << "Enter your choice (1-3): ";

    int choice;
    if (cin >> choice && choice >= 1 && choice <= 3) {
        TrafficLight signal = static_cast<TrafficLight>(choice);
        handleSignal(signal);
    } else {
        cout << "Error: Invalid selection. Please enter 1, 2, or 3.\n";
    }

    return 0;
}
