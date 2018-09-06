/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 下午8:42
 */

#include <cstdlib>
#include "Car.h"
#include "CarFactory.h"
#include "SuperCarFactory.h"
#include "JeepCarFactory.h"
#include "PanzerCarFactory.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

//    /*子类函数中调用基类被覆盖的同名函数时,使用   类名::同名方法名   来调用,不需要对象. */
//    SuperCar superCar;
//    superCar.display();
        
    CarFactory * carFactory;
    
    /*开跑车*/
    carFactory = new SuperCarFactory();
    Car &car1 = carFactory->getCar();
    car1.display();
    
    /*开越野车*/
    carFactory = new JeepCarFactory();
    Car &car2 = carFactory->getCar();
    car2.display();
    
    /*开装甲车*/
    carFactory = new PanzerCarFactory();
    Car &car3 = carFactory->getCar();
    car3.display();
    
    /*还缺少自制的c++反射机制,根据字符串名,生成对应的对象名(不单单是简单工厂)*/
    
    
    return 0;
}

