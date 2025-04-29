#include <iostream>
using namespace std;

int main() {
    int totalSeconds;
    cout << "Introduce la cantidad de segundos." << endl;
    cin >> totalSeconds;

    if (totalSeconds < 0) {
        cout << "Error: Input seconds cannot be negative." << endl;
    } else {
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;

        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }

    return 0;
}