/*********************************************************
 *  * * Author: Emily Edmondson
 *  * * Date: 10/18/2017
 *  * * Description: Project 5.A for CS 161: This is the
 *  * * .hpp infrastructure file for the Box class. 
 **********************************************************/
#ifndef Box_hpp
#define Box_hpp

class Box
{
public:
    
    void setHeight(double h);
    void setWidth(double w);
    void setLength(double l);
	double calcVolume();
    double calcSurfaceArea();
    Box();
    Box(double w, double h, double l);
   
private:
    double height;
    double width;
    double length;
   
};
#endif
    


