#pragma once
#include<iostream>
#include<cmath>

class Angle {
    public:
        Angle(double r_val); // Standard constructor
        Angle(const Angle& source); // Copy constructor

        double toRad()const; // return angle in radians
        double toDeg()const; // return angle in degrees

        static Angle fromRadians(double); // Initialize Angle from radians
        static Angle fromDegrees(double); // Initialize Angle from degrees

        void add(const Angle&); // add an angle
        static Angle distance(const Angle&, const Angle&); // returns distance between two angles

    private:
        double ang_; // Angle in radians from (0, 2PI)
};