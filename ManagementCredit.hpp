/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ManagementCredit.hpp
 * Author: Yuelieth Rodriguez
 *
 * Created on 12 de mayo de 2019, 08:48 PM
 */

#ifndef MANAGEMENTCREDIT_HPP
#define MANAGEMENTCREDIT_HPP
#include <string>
#include <vector>
#include "Credit.hpp"
#include <stdlib.h>

class ManagementCredit {
public:
    ManagementCredit();
    std::vector<Credit> getCredits();
    Credit* findCredit(std::string id);
    bool addCredit(std::string id,double amount,short int term,float rate);
    bool doPay(std::string id,double amount);
    
    virtual ~ManagementCredit();
private:
    std::vector<Credit> credits;

};

#endif /* MANAGEMENTCREDIT_HPP */

