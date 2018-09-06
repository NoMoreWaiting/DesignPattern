/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Clothes.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月31日, 上午11:11
 */

#ifndef CLOTHES_H
#define CLOTHES_H
#include <iostream>
using namespace std;

class Clothes {
public:
    Clothes();
    Clothes(const Clothes& orig);
    virtual ~Clothes();
private:
public:
    virtual void display();
};

#endif /* CLOTHES_H */

