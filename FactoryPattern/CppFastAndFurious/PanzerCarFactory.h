/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PanzerCarFactory.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月31日, 上午10:43
 */

#ifndef PANZERCARFACTORY_H
#define PANZERCARFACTORY_H
#include "Car.h"
#include "CarFactory.h"

class PanzerCarFactory :public CarFactory
{
public:
    PanzerCarFactory();
    PanzerCarFactory(const PanzerCarFactory& orig);
    virtual ~PanzerCarFactory();
private:
public:
    Car & getCar();
};

#endif /* PANZERCARFACTORY_H */

