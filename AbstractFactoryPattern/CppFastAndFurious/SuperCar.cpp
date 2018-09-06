/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SuperCar.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月30日, 下午9:02
 */

#include "SuperCar.h"


SuperCar::SuperCar() {
}

SuperCar::SuperCar(const SuperCar& orig) {
}

SuperCar::~SuperCar() {
}

void SuperCar::display()
{
    /*基类的方法中可以直接通过  (基类类名::函数名)   调用基类的方法,
     * 不管覆不覆盖,
     * 但是私有方法或者变量依旧不可以访问*/
    Car::display();
    Car::show();
//    Car::showPrivate();
    cout << "this is supercar, beautiful,can run fast;"<<endl;
    cout << "范.迪赛尔 下一场开超级跑车" << endl;
}