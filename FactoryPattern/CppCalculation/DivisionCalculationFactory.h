/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DivisionCalculationFactory.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 下午8:18
 */

#ifndef DIVISIONCALCULATIONFACTORY_H
#define DIVISIONCALCULATIONFACTORY_H
#include "BaseCalculation.h"
#include "CalculationFactory.h"

class DivisionCalculationFactory :public CalculationFactory
{
public:
    DivisionCalculationFactory();
    DivisionCalculationFactory(const DivisionCalculationFactory& orig);
    virtual ~DivisionCalculationFactory();
private:

public:
    virtual BaseCalculation & getCalculation();
};

#endif /* DIVISIONCALCULATIONFACTORY_H */

