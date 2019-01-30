/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SuperCarAndClothesFactory.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月31日, 上午11:21
 */

#include "SuperCarAndClothesFactory.h"
#include "SuperCar.h"
#include "SuperCarClothes.h"

SuperCarAndClothesFactory::SuperCarAndClothesFactory() {
}

SuperCarAndClothesFactory::SuperCarAndClothesFactory(const SuperCarAndClothesFactory& orig) {
}

SuperCarAndClothesFactory::~SuperCarAndClothesFactory() {
}

Car & SuperCarAndClothesFactory::getCar()
{
    Car * car = new SuperCar();
    return *car;
}

Clothes & SuperCarAndClothesFactory::getClothes()
{
    Clothes * clothes = new SuperCarClothes();
    return * clothes;
}