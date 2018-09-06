/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Car.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月30日, 下午8:43
 */

#include "Car.h"

Car::Car() {
}

Car::Car(const Car& orig) {
}

Car::~Car() {
}

void Car::display()
{
    cout << "this is base car ,can run" <<endl;
}

void Car::show()
{
    cout << "just want to run far away" << endl;
}

void Car::showPrivate()
{
    cout << "just show the private method"<<endl;
}