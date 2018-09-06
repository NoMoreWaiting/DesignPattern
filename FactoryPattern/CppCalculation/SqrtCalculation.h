/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SqrtCalculation.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 2017年3月29日, 下午8:45
 */

#ifndef SQRTCALCULATION_H
#define SQRTCALCULATION_H
#include "BaseCalculation.h"

class SqrtCalculation :public BaseCalculation
{
public:
    SqrtCalculation();
    SqrtCalculation(const SqrtCalculation& orig);
    virtual ~SqrtCalculation();
private:
public:
    void getCalculationResult();
};

#endif /* SQRTCALCULATION_H */

