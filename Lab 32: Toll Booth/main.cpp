//
//  main.cpp
//  COMSC- 210 | Lab 32: Toll Booth | Guo An Wang
//  IDE: Xcode
//  Created by Guo An Wang on 11/14/25.
//
#include "Car.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <deque>
const int LANES = 4, RUNS = 20, WIDTH = 6;
const int JOIN = 39, PAY = 85, SWITCH = 100;

int main(int argc, const char * argv[]) {
    srand(time(0));
    deque<Car> lanes[LANES];
    
    for (int i = 0; i < LANES; i++) {
        lanes[i].push_back(Car());
        lanes[i].push_back(Car());
    }
    
    cout << "Initial Queue: " << endl;
    for (int i = 0;  i < LANES; i++) {
        cout << "Lane " << i + 1 << endl;
        cout << setw(WIDTH);
        lanes[i].front().print();
        cout << setw(WIDTH);
        lanes[i].back().print();
    }
    
    for (int time = 0; time < RUNS; time++) {
        cout << "\nTime: " << time + 1 << endl;
        for (int i = 0; i < LANES; i++) {
            cout << "Lane " << i + 1 << ": ";
            int chance = rand() % 100 + 1;
            if (lanes[i].empty()) {
                if (chance <= JOIN) {
                    cout << "Joined: ";
                    lanes[i].push_back(Car());
                    lanes[i].back().print();
                } else {
                    cout << "No Action" << endl;
                }
            } else {
                if (chance <= JOIN) {
                    cout << "Joined: ";
                    lanes[i].push_back(Car());
                    lanes[i].back().print();
                } else if (chance <= PAY) {
                    cout << "Paid: ";
                    lanes[i].front().print();
                    lanes[i].pop_front();
                } else {
                    cout << "Switched: ";
                    lanes[i].back().print();
                    int newLane = rand() % LANES;
                    while (newLane == i) { //possibility that if newLane is the same lane that the car chosen is from
                        int newLane = rand() % LANES;
                    }
                    
                }
            }
        }
        
        for (int i = 0; i < LANES; i++) {
            cout << "Lane " << i + 1 << " Queue: " << endl;
            if (lanes[i].empty()) {
                cout << setw(10) << "Empty" << endl;
            } else {
                for (auto &c : lanes[i]){
                    cout << setw(WIDTH);
                    c.print();
                }
            }
        }
    }

    return 0;
}
