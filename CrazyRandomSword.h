/* 
 * File:   SimpleHammer.h
 * Author: Angela <amd15t@myfsu.edu>
 * 
 * Created on January 26, 2019, 1:47 PM
 */

#include <string>
#include "Weapon.h"
#include <cstdlib>
#include <ctime>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a common sword (hitpoint = 50, it does not ignore armor points)
 */
class CrazyRandomSword : public Weapon {
public:
    
    CrazyRandomSword() : Weapon("crazy random sword",random_gen()) //Calls Weapon(name, hitp
    {
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

private:
	// function to provide random number				
	int random_gen(){
		srand(time(NULL));
		int num = rand() %100 + 7;
	}
    
};

#endif /* CRAZYRANDOMSWORD_H */