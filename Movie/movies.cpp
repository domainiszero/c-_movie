/*
movie.cpp
Jun 29, 2016
Mun Chan
*/
#include <iostream>
#include <string>
#include "Movie.h"
using namespace std;

void printMovie(Movie);

int main()
{
	string movie, rating;
	int year = 1990;

	Movie movie1;
	cout<<"Enter your 1st favorite movie: "<<endl;
	cin>>movie;
	movie1.setName(movie);
	cout<<"Enter the year: "<<endl;
	cin>>year;
	while (year <= 0 || year >= 2018){
		cout<<"Invalid Year!"<<endl;
		cout<<"Enter another year: "<<endl;
		cin>>year;
	}

		movie1.setYear(year);
	cout<<"Enter the rating"<<endl;
	cin>>rating;
	movie1.setRating(rating);

	Movie movie2;
	cout<<"Enter your 2nd favorite movie: "<<endl;
	cin>>movie;
	movie2.setName(movie);
	cout<<"Enter the year: "<<endl;
	cin>>year;
	while (year <= 0 || year >= 2018){
		cout<<"Invalid Year!"<<endl;
		cout<<"Enter another year: "<<endl;
		cin>>year;
	}
		movie2.setYear(year);

	cout<<"Enter the rating"<<endl;
	cin>>rating;
	movie2.setRating(rating);

	Movie movie3;
	cout<<"Enter your 3rd favorite movie: "<<endl;
	cin>>movie;
	movie3.setName(movie);
	cout<<"Enter the year: "<<endl;
	cin>>year;
	while (year <= 0 || year >= 2018){
		cout<<"Invalid Year!"<<endl;
		cout<<"Enter another year: "<<endl;
		cin>>year;
	}
		movie3.setYear(year);
	cout<<"Enter the rating"<<endl;
	cin>>rating;
	movie3.setRating(rating);
	printMovie(movie1);
	printMovie(movie2);
	printMovie(movie3);
	return 0;
}


void printMovie(Movie movie){
	//print the Movie information using dot operators
	cout<<"Movie name: "<<movie.getName()
			<<"\nMovie year: "
			<<movie.getYear()
			<<"\nMovie rating: "
			<<movie.getRating()<<endl;
}









