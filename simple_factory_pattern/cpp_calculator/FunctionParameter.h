/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FunctionParameter.h
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 2017年3月30日, 上午10:47
 */

#ifndef FUNCTIONPARAMETER_H
#define FUNCTIONPARAMETER_H

#include "BaseCalculation.h"

class FunctionParameter {
public:
    FunctionParameter();
    FunctionParameter(const FunctionParameter& orig);
    virtual ~FunctionParameter();
private:
    
public:
    static void testBaseAndInherit(BaseCalculation baseCalculation);
    static void testBaseAndInheritPointer(BaseCalculation *baseCalculation);
    static void testBaseAndInheritReference(BaseCalculation & baseCalculation);

};

#endif /* FUNCTIONPARAMETER_H */

