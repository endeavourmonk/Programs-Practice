#include <iostream>
#define pi 22.7
using namespace std;

class rectangle //rectangle class
{
private:
    int l, b; // attributes of rectangle
public:
    rectangle()
    {
        cout << "janam of rectangle </>" << endl;    //constructor
    }
    ~rectangle()                                              //destructor
    {
        cout << "mrityu of rectangle</>" << endl;
    }
    void input(void);
    int calc_area(void);
    int calc_perimeter(void);
};
void rectangle::input()
{
    cout << "enter length and breadth : " << endl;
    cin >> l;
    cin >> b;
}
int rectangle::calc_area()
{
    return l * b;
}
int rectangle::calc_perimeter()
{
    return 2 * (l + b);
}

class circle //class circle
{
private:
    int r;

public:
    circle()
    {
        cout << "janam of circle </>" << endl;    //constructor
    }
    ~circle()
    {
        cout << "mrityu of circle</>" << endl;    //destructor
    }
    void input()
    {
        cout << "enter radius of circle" << endl;
        cin >> r;
    }
    int calc_area();
    int calc_perimeter();
};
int circle::calc_area()
{
    return pi * r * r;
}

int circle::calc_perimeter()
{
    return 2 * pi * r;
}

class square //square class
{
private:
    int side; // attribute of square
public:
    square()
    {
        cout << "janam of square </>" << endl;    //constructor
    }
    ~square()                                           //destructor
    {
        cout << "mrityu of square</>" << endl;
    }
    void input(void);
    int calc_area(void);
    int calc_perimeter(void);
};
void square::input()
{
    cout << "enter side length : " << endl;
    cin >> side;
}
int square::calc_area()
{
    return side * side;
}
int square::calc_perimeter()
{
    return 4 * side;
}

class triangle //class triangle
{
private:
    int s1, s2, s3;

public:
    triangle()
    {
        cout << "janam of triangle </>" << endl;    //constructor
    }
    ~triangle()
    {
        cout << "mrityu of triangle </>" << endl;    //destructor
    }
    void input_sides();
    int calc_area();
    int calc_perimeter_triangle();
};
void triangle ::input_sides()
{
    cout << "enter sides of traingle" << endl;
    cin >> s1 >> s2 >> s3;
}
//int triangle ::calc_area()
int triangle ::calc_perimeter_triangle()
{
    return s1 + s2 + s3;
}
//driver code
int main()
{
    rectangle a;
    a.input();
    int area = a.calc_area();
    cout << "AREA OF RECTANGLE IS " << area << endl;
    int per = a.calc_perimeter();
    cout << "AREA OF RECTANGLE IS " << per << endl;
    circle c;
    c.input();
    float area_circle = c.calc_area();
    cout << "AREA OF CIRCLE IS " << area_circle << endl;
    float perimetrer_circle = c.calc_perimeter();
    cout << "PERIMETER OF CIRCLE IS " << perimetrer_circle << endl;
    square s;
    s.input();
    int s_area = s.calc_area();
    cout << "AREA OF SQUARE IS " << s_area << endl;
    int per_sq = s.calc_perimeter();
    cout << "PERIMETER OF SQUARE IS " << per_sq << endl;
    triangle t;
    t.input_sides();
    int t_peri = t.calc_perimeter_triangle();
    cout << "PERIMETER OF TRIANGLE IS" << t_peri << endl;

    return 0;
}
