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
    
    cout << "Testing operations" << endl;
    for (int i = 0; i < LANES; i++) {
        cout << "Lane: " << i + 1 << endl;
        cout << "Front: ";
        lanes[i].front().print();
        
        cout << "Back: ";
        lanes[i].back().print();
    }
    
    lanes[0].pop_front();
    
    for (int i = 0; i < LANES; i++) {
        cout << "Lane: " << i + 1 << endl;
        if (lanes[i].empty()) {
            cout << " Empty" << endl;
        } else {
            lanes[i].front().print();
        }
    }
    
    
    /*for (int i = 0; i < LANES; i++){
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
    }*/
    
    /*int time = 1;
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
    }*/
    
    

    return 0;
}
