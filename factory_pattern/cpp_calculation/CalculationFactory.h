/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CalculationFactory.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 下午4:55
 */

#ifndef CALCULATIONFACTORY_H
#define CALCULATIONFACTORY_H

#include "BaseCalculation.h"


class CalculationFactory {
public:
    CalculationFactory();
    CalculationFactory(const CalculationFactory& orig);
    virtual ~CalculationFactory();
private:
    
public:
    virtual BaseCalculation & getCalculation();

};

#endif /* CALCULATIONFACTORY_H */

