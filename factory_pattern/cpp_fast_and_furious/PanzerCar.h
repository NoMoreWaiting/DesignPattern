/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PanzerCar.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月31日, 上午10:41
 */

#ifndef PANZERCAR_H
#define PANZERCAR_H

#include "Car.h"

class PanzerCar :public Car
{
public:
    PanzerCar();
    PanzerCar(const PanzerCar& orig);
    virtual ~PanzerCar();
private:
public:
    void display();
};

#endif /* PANZERCAR_H */

