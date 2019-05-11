#include "Movies.h"
#include <iostream>
using namespace std;

// functions that the movies_collection has:
void increment_watched(Movies& movies, std::string name);
void add_movie(Movies& movies, std::string name, std::string rating, int watched);

int main() {
    Movies movie_collection;
    // movie_collection.add_movie("Cinderalla", "R");
    movie_collection.display_movies();
    movie_collection.add_movie("Pacific Rim", "PG-13", 100);
    movie_collection.display_movies();
    movie_collection.increment_num("Pacific Rim");
    movie_collection.display_movies();
    movie_collection.add_movie("Cinderella", "R", 3);
    movie_collection.add_movie("harry potter", "PG-13", 6);
    movie_collection.add_movie("harry potter", "PG_13", 7);
    movie_collection.display_movies();
    movie_collection.increment_num("endgame");
    return 0;
}