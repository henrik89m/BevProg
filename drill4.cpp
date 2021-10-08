#include "std_lib_facilities.h"

vector<double> v;


int main(){
        
    double a = 0;
    double value = 0;
    double mvalue = 0;
    double min = 1000;
    double max = -1000;
    string unit = "unit";
   
    cout << "Enter a value and a unit" << endl;
    
    while(cin >> a >> unit){
        
        if (a < min) {
            min = a;
            cout << "The smallest so far: " << min << '\n';
        }
        if (a > max) {
            max = a;
            cout << "The largest so far: " << max << '\n';
        }
                  
        if (unit == "m") {
                 value = a/100;
                 cout << "Metre to cm: " << value << " cm" << '\n';
             }
             else if (unit == "cm") {
                 value = a/2.54;
                 cout << "Cm to inch: " << value << " inch" << '\n';
             }
             else if(unit == "in"){
                 value = a/12;
                 cout << "Inch to foot: " << value << " foot" << '\n';
             }
             else if(unit == "ft"){
                 value = a/0.30;
                 cout << "Foot to metre " << value << "metre" << '\n';
             }
             else
                 cout << "unrecognizable unit" << '\n';
        
        if (unit == "m") {
                 mvalue = a;
             }
             else if(unit == "cm"){
                 mvalue = a/100;
             }
             else if(unit == "in"){
                 mvalue = a/39.37;
             }
             else if(unit == "ft"){
                 mvalue = a/3.28;
            
             }
        v.push_back(mvalue);

        }
    
    double sum = 0;
    
    for(int i = 0; i<v.size(); ++i)
        sum += v[i];
        
    sort(v.begin(),v.end());
    
    for(int j = 0; j<v.size(); ++j)
        cout << v[j] << endl;
    
    cout << "The smallest value was: " << min << endl;
    cout << "The largest value was: " << max << endl;
    cout << "The sum of the numbers in vector: " << sum << endl;
    
    keep_window_open("|");

    return 0;

}
