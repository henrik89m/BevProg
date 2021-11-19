#include "std_lib_facilities.h"

/*
struct Date {
    
    int y;
    int m;
    int d;

};

Date today;

void init_day(Date& dd, int y, int m, int d){
    
    if(y < 1) error("invalid year");
    if(m < 1 || m > 12) error("invalid month");
    if(d < 1 || d > 31 ) error("invalid day");
    
    dd.y = y;
    dd.m = m;
    dd.d = d;

}

void add_day(Date& dd, int n){

    if(dd.d > 31){
        dd.d = 1;
        dd.m++;
    }
    else{
        dd.d++;
    }
    if(dd.m > 12){
        dd.m = 1;
        dd.y++;
    }
    
}

ostream& operator << (ostream& os, const Date& d){
    
    return os << d.y << "." << d.m << "." << d.d << endl;
}

void f(){
   
}

int main(){
    Date today;
    init_day(today, 1978,6,5);
    Date tomorrow = today;
    add_day(tomorrow, 1);
    
    cout << "Today: " << today << endl;
    cout << "Tomorrow: " << tomorrow << endl;
    
    return 0;
}
 */

//2
/*
struct Date {
    int y, m, d;
    Date(int y, int m, int d);
    void add_day(int n);

};

Date::Date(int year, int month, int day)
:y{year}, m{month}, d{day}
{
    
    if(y < 0) error("invalid year");
    if(m > 12 || m < 0) error("invalid month");
    if(d > 31 || d < 0) error("invalid day");
    
    
    
}

void Date::add_day(int n){
    
    d++;
    
    if(d > 31) {
        d = 1;
        m++;
    }
    if(m > 12){
        m = 1;
        y++;
    }
}

ostream& operator<<(ostream& os, const Date& d){
    
    return os << d.y << "." << d.m << "." << d.d << endl;
    
}

int main() {
    Date today(1978,6,5);
    Date tomorrow = today;
    tomorrow.add_day(1);
    
    cout << "Today: " << today << endl;
    cout << "Tomorrow: " << tomorrow << endl;
    
    return 0;
}
*/

//3
class Date{
    int y, m, d; public:
public:
    Date(int y, int m, int d);
    void add_day(int n);
    int month() {return m;}
    int day() {return d; }
    int year() {return y; }
};

Date::Date(int yy, int mm, int dd)
:y{yy}, m{mm}, d{dd}
{
    if(y < 0) error("invalid year");
    if(m > 12 || m < 0) error("invalid month");
    if(d > 31 || d < 0) error("invalid day");
    
}

void Date::add_day(int n){
    
    d++;
    
    if(d > 31) {
        d = 1;
        m++;
    }
    if(m > 12){
        m = 1;
        y++;
    }
}

ostream& operator<<(ostream& os, Date& d){
    
    return os << d.year() << "." << d.month() << "." << d.day() << endl;
}

int main() {
    Date today(1978,6,5);
    Date tomorrow = today;
    tomorrow.add_day(1);
    
    cout << "Today: " << today << endl;
    cout << "Tomorrow: " << tomorrow << endl;
    
    return 0;
}


 




