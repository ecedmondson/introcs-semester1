/****************************************
 * * Author: Emily Edmondson
 * * Date: 9/19/17
 * * Description: Project 1.b for CS 161
****************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
  double soil, seeds, fence, totalCost;

  //get soil costs
  cout << "What does the soil cost?\n";
  cin >> soil;

  //get seeds cost
  cout << "What do the flower seeds cost?\n";
  cin >> seeds;

  //get fence cost
  cout << "What does the fence cost?\n";
  cin >> fence;

  //total cost calculation
  totalCost = soil + seeds + fence;

  //display garden costs
  cout << "The total cost is " <<totalCost<<endl;

  return 0;
}
 	
