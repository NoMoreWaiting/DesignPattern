/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SubtractCalculation.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 2017年3月29日, 下午8:03
 */

#ifndef SUBTRACTCALCULATION_H
#define SUBTRACTCALCULATION_H
#include "BaseCalculation.h"

class SubtractCalculation:public BaseCalculation
{
public:
    SubtractCalculation();
    SubtractCalculation(const SubtractCalculation& orig);
    virtual ~SubtractCalculation();
private:
    
public:
    virtual void getCalculationResult();


};

#endif /* SUBTRACTCALCULATION_H */

