#include "Movie.h"
#include "Movies.h"
#include <iostream>
#include <vector>
using std::cout;
using std::endl;

Movies::Movies()
{
}

Movies::~Movies()
{
}

void Movies::add_movie(string name, string rating, int num_times_watched) {
    bool movie_exists{ false };
    for(auto& elem : movies) {
        if(name == elem.get_name()) {
            movie_exists = true;
            cout << "\n"
                 << name << " already exists in the collection"
                 << "\n"
                 << endl;
            break;
        }
    }
    if(movie_exists == false) {
        Movie new_movie{ name, rating, num_times_watched };
        movies.push_back(new_movie);
        cout << endl;
        cout << name << " added" << endl;
    }
}
void Movies::increment_num(string movie_name) {
    bool is_found{ false };
    for(auto& elem : movies) {
        if(movie_name == elem.get_name()) {
            elem.inc_num_times_watched();
            is_found = true;
            break;
        }
    }

    if(!is_found) {
        cout << movie_name << " was not found" << endl;
    }
}
void Movies::display_movies() const {
    cout << "===========================" << endl;
    if(movies.empty()) {
        cout << "No movies to display" << endl;
    } else {
        for(auto elem : movies) {
            cout << elem.get_name() << ", " << elem.get_rating() << ", " << elem.get_num_times_watched() << endl;
        }
    }
    cout << "===========================" << endl;
}
