//
//  main.cpp
//  Lab 32: Toll Booth
//
//  Created by Guo An Wang on 11/14/25.
//
#include "Car.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

#include <deque>
const int INIT = 2, WIDTH = 6;

int main(int argc, const char * argv[]) {
    srand(time(0));
    deque<Car> parking;
    for (int i = 0; i < INIT; i++){
        parking.push_back(Car());
    }
    cout << "Initial Queue: " << endl;
    cout << setw(WIDTH);
    parking.front().print();
    cout << setw(WIDTH);
    parking.back().print();
    
    int time = 1;
    while (!parking.empty()) {
        cout << "\nTime: " << time << " Operation: ";
        int chance = rand() % 100 + 1;
        if (chance <= 45) {
            cout << "Joined lane: ";
            parking.push_back(Car());
            parking.back().print();
        } else {
            cout << "Car paid: ";
            parking.front().print();
            parking.pop_front();
        }

        cout << "Queue: " << endl;
        if (parking.empty()) {
            cout << setw(10) << "Empty" << endl;
        } else {
            for (int i = 0; i < parking.size(); i++) {
                cout << setw(WIDTH);
                parking[i].print();
            }
        }
        time++;
    }

    return 0;
}
