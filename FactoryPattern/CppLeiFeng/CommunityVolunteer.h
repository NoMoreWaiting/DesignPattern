/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CommunityVolunteer.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 下午2:24
 */

#ifndef COMMUNITYVOLUNTEER_H
#define COMMUNITYVOLUNTEER_H
#include "BaseVolunteer.h"


class CommunityVolunteer :public BaseVolunteer
{
public:
    CommunityVolunteer();
    CommunityVolunteer(string communityVolunteer);
    CommunityVolunteer(const CommunityVolunteer& orig);
    virtual ~CommunityVolunteer();
private:

};

#endif /* COMMUNITYVOLUNTEER_H */

