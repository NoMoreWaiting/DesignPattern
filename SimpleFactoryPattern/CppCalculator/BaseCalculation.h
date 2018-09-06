/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BaseCalculation.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 2017年3月29日, 下午7:43
 */

#ifndef BASECALCULATION_H
#define BASECALCULATION_H

#include <iostream>
using namespace std;

class BaseCalculation {
public:
    BaseCalculation();
    BaseCalculation(const BaseCalculation& orig);
    virtual ~BaseCalculation();
protected:
    double m_num1;
    double m_num2;
    double result;

public:
    void setCalculationNum(double num1, double num2);
    virtual void getCalculationResult();
    void printResult();
    
};

#endif /* BASECALCULATION_H */

