/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AddCalculation.cpp
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 * 
 * Created on 2017年3月29日, 下午7:47
 */

#include "AddCalculation.h"

AddCalculation::AddCalculation() {
}

AddCalculation::AddCalculation(const AddCalculation& orig) {
}

AddCalculation::~AddCalculation() {
}

void AddCalculation::getCalculationResult()
{
    this->result = this->m_num1 + this->m_num2;
}