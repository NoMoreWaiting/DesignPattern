/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CalculationSimpleFactory.cpp
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 * 
 * Created on 2017年3月29日, 下午8:19
 */

#include "CalculationSimpleFactory.h"

CalculationSimpleFactory::CalculationSimpleFactory() {
    baseCalculation = NULL;
}

CalculationSimpleFactory::CalculationSimpleFactory(const CalculationSimpleFactory& orig) {
}

CalculationSimpleFactory::~CalculationSimpleFactory() {
}

BaseCalculation* CalculationSimpleFactory::getTheCalculationObject(char operateCharacter)
{
    switch(operateCharacter)
    {
        case '+':
            baseCalculation = new AddCalculation();
            break;
        case '-':
            baseCalculation = new SubtractCalculation();
            break;
        case '*':
            baseCalculation = new MultipyCalculation();
            break;
        case '/':
            baseCalculation = new DivisionCalculation();
            break;
        case '&':
            baseCalculation = new SqrtCalculation();
        default:
            break;            
    }
    return baseCalculation;
}