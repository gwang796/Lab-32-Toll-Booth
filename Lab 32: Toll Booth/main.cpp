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
const int INIT = 2, WIDTH = 6;

int main(int argc, const char * argv[]) {
    deque<Car> parking;
    for (int i = 0; i < INIT; i++){
        parking.push_back(Car());
    }
    
    cout << "Initial Que: " << endl;
    cout << setw(WIDTH);
    parking.front().print();
    cout << setw(WIDTH);
    parking.back().print();
    
    return 0;
}
