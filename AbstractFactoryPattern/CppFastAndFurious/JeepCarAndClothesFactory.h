/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   JeepCarAndClothesFactory.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月31日, 上午11:38
 */

#ifndef JEEPCARANDCLOTHESFACTORY_H
#define JEEPCARANDCLOTHESFACTORY_H

#include "AbstractFactory.h"
#include "Car.h"
#include "Clothes.h"

class JeepCarAndClothesFactory :public AbstractFactory
{
public:
    JeepCarAndClothesFactory();
    JeepCarAndClothesFactory(const JeepCarAndClothesFactory& orig);
    virtual ~JeepCarAndClothesFactory();
private:
public:
    Car &getCar();
    Clothes &getClothes();

};

#endif /* JEEPCARANDCLOTHESFACTORY_H */

