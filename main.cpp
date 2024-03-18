#include "Circle.h"
#include "math.h"
#include <iostream>
using namespace std;

int main(){
    float r,sum;
    cout << "Enter your number : " << endl;
    cin >> r;
    Circle circle1(r);
    Circle circle2(circle1);
    Circle circle3(7);
    

    circle1.cal_area();
    circle2.cal_area();
    circle3.cal_area();
    cout << "Radius of A: " << circle1.get_radius() << " meters" << endl;
    cout << "Area of A: " << circle1.get_area() << " square meters" << endl;
    cout << "Radius of B: " << circle2.get_radius()  << " meters" << endl;
    cout << "Area of B: " << circle2.get_area() << " square meters" << endl;
    cout << "Radius of C: " << circle3.get_radius()  << " meters" << endl;
    cout << "Area of CF: " << circle3.get_area() << " square meters" << endl;

    Circle circle4;
    circle4.cal_area_obj(circle1, circle3);
    cout << "Radius of D: " << circle4.get_total_radius()  << " meters" << endl;
    cout << "Area of D: " << circle4.get_area() << " square meters" << endl;

    Circle circle5;
    circle5 = circle2.ret_area_obj(circle3);
    cout << "Radius of E: " << circle5.get_radius() << " meters" << endl;
    cout << "Area of E: " << circle5.get_area() << " square meters" << endl;

   return 0;   
}