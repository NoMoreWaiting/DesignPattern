/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VolunteerFactory.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月30日, 下午3:58
 */

#include "VolunteerFactory.h"

VolunteerFactory::VolunteerFactory() {
}

VolunteerFactory::VolunteerFactory(const VolunteerFactory& orig) {
}

VolunteerFactory::~VolunteerFactory() {
}

BaseVolunteer& VolunteerFactory::getVolunteerFactory()
{
    BaseVolunteer * baseVolunteer = new BaseVolunteer();
    return *baseVolunteer;
}