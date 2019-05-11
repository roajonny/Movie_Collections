#ifndef MOVIE_S_
#define MOVIE_S_
#include <string>
using std::string;
class Movie
{
private:
    string name;
    string rating;
    int num_times_watched{};

public:
    Movie(string name, string rating, int num_times_watched = 0)
        : name{name}, rating{rating}, num_times_watched{num_times_watched} {};
    ~Movie();
    string get_name() const;
    string get_rating() const;
    int get_num_times_watched() const;
    void inc_num_times_watched();
};

#endif // MOVIE_S_
