/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SuperCar.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 下午9:02
 */

#ifndef SUPERCAR_H
#define SUPERCAR_H

#include "Car.h"


class SuperCar :public Car
{
public:
    SuperCar();
    SuperCar(const SuperCar& orig);
    virtual ~SuperCar();
private:
public:
     void display();   
};

#endif /* SUPERCAR_H */

