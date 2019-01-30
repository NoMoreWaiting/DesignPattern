/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CommunityVolunteerFactory.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月30日, 下午4:09
 */

#include "CommunityVolunteerFactory.h"

CommunityVolunteerFactory::CommunityVolunteerFactory() {
}

CommunityVolunteerFactory::CommunityVolunteerFactory(const CommunityVolunteerFactory& orig) {
}

CommunityVolunteerFactory::~CommunityVolunteerFactory() {
}

BaseVolunteer & CommunityVolunteerFactory::getVolunteerFactory()
{
    CommunityVolunteer * communityVolunteer = new CommunityVolunteer("社区志愿者");
    return * communityVolunteer;
}