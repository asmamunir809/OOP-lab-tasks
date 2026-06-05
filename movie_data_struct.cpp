// Week 2 - Experiment 4
// MovieData Structure

#include<iostream>
#include<string>
using namespace std;

struct MovieData {
    string title;
    string director;
    int yearReleased;
    float runningTime;
};

void displayMovie(MovieData m) {
    cout << "Title: " << m.title << endl;
    cout << "Director: " << m.director << endl;
    cout << "Year Released: " << m.yearReleased << endl;
    cout << "Running Time: " << m.runningTime << " minutes" << endl;
    cout << "-------------------------" << endl;
}

int main() {
    MovieData m1 = {"Inception", "Christopher Nolan", 2010, 148};
    MovieData m2 = {"Interstellar", "Christopher Nolan", 2014, 169};

    displayMovie(m1);
    displayMovie(m2);
    return 0;
}
