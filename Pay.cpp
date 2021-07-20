/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pay.cpp
 * Author: Yuelieth Rodriguez
 * 
 * Created on 12 de mayo de 2019, 08:48 PM
 */

#include "Pay.hpp"
#include<string>
#include<iostream>
#include <sstream>

Pay::pay(){
    
}
Pay::Pay(short int number,double amount,double interest) {
    this->amount=amount;
    this->interest=interest;
    this->number=number;
}

short int Pay::getNumber(){
    return number;
}
double Pay::getAmount(){
    return amount;
}
double Pay::getInterest(){
    return interest;
}
float Pay::calcRate(){
    return interest;
}
std::string Pay::getParse(std::string& a, double n){
     std::ostringstream output;
    output << n;
    a = output.str();
    return a;
}
std::string Pay::toString(){
    std::string outPut = "";
    std::string n = "";    
    std::string a = "";
    std::string i = "";
    getParse(a,amount);
    getParse(i,interest);
    getParse(n,number);
    outPut += "Pago numero "+n+"  Valor del Pago  " + a+ "  Valor del interes "+i+" ";
    return outPut;
}


Pay::~Pay() {
}

