/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CollegeStudent.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月30日, 下午2:04
 */

#include "CollegeStudent.h"

CollegeStudent::CollegeStudent() {
}

CollegeStudent::CollegeStudent(const CollegeStudent& orig) {
}

//初始化参数列表,声明的时候不需要,实现的时候需要.  然后加上{};
CollegeStudent::CollegeStudent(string collegeStudent):BaseVolunteer(collegeStudent){

};

CollegeStudent::~CollegeStudent() {
}

