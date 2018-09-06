/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CalculationSimpleFactory.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 2017年3月29日, 下午8:19
 */

#ifndef CALCULATIONSIMPLEFACTORY_H
#define CALCULATIONSIMPLEFACTORY_H
#include "AddCalculation.h"
#include "BaseCalculation.h"
#include "DivisionCalculation.h"
#include "MultipyCalculation.h"
#include "SubtractCalculation.h"
#include "SqrtCalculation.h"


class CalculationSimpleFactory {
public:
    CalculationSimpleFactory();
    CalculationSimpleFactory(const CalculationSimpleFactory& orig);
    virtual ~CalculationSimpleFactory();
private:
    BaseCalculation *baseCalculation;
public:
    BaseCalculation* getTheCalculationObject(char operateCharacter);

};

#endif /* CALCULATIONSIMPLEFACTORY_H */

