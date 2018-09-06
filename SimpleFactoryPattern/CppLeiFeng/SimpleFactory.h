/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SimpleFactory.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 下午2:26
 */

#ifndef SIMPLEFACTORY_H
#define SIMPLEFACTORY_H

#include "BaseVolunteer.h"
#include "CollegeStudent.h"
#include "CommunityVolunteer.h"

class SimpleFactory {
public:
    SimpleFactory();
    SimpleFactory(const SimpleFactory& orig);
    virtual ~SimpleFactory();
private:
    
public:
    BaseVolunteer &getVolunteer(string volunteer);

};

#endif /* SIMPLEFACTORY_H */

