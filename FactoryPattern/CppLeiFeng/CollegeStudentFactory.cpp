/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CollegeStudentFactory.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月30日, 下午4:06
 */

#include "CollegeStudentFactory.h"

CollegeStudentFactory::CollegeStudentFactory() {
}

CollegeStudentFactory::CollegeStudentFactory(const CollegeStudentFactory& orig) {
}

CollegeStudentFactory::~CollegeStudentFactory() {
}

BaseVolunteer & CollegeStudentFactory::getVolunteerFactory()
{
    CollegeStudent * collegeStudent = new CollegeStudent("学雷锋的大学生");
    return *collegeStudent;
}