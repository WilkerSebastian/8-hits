#include <string>
#include<vector>
#include"Note.hpp"
#ifndef TRACK_HPP
#define TRACK_HPP

class Track {

    public:

        std::string name;
        std::vector<Note> notes;

        Track() {}

        Track(std::string name);

        Track(std::string name, std::vector<Note> notes);

        void addNote(std::string note);

        void addNote(std::string note, uint16_t time);

        void addNote(Note note);

        void addNote(Note note, uint8_t repeat);

};

#endif