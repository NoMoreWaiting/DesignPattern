/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月31日, 上午11:02
 */

#include <cstdlib>
#include "Car.h"
#include "Clothes.h"
#include "AbstractFactory.h"
#include "SuperCarAndClothesFactory.h"
#include "JeepCarAndClothesFactory.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    AbstractFactory *abstractFactory;
    
    /*范.迪塞尔穿超级汽车服,开跑车*/
    abstractFactory = new SuperCarAndClothesFactory();
    Car & car1 = abstractFactory->getCar();
    Clothes & clothes1 = abstractFactory->getClothes();
    car1.display();
    clothes1.display();
    
    /*范.迪塞尔穿越野车服,开越野车*/
    abstractFactory = new JeepCarAndClothesFactory();
    Car & car2 = abstractFactory->getCar();
    Clothes & clothes2 = abstractFactory->getClothes();
    car2.display();
    clothes2.display();
    
    
    return 0;
}

