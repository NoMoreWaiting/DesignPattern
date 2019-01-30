/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CalculationFactory.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月30日, 下午4:55
 */

#include "CalculationFactory.h"

CalculationFactory::CalculationFactory() {
}

CalculationFactory::CalculationFactory(const CalculationFactory& orig) {
}

CalculationFactory::~CalculationFactory() {
}

BaseCalculation& CalculationFactory::getCalculation()
{
    BaseCalculation * baseCalculation = new BaseCalculation();
    return * baseCalculation;
}