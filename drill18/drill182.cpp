#include <iostream>
#include <vector>

using namespace std;

vector<int> gv {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(vector<int> v)
{
    vector<int> lv(10);
    lv = v;
    for(auto& a : v) cout << a << endl;

    vector<int> lv2 = v;
    for(auto a : lv2) cout << a << endl;
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

int main(){

    f(gv);
    vector<int> vv(10);
    for(int i = 0; i < vv.size(); i++) vv[i] = fact(i+1);

    f(vv);

    return 0;
}
