/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PanzerCarFactory.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月31日, 上午10:43
 */

#include "PanzerCarFactory.h"
#include "PanzerCar.h"

PanzerCarFactory::PanzerCarFactory() {
}

PanzerCarFactory::PanzerCarFactory(const PanzerCarFactory& orig) {
}

PanzerCarFactory::~PanzerCarFactory() {
}

Car& PanzerCarFactory::getCar()
{
    Car * car = new PanzerCar();
    return * car;
}