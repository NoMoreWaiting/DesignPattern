/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SqrtCalculation.cpp
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 * 
 * Created on 2017年3月29日, 下午8:45
 */

#include "SqrtCalculation.h"
#include <math.h>

SqrtCalculation::SqrtCalculation() {
}

SqrtCalculation::SqrtCalculation(const SqrtCalculation& orig) {
}

SqrtCalculation::~SqrtCalculation() {
}

void SqrtCalculation::getCalculationResult()
{
    result = sqrt(m_num1);
}