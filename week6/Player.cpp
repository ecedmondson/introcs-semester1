/*********************************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 10/18/2017
 *  * * Description: Project 6.A for CS 161: This is the
 *  * * .cpp class functions file for the Player class.
 **********************************************************/
#include <string>
#include "Player.hpp"

using namespace std;

//Default Constructor
Player::Player()
{
	name = "";
	setPoints(-1);
	setRebounds(-1);
	setAssists(-1);
}
// Constructor for data things
Player::Player(string n, int p, int r, int a)
{
	name = n;
	setPoints(p);
	setRebounds(r);
	setAssists(a);
}

string Player::getName()
{
	return name;
}
	
void Player::setPoints(int p)
{
	points = p;
}

int Player::getPoints()
{
	return points;
}

void Player::setRebounds(int r)
{
	rebounds = r;
}

int Player::getRebounds()
{
	return rebounds;
}
	
void Player::setAssists(int a)
{
	assists = a;
}

int Player::getAssists()
{
	return assists;
}

bool Player::hasMorePointsThan(Player name)
{
	if ( points > name.getPoints() )
		return true;
	else
		return false;
}


