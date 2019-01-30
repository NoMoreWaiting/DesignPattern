/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FunctionParameter.cpp
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 * 
 * Created on 2017年3月30日, 上午10:47
 */

#include "FunctionParameter.h"

FunctionParameter::FunctionParameter() {
}

FunctionParameter::FunctionParameter(const FunctionParameter& orig) {
}

FunctionParameter::~FunctionParameter() {
}

void FunctionParameter::testBaseAndInherit(BaseCalculation baseCalculation)
{
    baseCalculation.setCalculationNum(11,55);
    baseCalculation.getCalculationResult();
    baseCalculation.printResult();
}

void FunctionParameter::testBaseAndInheritPointer(BaseCalculation *baseCalculation)
{
    baseCalculation->setCalculationNum(111,555);
    baseCalculation->getCalculationResult();
    baseCalculation->printResult();
}

void FunctionParameter::testBaseAndInheritReference(BaseCalculation& baseCalculation)
{
    baseCalculation.setCalculationNum(1111,5555);
    baseCalculation.getCalculationResult();
    baseCalculation.printResult();
}