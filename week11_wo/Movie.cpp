#include "Movie.h"

Movie::Movie(int year,
             Director* const& director,
             const string& title,
             const string& genre,
             const vector<Actor*>& actors,
             double rating) {
  Movie::year = year;
  Movie::director = director;
  Movie::title = title;
  Movie::genre = genre;
  Movie::actors = actors;
  Movie::rating = rating;
}

string Movie::toString() const {
  return Movie::title + " (" + to_string(Movie::year) + ")";
}

