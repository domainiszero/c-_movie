/*
 * Movie.h
 *
 *  Created on: Jun 29, 2016
 *      Author: Mun Chan
 */

#ifndef MOVIE_H_
#define MOVIE_H_
#include <string>
using namespace std;

class Movie{
private:
	string name;
	int year;
	string rating;

public:
	//constructors
	Movie();
	Movie(string, int, string);

	//destructor
	~Movie();

	//accessor methods
	string getName();
	int getYear();
	string getRating();

	//mutator methods
	void setName(string);
	void setYear(int);
	void setRating(string);
};



#endif /* MOVIE_H_ */
