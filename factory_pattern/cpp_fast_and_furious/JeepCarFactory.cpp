/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   JeepCarFactory.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月31日, 上午10:33
 */

#include "JeepCarFactory.h"
#include "JeepCar.h"

JeepCarFactory::JeepCarFactory() {
}

JeepCarFactory::JeepCarFactory(const JeepCarFactory& orig) {
}

JeepCarFactory::~JeepCarFactory() {
}

Car & JeepCarFactory::getCar()
{
    Car * car = new JeepCar();
    return *car;
}