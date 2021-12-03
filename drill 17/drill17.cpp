#include <iostream>
#include <vector>

using namespace std;

ostream& print_array10(ostream& os, int* a, int n)
{

    for (int i = 0; i < n; i++) os << a[i] << endl;

    return os;
}

ostream& print_vector(ostream& os, vector<int>& v)
{
    for(int x : v) os << x << endl;
    
    return os;
}

int main()
{

    int* arr = new int[20];
    int val = 100;
    for(int i = 0; i < 20; i++) 
    {
        arr[i] = val;
        val++;
    }

    print_array10(cout, arr, 20);
    delete[] arr;

    cout << " " << endl;

    vector<int> v1(10);
    int val2 = 100;
    for(int& v : v1) 
    {
        v = val2;
        val2++;
    }

    print_vector(cout, v1);
    

    return 0;
}