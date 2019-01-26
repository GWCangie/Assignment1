/* 
 * File:   AK47.h
 * Author: Angela <amd15t@my.fsu.edu>
 *
 * Created on January 26, 2019
 */

#include <string>
#include "Weapon.h"
#include <cstdlib>
#include <ctime>

#ifndef AK47_H
#define AK47_H

/**
 * Defines the behavior of a common spear (hitpoint = 40, ignores 20% of 
 * armor points)
 */
class AK47 : public Weapon {
public:

    AK47() : Weapon("ak47", random_gen()) { //Calls Weapon(name, hitpoints) constructor with values Common Spear and 40.0
    }

    virtual ~AK47() {};

    virtual double hit(double armor);


private:
	// function to provide random number				
	int random_gen(){
		srand(time(NULL));
		int num = rand() %75 + 7;
		return num;
	}   

};

#endif /* COMMONSPEAR_H */

