/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SuperCarClothes.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月31日, 上午11:14
 */

#ifndef SUPERCARCLOTHES_H
#define SUPERCARCLOTHES_H
#include "Clothes.h"

class SuperCarClothes :public Clothes
{
public:
    SuperCarClothes();
    SuperCarClothes(const SuperCarClothes& orig);
    virtual ~SuperCarClothes();
private:
public:
    void display();
};

#endif /* SUPERCARCLOTHES_H */

