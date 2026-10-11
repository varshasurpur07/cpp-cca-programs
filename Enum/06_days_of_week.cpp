// 06_days_of_week.cpp
// Program to display days of the week and demonstrate enum values.

#include <iostream>
#include <string>

using namespace std;

// Enumeration representing days of the week (Sunday = 0, Monday = 1, etc.)
enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

// Helper function to return the name of a day
string getDayName(Day day) {
    switch (day) {
        case SUNDAY:    return "Sunday";
        case MONDAY:    return "Monday";
        case TUESDAY:   return "Tuesday";
        case WEDNESDAY: return "Wednesday";
        case THURSDAY:  return "Thursday";
        case FRIDAY:    return "Friday";
        case SATURDAY:  return "Saturday";
        default:        return "Unknown Day";
    }
}

int main() {
    cout << "=== Days of the Week Using Enum ===\n";
    cout << "Listing all days and their internal integer enum values:\n\n";

    for (int i = SUNDAY; i <= SATURDAY; i++) {
        Day currentDay = static_cast<Day>(i);
        cout << "Enum Value " << i << " -> " << getDayName(currentDay);
        if (currentDay == SUNDAY || currentDay == SATURDAY) {
            cout << " (Weekend)";
        } else {
            cout << " (Weekday)";
        }
        cout << "\n";
    }

    int choice;
    cout << "\nEnter a day number (0 for Sunday, 6 for Saturday): ";
    if (cin >> choice && choice >= SUNDAY && choice <= SATURDAY) {
        Day userDay = static_cast<Day>(choice);
        cout << "You selected: " << getDayName(userDay) << "\n";
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
