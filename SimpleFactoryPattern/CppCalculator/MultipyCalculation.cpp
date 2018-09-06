/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MultipyCalculation.cpp
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 * 
 * Created on 2017年3月29日, 下午8:12
 */

#include "MultipyCalculation.h"

MultipyCalculation::MultipyCalculation() {
}

MultipyCalculation::MultipyCalculation(const MultipyCalculation& orig) {
}

MultipyCalculation::~MultipyCalculation() {
}

void MultipyCalculation::getCalculationResult()
{
    this->result = this->m_num1 * this->m_num2;
}
