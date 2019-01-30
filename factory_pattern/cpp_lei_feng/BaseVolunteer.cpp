/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BaseVolunteer.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月30日, 上午11:25
 */

#include "BaseVolunteer.h"

BaseVolunteer::BaseVolunteer() {
    this->volunteer = "leifeng";
}

BaseVolunteer::BaseVolunteer(string name)
{
    this->volunteer = name;
}

BaseVolunteer::BaseVolunteer(const BaseVolunteer& orig) {
}

BaseVolunteer::~BaseVolunteer() {
}

void BaseVolunteer::sweepFloor()
{
    cout<<volunteer<<" 扫地 "<<endl;
}

void BaseVolunteer::washClothes()
{
    cout<<volunteer<<" 洗衣服 "<<endl;
}

void BaseVolunteer::buyRice()
{
    cout<<volunteer<<" 买米 "<<endl;
}
