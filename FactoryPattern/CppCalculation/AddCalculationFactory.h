/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AddCalculationFactory.h
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 下午4:59
 */

#ifndef ADDCALCULATIONFACTORY_H
#define ADDCALCULATIONFACTORY_H
#include "CalculationFactory.h"
#include "BaseCalculation.h"

class AddCalculationFactory :public CalculationFactory
{
public:
    AddCalculationFactory();
    AddCalculationFactory(const AddCalculationFactory& orig);
    virtual ~AddCalculationFactory();
private:
public:
      BaseCalculation & getCalculation();  

};

#endif /* ADDCALCULATIONFACTORY_H */

