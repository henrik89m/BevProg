#include "std_lib_facilities.h"

int main() {
    
    //1
    cout << "Enter the name of the person you want to write to " << '\n';

    string first_name;
    cin >> first_name;
    
    cout << "Dear " << first_name << "," << '\n';
    
    //2
    cout << "How are you? " << '\n'
    << "How is your day going?" << '\n'
    << "What is your plan for tomorrow" << '\n';
    
    //3
    cout << "Add a friend name" << '\n';
    
    string friend_name;
    cin >> friend_name;
    
    cout << "Have you seen " << friend_name << " lately?" << '\n';
    
    //4
    char friend_sex = '0';
    
    cout << "Enter m if the friend is male or f if the friend is female. " << '\n';
    cin >> friend_sex;
    
    if (friend_sex == 'm') {
        cout << "If you see " << friend_name << " please ask him to call me." << '\n';
    }
    else if (friend_sex == 'f') {
        cout << "If you see " << friend_name << " please ask her to call me." << '\n';
    }
    
    //5
    cout << "Enter an age" << '\n';
    
    int age;
    cin >> age;
    
    if (age < 0 || age > 110) {
        simple_error ("you are kidding!");
    }
    else if (age < 110)
        cout << "I hear you just had a birthday and you are " << age << " years old." << '\n';
    
    //6
    if (age < 12) {
        cout << "Next year you will be " << age+1 << '\n';
    }
    if (age == 17) {
        cout << "Next year you will be able to vote" << '\n';
    }
    if (age > 70) {
        cout << "I hope you are enjoying retirement" << '\n';
    }
    
    //7
    cout << "yours sincerely" << '\n' << '\n' << '\n' << "Henrik Mocsari " << '\n';
    
    return 0;
}
