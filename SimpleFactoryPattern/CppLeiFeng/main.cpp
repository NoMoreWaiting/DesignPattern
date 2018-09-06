/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 上午11:23
 */

#include <cstdlib>
#include <iostream>
#include "BaseVolunteer.h"
#include "SimpleFactory.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    BaseVolunteer baseVolunteer;
    SimpleFactory simpleFactory;
    
    baseVolunteer = simpleFactory.getVolunteer("学雷锋的大学生");
    baseVolunteer.buyRice();
    baseVolunteer.sweepFloor();
    baseVolunteer.washClothes();
    
    baseVolunteer = simpleFactory.getVolunteer("社区志愿者");
    baseVolunteer.buyRice();
    baseVolunteer.sweepFloor();
    baseVolunteer.washClothes();
      
    return 0;
}

