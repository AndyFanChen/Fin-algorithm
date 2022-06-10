#include "includes/Simulator.h"
#include <iostream>

int main(){
    Simulator *simulator = new Simulator(100,100,0.07,0.05,1.2,0.2,2,5,10);

    array3d price = simulator->getPrice();

    for (int i = 0; i < 2; i++){
        for (int j =0; j < 5; j++){
            for (int k = 0; k < 10; k++){
                cout << price.at(i).at(j).at(k) << endl;
            }
        }
    }

    delete simulator;

    cout << "Hi" << endl;
    for (int i = 0; i < 2; i++){
        for (int j =0; j < 5; j++){
            for (int k = 0; k < 10; k++){
                cout << price.at(i).at(j).at(k) << endl;
            }
        }
    }

    return 0;
}
