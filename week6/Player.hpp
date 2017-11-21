/*********************************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 10/18/2017
 *  * * Description: Project 6.A for CS 161: This is the
 *  * * .hpp infrastructure file for the Player class. 
 **********************************************************/
#ifndef Player_hpp
#define Player_hpp
#include <string> 

using namespace std;

class Player
{
public:
    
    string getName(); 
    void setPoints(int p);
    int getPoints();
    void setRebounds(int r);
    int getRebounds();
    void setAssists(int a);
    int getAssists();
    bool hasMorePointsThan(Player name);
	Player();
	Player(string name, int p, int r, int a);
	
   
private:
	string name; 
	int points;
	int rebounds;
	int assists; 
};
#endif

//Tests: 
    
/*
int main()
{
    Player p1("Charlotte", 24, 10, 7);
    Player p2("Emily", 21, 13, 9);
    Player p3("Anne", 20, 10, 8);
    Player p4("Jane", 19, 10, 10);
    Player p5("Mary", 18, 11, 8);
    p5.setRebounds(12);
    cout << p1.getName() << endl;
    cout << p2.getName() << " has " << p2.getPoints() << "." << endl;
    
}
*/

