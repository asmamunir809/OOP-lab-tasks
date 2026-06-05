// Week 8 - Experiment 1
// Inheritance - Publication, Book, Tape

#include<iostream>
#include<string>
using namespace std;

class Publication {
protected:
    string title;
    float price;
public:
    void getdata() {
        cout << "Title: "; cin >> title;
        cout << "Price: "; cin >> price;
    }
    void putdata() {
        cout << "Title: " << title << " | Price: $" << price << endl;
    }
};

class Book : public Publication {
private:
    int pageCount;
public:
    void getdata() {
        Publication::getdata();
        cout << "Page Count: "; cin >> pageCount;
    }
    void putdata() {
        Publication::putdata();
        cout << "Pages: " << pageCount << endl;
    }
};

class Tape : public Publication {
private:
    float playingTime;
public:
    void getdata() {
        Publication::getdata();
        cout << "Playing Time (min): "; cin >> playingTime;
    }
    void putdata() {
        Publication::putdata();
        cout << "Playing Time: " << playingTime << " min" << endl;
    }
};

int main() {
    Book b; Tape t;
    cout << "--- Book ---\n"; b.getdata();
    cout << "--- Tape ---\n"; t.getdata();
    cout << "\n--- Book Info ---\n"; b.putdata();
    cout << "\n--- Tape Info ---\n"; t.putdata();
    return 0;
}
