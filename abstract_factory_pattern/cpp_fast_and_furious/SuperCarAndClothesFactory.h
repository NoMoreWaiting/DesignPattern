/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SuperCarAndClothesFactory.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月31日, 上午11:21
 */

#ifndef SUPERCARANDCLOTHESFACTORY_H
#define SUPERCARANDCLOTHESFACTORY_H

#include "Car.h"
#include "Clothes.h"
#include "AbstractFactory.h"

class SuperCarAndClothesFactory:public AbstractFactory 
{
public:
    SuperCarAndClothesFactory();
    SuperCarAndClothesFactory(const SuperCarAndClothesFactory& orig);
    virtual ~SuperCarAndClothesFactory();
private:
public:
    Car& getCar();
    Clothes & getClothes();

};

#endif /* SUPERCARANDCLOTHESFACTORY_H */

