/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   JeepCar.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月31日, 上午10:31
 */

#ifndef JEEPCAR_H
#define JEEPCAR_H

#include "Car.h"


class JeepCar :public Car
{
public:
    JeepCar();
    JeepCar(const JeepCar& orig);
    virtual ~JeepCar();
private:
public:
    void display();
};

#endif /* JEEPCAR_H */

