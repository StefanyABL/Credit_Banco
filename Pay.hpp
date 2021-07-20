/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pay.hpp
 * Author: Yuelieth Rodriguez
 *
 * Created on 12 de mayo de 2019, 08:47 PM
 */

#ifndef PAY_HPP
#define PAY_HPP
#include <string>

class Pay {
    private:
       short int number;
       double amount;
       float interest;
       float calcRate();
public:
    pay();
    Pay(short int,double,double);
    short int getNumber();
    double getAmount();
    double getInterest();
    std::string toString();
    std::string getParse(std::string&, double);
    virtual ~Pay();
};

#endif /* PAY_HPP */

