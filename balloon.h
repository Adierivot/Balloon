/**
* A class to represent a hot-air balloon. Balloon objects have a name and an * * altitude.
*/
#ifndef _balloon_h
#define _balloon_h

#include <iostream>
#include <string>

using namespace std; 

class balloon{
private: 
	String name; int altitude; 
public:
	balloon(string theName, int theAltitude)
	{name = theName; altitude = theAltitude;}

	void ascentTo(int newAlt)
	{
		if(newAlt > altitude)
			altitude = newAlt;
	}
	
	void descendTo(int newAlt)
	{
		if(newAlt <0){
			altitude = 0;}
		else if(newAlt < altitude)
	 		altitude = newAlt;
	}

	void adjustAltitude(int change)
	{
		if(change + altitude < 0){
			altitude = 0;}
		else
			altitude = altitude + change;
	}

	String getName(){return name;}
	int getAltitude(){return altitude;}
};
#endif
