/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MulitipyCalculationFactory.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 下午8:03
 */

#ifndef MULITIPYCALCULATIONFACTORY_H
#define MULITIPYCALCULATIONFACTORY_H
#include "BaseCalculation.h"
#include "CalculationFactory.h"

class MulitipyCalculationFactory :public CalculationFactory
{
public:
    MulitipyCalculationFactory();
    MulitipyCalculationFactory(const MulitipyCalculationFactory& orig);
    virtual ~MulitipyCalculationFactory();
private:
public:
    virtual BaseCalculation & getCalculation();
};

#endif /* MULITIPYCALCULATIONFACTORY_H */

