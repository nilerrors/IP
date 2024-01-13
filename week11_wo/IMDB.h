#ifndef MOVIE_IMDB_H_
#define MOVIE_IMDB_H_

#include <string>
#include <vector>
#include "Movie.h"

class IMDB {
  vector<Movie*> movies;

 public:
  IMDB() {}
  IMDB(const vector<Movie*>& movies) : movies(movies) {}

  void addMovie(Movie* const& movie) { IMDB::movies.push_back(movie); }
  const Movie* const& getBest() const;
  const vector<Movie*>& getSimilar(Movie* movie) const;

  const string& toString() const;
};

#endif /* MOVIE_IMDB_H_ */
