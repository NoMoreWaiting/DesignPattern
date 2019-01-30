/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DivisionCalculation.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 2017年3月29日, 下午8:15
 */

#ifndef DIVISIONCALCULATION_H
#define DIVISIONCALCULATION_H
#include "BaseCalculation.h"

class DivisionCalculation :public BaseCalculation
{
public:
    DivisionCalculation();
    DivisionCalculation(const DivisionCalculation& orig);
    virtual ~DivisionCalculation();
private:

public:
    virtual void getCalculationResult();
};

#endif /* DIVISIONCALCULATION_H */

