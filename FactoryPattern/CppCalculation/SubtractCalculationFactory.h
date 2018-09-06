/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SubtractCalculationFactory.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 下午5:03
 */

#ifndef SUBTRACTCALCULATIONFACTORY_H
#define SUBTRACTCALCULATIONFACTORY_H
#include "BaseCalculation.h"
#include "CalculationFactory.h"

class SubtractCalculationFactory :public CalculationFactory
{
public:
    SubtractCalculationFactory();
    SubtractCalculationFactory(const SubtractCalculationFactory& orig);
    virtual ~SubtractCalculationFactory();
private:
public:
    BaseCalculation & getCalculation();
};

#endif /* SUBTRACTCALCULATIONFACTORY_H */

