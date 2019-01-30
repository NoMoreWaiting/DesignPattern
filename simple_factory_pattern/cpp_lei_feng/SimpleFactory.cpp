/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SimpleFactory.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月30日, 下午2:26
 */

#include "SimpleFactory.h"

SimpleFactory::SimpleFactory() {
}

SimpleFactory::SimpleFactory(const SimpleFactory& orig) {
}

SimpleFactory::~SimpleFactory() {
}

BaseVolunteer & SimpleFactory::getVolunteer(string volunteer)
{
    if(volunteer == "学雷锋的大学生")
    {
        CollegeStudent *collegeStudent = new CollegeStudent(volunteer);
        return *collegeStudent;
    }
    else if(volunteer == "社区志愿者")
    {
        CommunityVolunteer *communityVolunteer = new CommunityVolunteer(volunteer);
        return *communityVolunteer;
        /* 这样使用编译报错, 不能将类型为‘BaseVolunteer&’的非 const 引用初始化为类型为‘CommunityVolunteer*’的临时变量*/
//        return new CommunityVolunteer(volunteer);
    }
}