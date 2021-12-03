#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<typename T>
struct S {
    explicit S(T var = 0) : val{var} {}

    S& operator=(const T&);

    T& get();
    const T& get() const;

private:
    T val;
};

template<typename T>
T& S<T>::get()
{
    return val;
}

template<typename T>
const T& S<T>::get() const
{
    return val;
}

template<typename T>
S<T>& S<T>::operator=(const T& s)
{
    val = s;
    return *this;
}

template<typename T>
ostream& operator<<(ostream& os, vector<T>& v)
{
    os << "{ ";
    for (int i = 0; i < v.size(); i++)
    {
        os << v[i] << (i < v.size() - 1 ? ", " : " ");
    }
    os << "} " << endl;

    return os;
}

template<typename T>
istream& operator>>(std::istream& is, vector<T>& v)
{
    char ch = 0;
    is >> ch;
    if (ch != '{') 
    {
        is.unget();
        return is;
    }

    for (T val; is >> val; ) 
    {
        v.push_back(val);
        is >> ch;
        if (ch != ',') break;
    }

    return is;
}

template<typename T>
void read_val(T& v)
{
    cin >> v;
}

int main()
{
    S<int> s1 {1};
    S<char> s2 {'x'};
    S<double> s3 {6.6};
    S<string> s4 {"Hi"};
    S<vector<int>> sv {vector<int>{1,2,3}};

    cout << "s1 " << s1.get() << endl;
    cout << "s2 " << s2.get() << endl;
    cout << "s3 " << s3.get() << endl;
    cout << "s4 " << s4.get() << endl;
    cout << "sv " << sv.get() << endl;

    return 0;
}
