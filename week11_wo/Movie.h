#ifndef MOVIE_MOVIE_H_
#define MOVIE_MOVIE_H_

#include <string>
#include <vector>
#include "Actor.h"
#include "Director.h"

using namespace std;

class Movie {
  // year, director, title, genre, actors en rating
  int year;
  Director* director;
  string title;
  string genre;
  vector<Actor*> actors;
  double rating;

 public:
  Movie(int year,
        Director* const& director,
        const string& title,
        const string& genre,
        const vector<Actor*>& actors,
        double rating);

  int getYear() const { return year; }
  const Director* const& getDirector() const { return director; }
  const string& getTitle() const { return title; }
  const string& getGenre() const { return genre; }
  const vector<Actor*>& getActors() const { return actors; }
  double getRating() const { return rating; }

  void setYear(int year) { Movie::year = year; }
  void setDirector(Director* const& director) { Movie::director = director; }
  void setTitle(const string& title) { Movie::title = title; }
  void setGenre(const string& genre) { Movie::genre = genre; }
  void setActors(const vector<Actor*>& actors) { Movie::actors = actors; }
  void setRating(double rating) { Movie::rating = rating; }

  // Returns a string representation of the movie, e.g. "The Matrix (1999)"
  string toString() const;

  // Adds an actor to the list of actors
  void starring(Actor* const& name) { Movie::actors.push_back(name); }
};

#endif /* MOVIE_MOVIE_H_ */
