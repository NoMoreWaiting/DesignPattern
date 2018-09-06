/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CollegeStudentFactory.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 下午4:06
 */

#ifndef COLLEGESTUDENTFACTORY_H
#define COLLEGESTUDENTFACTORY_H
#include "VolunteerFactory.h"

class CollegeStudentFactory:public VolunteerFactory
{
public:
    CollegeStudentFactory();
    CollegeStudentFactory(const CollegeStudentFactory& orig);
    virtual ~CollegeStudentFactory();
private:
    
public:
    virtual BaseVolunteer & getVolunteerFactory();   

};

#endif /* COLLEGESTUDENTFACTORY_H */

