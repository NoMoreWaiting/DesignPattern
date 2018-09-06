/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CommunityVolunteerFactory.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 下午4:09
 */

#ifndef COMMUNITYVOLUNTEERFACTORY_H
#define COMMUNITYVOLUNTEERFACTORY_H

#include "VolunteerFactory.h"

class CommunityVolunteerFactory :public VolunteerFactory
{
public:
    CommunityVolunteerFactory();
    CommunityVolunteerFactory(const CommunityVolunteerFactory& orig);
    virtual ~CommunityVolunteerFactory();
private:
public:
    virtual BaseVolunteer & getVolunteerFactory();

};

#endif /* COMMUNITYVOLUNTEERFACTORY_H */

