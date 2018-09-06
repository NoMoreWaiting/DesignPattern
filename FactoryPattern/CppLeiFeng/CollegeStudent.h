/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CollegeStudent.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 下午2:04
 */

#ifndef COLLEGESTUDENT_H
#define COLLEGESTUDENT_H

#include "BaseVolunteer.h"

class CollegeStudent :public BaseVolunteer
{
public:
    CollegeStudent();
    //初始化参数列表,声明的时候不需要,实现的时候需要.  然后加上{};
    CollegeStudent(string collegeStudent);//:BaseVolunteer(collegeStudent){};
    CollegeStudent(const CollegeStudent& orig);
    virtual ~CollegeStudent();
private:

};

#endif /* COLLEGESTUDENT_H */

