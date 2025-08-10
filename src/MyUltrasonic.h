#ifndef MYULTRASONIC_H
#define MYULTRASONIC_H

#include <Arduino.h>

class MyUltrasonic {
private:
    int trigPin;
    int echoPin;
public:
    MyUltrasonic(int trig, int echo);
    long getDistance();
};

#endif

