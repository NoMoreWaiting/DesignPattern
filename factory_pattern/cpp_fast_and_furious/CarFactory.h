/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CarFactory.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 下午8:43
 */

#ifndef CARFACTORY_H
#define CARFACTORY_H

#include "Car.h"

class CarFactory {
public:
    CarFactory();
    CarFactory(const CarFactory& orig);
    virtual ~CarFactory();
private:
public:
    virtual Car& getCar();

};

#endif /* CARFACTORY_H */

