#ifndef MOVIES_S_
#define MOVIES_S_
#include "Movie.h"
#include <vector>
using std::vector;
class Movies
{
private:
    vector<Movie> movies;

public:
    void add_movie(string name, string rating, int num_times_watched = 0);
    void increment_num(string movie_name);
    void display_movies() const;
    Movies();
    ~Movies();
};

#endif // MOVIES_S_
