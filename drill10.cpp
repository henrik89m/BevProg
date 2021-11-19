#include "std_lib_facilities.h"

struct Point{
    
    int x;
    int y;
    
};

istream& operator>>(istream& is, Point& p){
    
    char ch1;
    if (is>>ch1 && ch1!='(') {
        is.unget();
        is.clear(ios_base::failbit);
        return is;
    }
    
    int x, y;
    char ch11, ch2, ch3, ch4;
    is >> ch11 >> x >> ch2 >> y >> ch3  >> ch4;
    if (!is) return is;
    if (ch1!='(' || ch2!=',' || ch3!=',' || ch4!=')') {
        is.clear(ios_base::failbit);
        return is;
        
    }
    
    p.x = x;
    p.y = y;
    return is;
    
}

ostream& operator<<(ostream& os, const Point& p) {

    return os << '(' << p.x << ',' << p.y << ')';
}

void fill_from_file(vector<Point>& points, string& name) {
    ifstream ist {name};
    if (!ist) error("can't open input file ",name);
    for(Point p;
        ist >> p;)
        points.push_back(p);
}


int main(){
    
    vector<Point> original_points;
    cout << "Enter 7 pairs:" << endl;
    for(int i = 0; i < 7; i++){
        Point e;
        cin >> e;
        original_points.push_back(e);
        
    }
    
    for (Point p : original_points){
        cout << p << endl;
    }
    
    string filename = "mydata.txt";
    ofstream ost {filename};
    if (!ost) error("can't open output file ");
    for(Point p : original_points)
        ost << p;
    ost.close();
    
    vector<Point> processed_points;
    fill_from_file(processed_points, filename);
    
    for(Point p : processed_points)
        cout << p << endl;
    
    if(original_points.size() != processed_points.size())
        cout << "Something's wrong!" << endl;
    
    
    return 0;
}

