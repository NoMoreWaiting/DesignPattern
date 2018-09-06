/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BaseVolunteer.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 上午11:25
 */

#ifndef BASEVOLUNTEER_H
#define BASEVOLUNTEER_H
#include <iostream>

using namespace std;

class BaseVolunteer {
public:
    BaseVolunteer();
    BaseVolunteer(string name);
    BaseVolunteer(const BaseVolunteer& orig);
    virtual ~BaseVolunteer();
private:
    string volunteer;
public:
    void sweepFloor();
    void washClothes();
    void buyRice();

};

#endif /* BASEVOLUNTEER_H */

