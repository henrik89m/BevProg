#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    int val = 7;
    int* p1 = &val;

    cout << p1 << " " << *p1 << endl;

    int* p2 = new int[7];
    int val2 = 1;
    for (int i = 0; i < 7; i++)
    {
        p2[i] = val2;
        val2 *= 2;
    }

    cout << p2 << " " <<*p2;

    for (int j = 0; j < 7; j++) cout << p2[j] << endl;

    int* p3 = p2;
    p2 = p1;
    p2 = p3;

    cout << p1 << " " << *p1 << endl;
    cout << p2 << " " << *p2 << endl;

    delete[] p2;

    p1 = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    p2 = new int[10];

    for (int k = 0; k < 10; k++)
        p2[k] = p1[k];
    
    for (int k = 0; k < 10; ++k) cout << p2[k] << endl;
    
    vector<int> v1 {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    vector<int> v2 (10);
    
    v2 = v1;
    for (int v : v2) cout << v << endl;
    
    return 0;
}
