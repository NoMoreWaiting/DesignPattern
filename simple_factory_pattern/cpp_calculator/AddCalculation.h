/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AddCalculation.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 2017年3月29日, 下午7:47
 */

#ifndef ADDCALCULATION_H
#define ADDCALCULATION_H
#include "BaseCalculation.h"

class AddCalculation :public BaseCalculation
{
public:
    AddCalculation();
    AddCalculation(const AddCalculation& orig);
    virtual ~AddCalculation();
private:
    
public:
    void getCalculationResult();


};

#endif /* ADDCALCULATION_H */

