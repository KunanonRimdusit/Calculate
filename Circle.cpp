#include "Circle.h"
#include "math.h"
#include <iostream>
using namespace std;

void Circle::set_radius(float radius)
{ 
    this -> radius = radius;
}

float Circle::get_radius()
{   
    return radius;
}

void Circle::cal_area()
{  if(radius > 0){
    area = M_PI*(radius*radius);}
    else{
        area = 0;
        cout << "Error : Radius Negative Value" << endl;
    }
}

float Circle::get_area()
{
    return area;
}

void Circle::cal_area_obj(Circle circle1, Circle circle3)
{
    total = circle1.radius + circle3.radius;
    if(total > 0){
        area = M_PI * (total * total);
    }
    else{
        area = 0;
        cout << "Error : Radius Negative Value" << endl;
    }
        
}

float Circle::get_total_radius()
{   
    return total;
}

Circle Circle::ret_area_obj(Circle circle3)
{
    Circle sum;
   
    sum.radius = radius + circle3.radius;
    if(sum.radius > 0){
        sum.area = M_PI * (sum.radius * sum.radius);
    }
    else{
        sum.area = 0;
        cout << "Error : Radius Negative Value" << endl;
    }
    return sum;
}


