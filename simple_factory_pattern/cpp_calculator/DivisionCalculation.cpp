/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DivisionCalculation.cpp
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 * 
 * Created on 2017年3月29日, 下午8:15
 */

#include "DivisionCalculation.h"

DivisionCalculation::DivisionCalculation() {
}

DivisionCalculation::DivisionCalculation(const DivisionCalculation& orig) {
}

DivisionCalculation::~DivisionCalculation() {
}

void DivisionCalculation::getCalculationResult()
{
    if(0 == m_num2)
    {
        cout << "divide number can not be zero !" << endl;
    }
    else
    {
        result = m_num1 / m_num2;
    }
}