//
// Created by nilerrors on 15/12/2023.
//

#ifndef WEEK13_VR_NETFLIX_H
#define WEEK13_VR_NETFLIX_H

#include <string>
#include <iostream>
using namespace std;

class MovieProvider{
private:
    string* movies;
    int maxMovies;
    int totMovies;
public:
    MovieProvider(int maxMovies) : maxMovies(maxMovies), totMovies(0) {
        movies = new string[maxMovies];
    }
    virtual void setRating(string movie, double rating) = 0;

    virtual ~MovieProvider() {
        delete[] movies;
    }

    string getMovie(int index){
        return movies[index];
    }

    int getMaxMovies() const {
        return maxMovies;
    }
    int getTotMovies() const {
        return totMovies;
    }
    void addMovie(string movie) {
        movies[totMovies] = movie;
        totMovies++;
    }

    virtual void print(){
        for(int i = 0; i < maxMovies; i++) {
            cout << movies[i] << endl;
        }
    }

protected:
    int getIndex(string movie){
        for(int i = 0; i < maxMovies; i++){
            if(movies[i] == movie) return i;
        }
        return -1;
    }
};

class Netflix : public MovieProvider{
private:
    double* ratings; // ratings[0] = 0.9 is de rating van movies[0]
public:
    Netflix(int maxMovies) : MovieProvider(maxMovies) {
        ratings = new double[maxMovies];
    }

    virtual ~Netflix() {
        delete[] ratings;
        ratings = nullptr;
    }

    void setRating(string movie, double rating) {
        int index = getIndex(movie);
        if(index >= 0 && index < getTotMovies()){
            ratings[index] = rating;
        }
    }

    void print(){
        for(int i = 0; i < getTotMovies(); i++) {
            cout << getMovie(i) << " (rating: " << ratings[i] << ")" << endl;
        }
    }
};



#endif //WEEK13_VR_NETFLIX_H
