#include "std_lib_facilities.h"

int main()

try {
    
    cout << "Success!\n";
    cout << "Success!\n";
    cout << "Success" << "!\n";
    cout << "success" << '\n';
    
    int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
    
    vector<int> a(10); a[5] = 7; if (a[5]==7) cout << "Success!\n";
    if (true) cout << "Success!\n"; else cout << "Fail!\n"; 
    bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";
    
    string animal = "ape"; bool cc = "fool" > animal; if (cc) cout << "Success!\n";
    string animal1 = "ape"; if (animal1!="fool") cout << "Success!\n";
    string animal2 = "ape"; if (animal2!="fool") cout << "Success!\n";
    string animal3 = "ape"; if (animal3!="fool") cout << "Success!\n";
    
    vector<char> kar(1); for (int i=0; i<kar.size(); ++i) cout << "Success!\n";
    
    vector<char> kar2(5); for (int i=5; i<=kar2.size(); ++i) cout << "Success!\n";
    
    string success = "Success!\n"; for (int i=0; i<10; ++i) cout << success[i];
    
    if (true) cout << "Success!\n"; else cout << "Fail!\n";
    
    int x = 2000; int valt = x; if (valt==2000) cout << "Success!\n";
    
    string success1 = "Success!\n"; for (int i=0; i<10; ++i) cout << success1[i];
    
    vector<int> kar3(5); for (int i=5; i<=kar3.size(); ++i) cout << "Success!\n";
    
    int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n";
    
    int valtx = 1; double d = 5.0/valtx-2; if (d==2*(valtx+0.5)) cout << "Success!\n";
     
    string success2 = "Success!\n"; for (int i=0; i<=10; ++i) cout << success2[i];
     
    int h =0; int t = 9; while (h<10) ++h; if (t<h) cout << "Success!\n";
    
    int valty = 1; double l = 5.0/valty-2; if (l==2*(valty+0.5)) cout << "Success!\n";
    
    cout << "Success!\n";
     
    keep_window_open(); return 0;
}
catch (exception& e) {
cerr << "error: " << e.what() << '\n'; keep_window_open();
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n"; keep_window_open();
return 2;
}
