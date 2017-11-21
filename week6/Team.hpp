/*********************************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 10/18/2017
 *  * * Description: Project 6.A for CS 161: This is the
 *  * * .hpp infrastructure file for the Team class.  
 **********************************************************/
#ifndef Team_hpp
#define Team_hpp
#include <string> 
#include "Player.hpp"

class Team
{
public:
        
    void setPointGuard(Player name);
    Player getPointGuard();
    void setShootingGuard(Player name);
    Player getShootingGuard();
    void setSmallForward(Player name);
    Player getSmallForward();
    void setPowerForward(Player name);
    Player getPowerForward();
    void setCenter(Player name);
    Player getCenter();
    int totalPoints();
	Team(Player point, Player shoot, Player small, Player power, Player center);

	
   
private:
	Player pointGuard;
	Player shootingGuard;
	Player smallForward;
	Player powerForward;
	Player center;
	
};
#endif
    
