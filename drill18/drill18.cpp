#include <iostream>

using namespace std;

int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(int arr[], int n)
{
    int la[10] = {};
    for(int i = 0; i < n; i++) la[i] = arr[i];

    for(const auto& a : la) cout << a << endl;

    int* p = new int[n];
    for (int j = 0; j < n; j++) p[j] = arr[j];

    for(int k = 0; k < n; k++) cout<< p[k] << endl;

    delete[] p;
}

int fact(int n)
{
    if(n > 1){
        n = n*fact(n-1);
    }
    else{
        n = 1;
    }
    return n;
}

int main()
{
    f(ga, 10);

    int aa[10] = {};
    for(int i = 0; i < 10; i++) aa[i] = fact(i+1);

    f(aa, 10);

    return 0;
}
