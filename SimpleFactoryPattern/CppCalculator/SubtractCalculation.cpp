/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SubtractCalculation.cpp
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 * 
 * Created on 2017年3月29日, 下午8:03
 */

#include "SubtractCalculation.h"

SubtractCalculation::SubtractCalculation() {
}

SubtractCalculation::SubtractCalculation(const SubtractCalculation& orig) {
}

SubtractCalculation::~SubtractCalculation() {
}

void SubtractCalculation::getCalculationResult()
{
    this->result = this->m_num1 - this->m_num2;
}