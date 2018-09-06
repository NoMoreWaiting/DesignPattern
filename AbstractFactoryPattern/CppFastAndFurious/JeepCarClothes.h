/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   JeepCarClothes.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月31日, 上午11:36
 */

#ifndef JEEPCARCLOTHES_H
#define JEEPCARCLOTHES_H

#include "Clothes.h"

class JeepCarClothes :public Clothes
{
public:
    JeepCarClothes();
    JeepCarClothes(const JeepCarClothes& orig);
    virtual ~JeepCarClothes();
private:
public:
    void display();

};

#endif /* JEEPCARCLOTHES_H */

