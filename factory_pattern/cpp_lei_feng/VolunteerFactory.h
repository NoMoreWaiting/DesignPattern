/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VolunteerFactory.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 下午3:58
 */

#ifndef VOLUNTEERFACTORY_H
#define VOLUNTEERFACTORY_H

#include "BaseVolunteer.h"
#include "CollegeStudent.h"
#include "CommunityVolunteer.h"

class VolunteerFactory 
{
public:
    VolunteerFactory();
    VolunteerFactory(const VolunteerFactory& orig);
    virtual ~VolunteerFactory();
private:
    
public:
    virtual BaseVolunteer& getVolunteerFactory();

};

#endif /* VOLUNTEERFACTORY_H */

