/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Sammy Guergachi <sguergachi at gmail.com>
 *
 * Created on 2017年3月29日, 下午7:36
 */

#include <cstdlib>
#include <iostream>

#include "BaseCalculation.h"
#include "CalculationSimpleFactory.h"
#include "AddCalculation.h"

#include "FunctionParameter.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    /* 简单工厂模式 */
    BaseCalculation * baseCalculation;
    CalculationSimpleFactory factory;
    cout<<endl<<"please input num1:";
    double num1;
    cin >>num1;
    cout<<endl<<"please input operator :";
    char character;
    cin >>character;
    cout<<endl<<"please input num2:";
    double num2;
    cin >>num2;
    baseCalculation = factory.getTheCalculationObject(character);
    baseCalculation->setCalculationNum(num1, num2);
    baseCalculation->getCalculationResult();
    baseCalculation->printResult();
    
    
    /*C++要实现类对象的=,需要自己重载=*/
    /*如果需要一个父类对象的时候,可以使用一个子类对象替代*/
    /*不一定需要有指针或引用才行*/   
//    BaseCalculation test01;
//    AddCalculation test02;
//    //这种方法不行的,这样调用根本不合道理
//    test01 = test02;
//    test01.setCalculationNum(20,20);
//    test01.getCalculationResult();
//    test01.printResult();
    
    FunctionParameter functionParameterTest;
    
    /*  C++不使用指针或者引用,编译器不会使用虚函数表指向子类,
     * 不能调用子类对象的方法,只能使用父类对象的方法*/
    AddCalculation addCalculation;
    functionParameterTest.testBaseAndInherit(addCalculation);
    
    AddCalculation *pointerTest = new AddCalculation();
    functionParameterTest.testBaseAndInheritPointer(pointerTest);
    
    AddCalculation addCalculationReference;
    AddCalculation & referenceTest = addCalculationReference;
    /* 只要函数定义的时候形参是引用,编译器就会使用虚函数表进行指向
     * 不必自己定义引用再传参进去,多此一举 */
    functionParameterTest.testBaseAndInheritReference(addCalculationReference);
    functionParameterTest.testBaseAndInheritReference(referenceTest);
       
    return 0;
}

