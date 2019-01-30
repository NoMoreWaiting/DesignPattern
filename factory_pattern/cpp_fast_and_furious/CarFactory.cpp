/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CarFactory.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月30日, 下午8:43
 */

#include "CarFactory.h"

CarFactory::CarFactory() {
}

CarFactory::CarFactory(const CarFactory& orig) {
}

CarFactory::~CarFactory() {
}

Car& CarFactory::getCar()
{
    Car * car = new Car();
    return *car;
}