// calculating area and perimeter of different shapes.... (polymorphism)
#include<iostream>
#define pi 3.141414
using namespace std;

class shape{       //class shape
    protected:      
        float area,perimeter;     //attributes of shape which are common in all classes below
    public:
        shape(){};              //consructor
        ~shape(){};             //destructor
        void print();           //function to print area and perimeter
        virtual void input()=0;     //pure virtual function 
        virtual void calc_area()=0;    //pure virtual function
        virtual void calc_perimeter()=0;    //pure virtual function
};
void shape :: print(){                      //member function of class shape
    cout<<"area = "<<area<<"sq unit"<<endl;
    cout<<"perimeter = "<<perimeter<<endl<<endl;
}

class rectangle:public shape{        //rectangle class inheriting class shape
private:
    int l, b; // attributes of rectangle
public:
    rectangle() { cout << "janam of rectangle </>" << endl; }           //constructor
    ~rectangle(){cout << "mrityu of rectangle</>" << endl;}             //destructor
    void input();               //member function for inputting attributes of rectangle
    void calc_area();           //for calculating area of rectangle
    void calc_perimeter();      //for claculating perimeter of ractangle
};
void rectangle::input()
{
    cout << "enter length and breadth : " << endl;
    cin >> l;
    cin >> b;
}
void rectangle::calc_area(){
    area = l * b;
}
void rectangle::calc_perimeter(){
    perimeter = 2 * (l + b);
}
class circle:public shape{              //class circle inheriting class shape
private:
    int r;

public:
    circle() { cout << "janam of circle </>" << endl<<endl; }     //constructor
    ~circle() { cout << "mrityu of circle</>" << endl<<endl; }    //destructor
    void input();
    void calc_area();
    void calc_perimeter();
};
void circle :: input(){
    cout << "enter radius of circle" << endl;
    cin >> r;
}
void circle::calc_area(){
    area = pi * r * r;
}
void circle::calc_perimeter(){
    perimeter =2*pi*r;
}

class square:public shape {        //square class
private:
    int side;       // attribute of square
public:
    square() { cout << "janam of square </>" << endl; }         //constructor
    ~square(){cout << "mrityu of square</>" << endl;}           //destructor
    void input();
    void calc_area();
    void calc_perimeter();
};
void square::input(){
    cout << "enter side length : " << endl;
    cin >> side;
}
void square::calc_area(){
    area=side*side;
}
void square::calc_perimeter(){
    perimeter= 4*side;
}

class triangle:public shape {           //class triangle
private:
    int s1, s2, s3,h,b;
public:
    triangle() { cout << "janam of triangle </>" << endl; }   //constructor
    ~triangle() { cout << "mrityu of triangle </>" << endl; } //destructor
    void input();
    void calc_area();
    void calc_perimeter();
};
void triangle ::input(){
    cout << "enter sides of traingle" << endl;
    cin >> s1 >> s2 >> s3;
    cout<<"enter base and height "<<endl;
    cin>>b>>h;
}
void triangle:: calc_area(){
    area=b*h*0.5;
}
void triangle ::calc_perimeter(){
    perimeter=s1+s2+s3;
}
//driver code
int main(){
    shape *p;
    p=new rectangle;
    p->input();
    p->calc_area();
    p->calc_perimeter();
    p->print();
    delete p;
    p=new circle;
    p->input();
    p->calc_area();
    p->calc_perimeter();
    p->print();
    delete p;
    p=new square;
    p->input();
    p->calc_area();
    p->calc_perimeter();
    p->print();
    delete p;
    p=new triangle;
    p->input();
    p->calc_area();
    p->calc_perimeter();
    p->print();
    delete p;
    return 0;
}