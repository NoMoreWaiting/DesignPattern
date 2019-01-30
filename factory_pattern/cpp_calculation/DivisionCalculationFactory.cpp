/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DivisionCalculationFactory.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月30日, 下午8:18
 */

#include "DivisionCalculationFactory.h"
#include "DivisionCalculation.h"

DivisionCalculationFactory::DivisionCalculationFactory() {
}

DivisionCalculationFactory::DivisionCalculationFactory(const DivisionCalculationFactory& orig) {
}

DivisionCalculationFactory::~DivisionCalculationFactory() {
}

BaseCalculation & DivisionCalculationFactory::getCalculation()
{
    BaseCalculation * baseCalculation = new DivisionCalculation();
    return * baseCalculation;
}