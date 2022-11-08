#include <iostream>
#include <cstdlib>
using namespace std;

class Ttime
{
private:
    int hour, minute;
public:
    int getHour() { return hour; }
    void setHour(int ho) { hour = value; }

    int getMinute() { return minute; }
    void setMinute(int value) { minute = value; }

    void readTime("Enter your time:");
    bool lessThan(Ttime, Ttime);
    int duration(Ttime , Ttime);
    void displayTime();
};

void Ttime::readTime("Enter your time:") {
    //int hour, minute;
    cout << "Hour: " << endl;
    cin >> hour;
    cout << "Minute: " << endl;
    cin >> minute;
}

bool Ttime::lessThan(Ttime t1, Ttime t2) {
    //(t1 < t2) ? true : false;
}

int Ttime::duration(Ttime t1, Ttime t2) {
    int h, m;
    h = math.abs(t1.getHour() - t2.getHour());
    m = math.abs(t1.getMinute() - t2.getMinute());
}

void Ttime::displayTime() {
    //Display time format:
}

int main()
{
    return 0;
}
