/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AbstractFactory.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月31日, 上午11:17
 */

#include "AbstractFactory.h"

AbstractFactory::AbstractFactory() {
}

AbstractFactory::AbstractFactory(const AbstractFactory& orig) {
}

AbstractFactory::~AbstractFactory() {
}

Car& AbstractFactory::getCar()
{
    Car * car = new Car();
    return * car;
}

Clothes & AbstractFactory::getClothes()
{
    Clothes * clothes = new Clothes();
    return * clothes;
}