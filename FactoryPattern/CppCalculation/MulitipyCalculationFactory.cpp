/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MulitipyCalculationFactory.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月30日, 下午8:03
 */

#include "MulitipyCalculationFactory.h"
#include "MultipyCalculation.h"

MulitipyCalculationFactory::MulitipyCalculationFactory() {
}

MulitipyCalculationFactory::MulitipyCalculationFactory(const MulitipyCalculationFactory& orig) {
}

MulitipyCalculationFactory::~MulitipyCalculationFactory() {
}

BaseCalculation & MulitipyCalculationFactory::getCalculation()
{
    BaseCalculation * baseCalculation = new MultipyCalculation();
    return *baseCalculation;
}