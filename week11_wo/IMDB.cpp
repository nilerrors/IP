#include "IMDB.h"

const Movie* const& IMDB::getBest() const {
  if (IMDB::movies.empty()) {
    return nullptr;
  }

  Movie* best = movies.front();
  for (auto movie : movies) {
    if (movie->getRating() > best->getRating()) {
      best = movie;
    }
  }

  return best;
}

const vector<Movie*>& IMDB::getSimilar(Movie* movie) const {
  vector<Movie*> movies;

  auto abs = [](double number) {
    if (number < 0)
      return -number;
    return number;
  };

  for (auto mov : IMDB::movies) {
    if (mov->getGenre() == movie->getGenre() ||
        abs(mov->getRating() - movie->getRating()) < 1) {
      movies.push_back(mov);
    }
  }

  return movies;
}

const string& IMDB::toString() const {
  string movies;
  for (auto movie : IMDB::movies) {
    movies += movie->toString() + "\n";
  }
  return movies;
}
