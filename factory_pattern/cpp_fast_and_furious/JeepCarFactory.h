/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   JeepCarFactory.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月31日, 上午10:33
 */

#ifndef JEEPCARFACTORY_H
#define JEEPCARFACTORY_H
#include "Car.h"
#include "CarFactory.h"

class JeepCarFactory :public CarFactory
{
public:
    JeepCarFactory();
    JeepCarFactory(const JeepCarFactory& orig);
    virtual ~JeepCarFactory();
private:
public:
    Car & getCar();
};

#endif /* JEEPCARFACTORY_H */

