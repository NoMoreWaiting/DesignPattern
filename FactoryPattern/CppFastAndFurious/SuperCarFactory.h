/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SuperCarFactory.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月31日, 上午9:32
 */

#ifndef SUPERCARFACTORY_H
#define SUPERCARFACTORY_H

#include "CarFactory.h"
#include "Car.h"

class SuperCarFactory :public CarFactory
{
public:
    SuperCarFactory();
    SuperCarFactory(const SuperCarFactory& orig);
    virtual ~SuperCarFactory();
private:
    
public:
    Car& getCar();

};

#endif /* SUPERCARFACTORY_H */

