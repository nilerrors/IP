#ifndef MOVIE_PERSON_H_
#define MOVIE_PERSON_H_

#include <string>

using namespace std;

class Person {
 public:
  string firstname;
  string lastname;

  Person(string firstname, string lastname) {
    Person::firstname = firstname;
    Person::lastname = lastname;
  }
};

#endif /* MOVIE_PERSON_H_ */
