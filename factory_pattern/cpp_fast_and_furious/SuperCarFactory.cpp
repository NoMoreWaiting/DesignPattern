/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SuperCarFactory.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月31日, 上午9:32
 */

#include "SuperCarFactory.h"
#include "SuperCar.h"


SuperCarFactory::SuperCarFactory(){
}

SuperCarFactory::SuperCarFactory(const SuperCarFactory& orig) {
}

SuperCarFactory::~SuperCarFactory() {
}

Car& SuperCarFactory::getCar()
{
    /* new SuperCar 之后出来的是一个地址, 
     * Car& car 定义一个Car类型的引用,但却用地址来初始化,所以报错 */
//    Car& car = new SuperCar();
    return *(new SuperCar());
}