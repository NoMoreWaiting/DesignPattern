/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   JeepCarAndClothesFactory.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月31日, 上午11:38
 */

#include "JeepCarAndClothesFactory.h"
#include "JeepCar.h"
#include "JeepCarClothes.h"

JeepCarAndClothesFactory::JeepCarAndClothesFactory() {
}

JeepCarAndClothesFactory::JeepCarAndClothesFactory(const JeepCarAndClothesFactory& orig) {
}

JeepCarAndClothesFactory::~JeepCarAndClothesFactory() {
}

Car & JeepCarAndClothesFactory::getCar()
{
    Car * car = new JeepCar();
    return *car;
}

Clothes & JeepCarAndClothesFactory::getClothes()
{
    Clothes * clothes = new JeepCarClothes();
    return * clothes;
}