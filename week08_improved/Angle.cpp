#include<iostream>
#include<cmath>
#include"Angle.h"

using namespace std;

Angle::Angle(double r_val){
    //cout << "    passed r_val = " << r_val << endl;
    r_val = r_val - floor(r_val/(2*M_PI)) * 2*M_PI;
    ang_ = r_val;
    //cout << "    r_val = " << r_val << endl;
}
// Copy constructor
Angle::Angle(const Angle& source){
    ang_ = source.ang_;
}

double Angle::toRad()const{
    return ang_;
}
double Angle::toDeg()const{
    return ang_/(2*M_PI) * 360.0;
}

Angle Angle::fromRadians(double r_val){
    return Angle(r_val);
}
Angle Angle::fromDegrees(double d_val){
    double r_val = d_val/360. * 2*M_PI;
    return Angle(r_val);
}

void Angle::add(const Angle& source){
    ang_ = Angle(ang_ + source.ang_).ang_;
}
//Difference in degrees
Angle Angle::distance(const Angle& A1, const Angle& A2){
    double diff = abs(A1.ang_ - A2.ang_);
    //cout << "\n    diff = " << diff << endl;
    if (diff > M_PI){
        diff = 2*M_PI - diff;
    }
    //cout << "\n    diff = " << diff << endl;
    return Angle(diff);
}