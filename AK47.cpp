/* 
 * File:   AK47.h
 * Author: Angela <amd15t@my.fsu.edu>
 *
 * Created on January 26, 2019
 */

#include "AK47.h"

double AK47::hit(double armor) {
    double damage = hitPoints - (armor * 0.25);
    if (damage < 0) {
        return 0;
    }
    return damage;
}
