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
    srand(time(0));
    deque<Car> parking;
    bool again = true;
    for (int i = 0; i < INIT; i++){
        parking.push_back(Car());
    }
    cout << "Initial Que: " << endl;
    cout << setw(WIDTH);
    parking.front().print();
    cout << setw(WIDTH);
    parking.back().print();
    
    int time = 1;
    while (again) {
        cout << "Time: " << time << " Operation: ";
        int chance = rand() % 100 + 1;
        if (chance <= 45) {
            parking.push_back(Car());
        } else {
            parking.pop_front();
        }
        for (int i = 0; i < parking.size(); i++) {
            parking[i].print();
        }
    }
    
    return 0;
}
