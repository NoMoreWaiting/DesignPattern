/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AbstractFactory.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月31日, 上午11:17
 */

#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "Car.h"
#include "Clothes.h"

class AbstractFactory {
public:
    AbstractFactory();
    AbstractFactory(const AbstractFactory& orig);
    virtual ~AbstractFactory();
private:
public:
    virtual Car & getCar();
    virtual Clothes & getClothes();
};

#endif /* ABSTRACTFACTORY_H */

