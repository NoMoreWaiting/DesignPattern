/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BaseCalculation.cpp
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 * 
 * Created on 2017年3月29日, 下午7:43
 */

#include "BaseCalculation.h"

BaseCalculation::BaseCalculation() {
    m_num1 = 1;
    m_num2 = 1;
    result = 1;
}

BaseCalculation::BaseCalculation(const BaseCalculation& orig) {

}

BaseCalculation::~BaseCalculation() {
}

BaseCalculation& BaseCalculation::operator=(const BaseCalculation&orig)
{
    
}


void BaseCalculation::setCalculationNum(double num1, double num2)
{
    this->m_num1 = num1;
    this->m_num2 = num2;
}

void BaseCalculation::printResult()
{
    cout << "result is " << this->result <<endl;
}

void BaseCalculation::getCalculationResult()
{
    result = 0;
}