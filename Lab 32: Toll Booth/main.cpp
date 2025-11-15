//
//  main.cpp
//  Lab 32: Toll Booth
//
//  Created by Guo An Wang on 11/14/25.
//
#include "Car.h"
#include <iostream>
#include <ctime>
#include <deque>
const int INIT = 2;

int main(int argc, const char * argv[]) {
    deque<Car> parking;
    for (int i = 0; i < INIT; i++){
        parking.push_back(new Car);
    }
    
    for (int i = 0; i < parking.size(); i++) {
        parking[i]->print();
    }
    return 0;
}
