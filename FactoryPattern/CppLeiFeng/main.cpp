/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 下午3:34
 */

#include <cstdlib>

#include "BaseVolunteer.h"
#include "CollegeStudentFactory.h"
#include "CommunityVolunteerFactory.h"
#include "VolunteerFactory.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    BaseVolunteer volunteer;
    VolunteerFactory *factory;
    
    /* 工厂模式将程序判断的任务从简单工厂里面转移到了客户端,
     * 维护了系统代码的开放(增加新的志愿者和志愿者工厂类)封闭(未修改原有工厂)原则
     * 判断逻辑转移到了客户端,客户端承担了太多责任
     *  */
    
    /* CommunityVolunteer */
    factory = new CommunityVolunteerFactory();
    volunteer = factory->getVolunteerFactory();
    volunteer.buyRice();
    volunteer.sweepFloor();
    volunteer.washClothes();
    
    /* CollegeStudent */
    factory = new CollegeStudentFactory();
    volunteer = factory->getVolunteerFactory();
    volunteer.buyRice();
    volunteer.sweepFloor();
    volunteer.washClothes();
    
    
    
    

    return 0;
}

