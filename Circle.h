#ifndef _ARRAYLIST_H_
#define _ARRAYLIST_H_
#include <iostream>
#include <iostream>
using namespace std;

class Circle {
private:
    float radius;
    float area;
    float total,sum;

public:

    Circle() : radius(0), area(0){}

 
    Circle(float r) : radius(r){}
    
  
     
    void set_radius(float radius);
    void cal_area();
    float get_radius();
    float get_area();
    void cal_area_obj(Circle circle2, Circle circle1);
    float get_total_radius();
    Circle ret_area_obj(Circle);
    
    
};
#endif