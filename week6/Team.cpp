/*********************************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 10/18/2017
 *  * * Description: Project 6.A for CS 161: This is the
 *  * * .cpp class functions file for the Team class.
 **********************************************************/
#include <string>
#include "Team.hpp"
#include "Player.hpp"

using namespace std;

Team::Team(Player point, Player shoot, Player small, Player power, Player center)
{
	setPointGuard(point);
	setShootingGuard(shoot);
	setSmallForward(small);
	setPowerForward(power);
	setCenter(center);
}

void Team:: setPointGuard(Player name)
{
	pointGuard = name;
}

void Team::setShootingGuard(Player name)
{
	shootingGuard = name;
}

void Team::setSmallForward(Player name)
{
	smallForward = name;
}

void Team::setPowerForward(Player name)
{
	powerForward = name;
}

void Team::setCenter(Player name)
{
	center = name;
}

Player Team::getPointGuard()
{
	return pointGuard;
}

Player Team::getShootingGuard()
{
	return shootingGuard;
}

Player Team::getSmallForward()
{
	return smallForward;
}

Player Team::getPowerForward()
{
	return powerForward;
}

Player Team::getCenter()
{
	return center;
}

int Team::totalPoints()
{
	int pointGuardPoints, shootGuardPoints, smallForwardPoints, powerForwardPoints, centerPoints, totalPoints;
	pointGuardPoints = pointGuard.getPoints();
	shootGuardPoints = shootingGuard.getPoints();
	smallForwardPoints = smallForward.getPoints();
	powerForwardPoints = powerForward.getPoints();
	centerPoints = center.getPoints();
	totalPoints = pointGuardPoints + shootGuardPoints + smallForwardPoints + powerForwardPoints + centerPoints;
	return totalPoints;
}