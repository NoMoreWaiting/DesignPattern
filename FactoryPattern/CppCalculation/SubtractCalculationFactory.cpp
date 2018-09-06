/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SubtractCalculationFactory.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月30日, 下午5:03
 */

#include "SubtractCalculationFactory.h"
#include "SubtractCalculation.h"

SubtractCalculationFactory::SubtractCalculationFactory() {
}

SubtractCalculationFactory::SubtractCalculationFactory(const SubtractCalculationFactory& orig) {
}

SubtractCalculationFactory::~SubtractCalculationFactory() {
}

BaseCalculation & SubtractCalculationFactory::getCalculation()
{
    SubtractCalculation * subtractCalculation = new SubtractCalculation();
    return * subtractCalculation;
}