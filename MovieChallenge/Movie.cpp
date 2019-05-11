#include "Movie.h"
#include <iostream>
using std::cout;
using std::endl;

Movie::~Movie()
{
}
string Movie::get_name() const {
    return name;
}
string Movie::get_rating() const {
    return rating;
}
int Movie::get_num_times_watched() const {
    return num_times_watched;
}
void Movie::inc_num_times_watched() {
    ++num_times_watched;
    cout << "\n" << get_name() << " incremented" << endl;
    cout << endl;
}
