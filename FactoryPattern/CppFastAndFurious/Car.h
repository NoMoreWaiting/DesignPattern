/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Car.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 下午8:43
 */

#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;

class Car {
public:
    Car();
    Car(const Car& orig);
    virtual ~Car();
private:
    void showPrivate();
public:
    virtual void display();
    void show();

};

#endif /* CAR_H */

