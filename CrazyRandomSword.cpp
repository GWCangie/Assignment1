/* 
 * File:   SimpleHammer.cpp
 * Author: Javier <amd15t@my.fsu.esu>
 *  
 */

#include "CrazyRandomSword.h"
#include <iostream>
#include <cstdlib>
 
#include <cmath>
#include <ctime>


double CrazyRandomSword::hit(double armor){
	double damage = 0; 	//damage points 
	
    srand (time(NULL));	//seed random time function
    
    
    
    damage =  floor(armor/3);
    int random_number = (int)damage;
    random_number = rand() % random_number +2;
    damage = random_number;


    if(damage < 0)
        return 0;
    
    return damage;
}

