#include <iostream>
using namespace std;
class Date {
private:
    int day;
    int month;
    int year;

public:
    Date() : day(1), month(1), year(2000) {}

    
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

   
    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    
    bool isValidDate() const {
        if (month < 1 || month > 12) {
            return false;
        }

        int daysInMonth;
        if (month == 2) {
           
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                daysInMonth = 29;
            } else {
                daysInMonth = 28;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            daysInMonth = 30;
        } else {
            daysInMonth = 31;
        }

        return (day >= 1 && day <= daysInMonth);
    }
};

int main() {
    Date myDate;
    int day, month, year;

     cout << "Enter day: ";
     cin >> day;
     cout << "Enter month: ";
     cin >> month;
     cout << "Enter year: ";
     cin >> year;

    myDate.setDate(day, month, year);

    if (myDate.isValidDate()) {
         cout << "Date is valid: " << myDate.getDay() << "/" << myDate.getMonth() << "/" << myDate.getYear() <<  endl;
    } else {
         cout << "Invalid date entered." <<  endl;
    }

    return 0;
}
