/*
 * 3_main.cpp
 *
 *  Created on: Aug 16, 2019
 *      Author: user1
 */



#include <string>
#include <iostream>
#include "3_Creature.h"
#include "3_Point2d.h"



int main()
{
    std::cout << "Enter a name for your creature: ";
    std::string name;
    std::cin >> name;
    Creature creature(name, Point2D(4, 7));

    while (1)
    {
        // print the creature's name and location
        std::cout << creature << '\n';

        std::cout << "Enter new X location for creature (-1 to quit): ";
        int x=0;
        std::cin >> x;
        if (x == -1)
            break;

        std::cout << "Enter new Y location for creature (-1 to quit): ";
        int y=0;
        std::cin >> y;
        if (y == -1)
            break;

        creature.moveTo(x, y);
        }

    return 0;
}
