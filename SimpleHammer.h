/* 
 * File:   SimpleHammer.h
 * Author: Angela <amd15t@myfsu.edu>
 * 
 * Created on January 26, 2019, 1:47 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a common sword (hitpoint = 50, it does not ignore armor points)
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("simple hammer",25.0) //Calls Weapon(name, hitp
    {
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);
    
};

#endif /* COMMONSWORD_H */