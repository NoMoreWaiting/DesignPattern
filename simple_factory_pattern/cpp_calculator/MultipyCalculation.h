/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MultipyCalculation.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 2017年3月29日, 下午8:12
 */

#ifndef MULTIPYCALCULATION_H
#define MULTIPYCALCULATION_H
#include "BaseCalculation.h"

class MultipyCalculation :public BaseCalculation
{
public:
    MultipyCalculation();
    MultipyCalculation(const MultipyCalculation& orig);
    virtual ~MultipyCalculation();
private:
    
public:

    virtual void getCalculationResult();

        
};

#endif /* MULTIPYCALCULATION_H */

