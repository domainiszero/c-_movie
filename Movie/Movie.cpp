/*
Movie.cpp
Jun 29, 2016
Mun Chan
*/
#include <iostream>
#include "Movie.h"
using namespace std;

//default constructor
Movie::Movie(){
	name = "Mun";
	year = 1993;
	rating = "G";
}

Movie::Movie(string Name, int Year, string Rating){
	name = Name;
	year = Year;
	rating = Rating;
}

//destructor method
Movie::~Movie(){
	cout<<"Movie class is destroyed"<<endl;
}

//accessor method
string Movie::getName(){
	return name;
}
int Movie::getYear(){
	return year;
}
string Movie::getRating(){
	return rating;
}

//mutator method
void Movie::setName(string n){
	name = n;
}
void Movie::setYear(int y){
	year = y;
}
void Movie::setRating(string r){
	rating = r;
}
