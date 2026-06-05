// Week 2 - Experiment 6
// Employee Weekly Wage Calculation

#include<iostream>
using namespace std;

struct WorkDay {
    int EID;
    string day;
    int hours;
    int minutes;
};

int main() {
    float wageRate = 11.0;

    WorkDay days[5] = {
        {1, "Monday",    5, 35},
        {1, "Tuesday",   6, 17},
        {1, "Wednesday", 7, 18},
        {1, "Thursday",  4, 40},
        {1, "Friday",    3, 31}
    };

    float totalHours = 0;
    for(int i = 0; i < 5; i++) {
        totalHours += days[i].hours + days[i].minutes / 60.0;
    }

    float totalWage = totalHours * wageRate;

    cout << "Total Hours Worked: " << totalHours << " hours" << endl;
    cout << "Wage Rate: " << wageRate << " euro/hour" << endl;
    cout << "Total Weekly Wage: " << totalWage << " euro" << endl;

    return 0;
}
