/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AddCalculationFactory.cpp
 * Author: hxw <ageofempires_asia>
 * 
 * Created on 2017年3月30日, 下午4:59
 */

#include "AddCalculationFactory.h"
#include "AddCalculation.h"

AddCalculationFactory::AddCalculationFactory() {
}

AddCalculationFactory::AddCalculationFactory(const AddCalculationFactory& orig) {
}

AddCalculationFactory::~AddCalculationFactory() {
}

BaseCalculation & AddCalculationFactory::getCalculation()
{
    AddCalculation * addCalculation = new AddCalculation();
    return *addCalculation;
}