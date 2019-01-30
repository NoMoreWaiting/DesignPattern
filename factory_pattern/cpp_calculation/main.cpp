/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: hxw <ageofempires_asia>
 *
 * Created on 2017年3月30日, 下午4:54
 */

#include <cstdlib>
#include <iostream>
#include "BaseCalculation.h"
#include "CalculationFactory.h"
#include "AddCalculation.h"
#include "AddCalculationFactory.h"
#include "SubtractCalculation.h"
#include "SubtractCalculationFactory.h"
#include "MultipyCalculation.h"
#include "MulitipyCalculationFactory.h"
#include "DivisionCalculation.h"
#include "DivisionCalculationFactory.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
//    BaseCalculation baseCalculation1;
    CalculationFactory *calculationFactory;
    
    /*没有用,初始化之后,就是谁的引用,然后=就等调用赋值构造函数*/
//    BaseCalculation base;
//    BaseCalculation& baseCalculation = base;
    
    /*加法运算*/
    calculationFactory = new AddCalculationFactory();
//    //C++中不能直接使用子类的对象给基类的对象赋值,会直接把派生类对象进行截断,只保留继承的部分
//    baseCalculation1 = calculationFactory->getCalculation();
    BaseCalculation& baseCalculation1 = calculationFactory->getCalculation();
    baseCalculation1.setCalculationNum(55, 66);
    baseCalculation1.getCalculationResult();
    baseCalculation1.printResult();
    
    /*减法运算*/
    /*基类的引用使用子类的对象进行初始化后就是子类对象的引用了,
     * 这时如果对这个引用使用另一个对象进行赋值(=),
     * 那就会调用赋值构造函数,需要重载=
     * (这里的我的拷贝构造函数是空的,所以也就没有做任何操作,下面的还是加法)
     * 
     * 但这里的赋值构造函数也有问题,
     * 
     */
    calculationFactory = new SubtractCalculationFactory();
//    baseCalculation1 = calculationFactory->getCalculation();
    BaseCalculation& baseCalculation2 = calculationFactory->getCalculation();
    baseCalculation2.setCalculationNum(555, 666);
    baseCalculation2.getCalculationResult();
    baseCalculation2.printResult();
    

    /*乘法运算*/
    calculationFactory = new MulitipyCalculationFactory();
    BaseCalculation & baseCalculation3 = calculationFactory->getCalculation();
    baseCalculation3.setCalculationNum(5555, 6666);
    baseCalculation3.getCalculationResult();
    baseCalculation3.printResult();
    
    /*除法运算*/
    calculationFactory = new DivisionCalculationFactory();
    BaseCalculation & baseCalculation4 = calculationFactory->getCalculation();
    baseCalculation4.setCalculationNum(55555, 66666);
    baseCalculation4.getCalculationResult();
    baseCalculation4.printResult();
    
    return 0;
}

