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
const int LANES = 4, WIDTH = 6;

int main(int argc, const char * argv[]) {
    srand(time(0));
    deque<Car> lanes[LANES];
    
    lanes[0].push_back(Car());
    lanes[1].push_back(Car());
    lanes[2].push_back(Car());
    lanes[3].push_back(Car());
    
    for (int i = 0; i < LANES; i++){
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
    
    int time = 1;
    bool again = false;
    while (!again) {
        cout << "\nTime: " << time << " Operation: ";
        for (int i = 0; i < LANES; i++) {
            cout << "Lane " << i + 1 << ": ";
            int chance = rand() % 100 + 1;
            if (chance <= 50) {
                cout << "Joined lane: ";
                lanes[i].push_back(Car());
                lanes[i].back().print();
            } else {
                cout << "Car paid: ";
                lanes[i].front().print();
                lanes[i].pop_front();
            }
        }
        for (int i = 0; i < LANES; i++) {
            cout << "Lane " << i + 1 << "Queue: " << endl;
            for
        }
        
        time++;
    }
    
    

    return 0;
}
