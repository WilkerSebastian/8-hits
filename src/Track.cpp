#include "../include/Track.hpp"

Track::Track(std::string name, std::vector<Note> notes) {

    this->name = name;
    this->notes = notes;

}

Track::Track(std::string name) {

    this->name = name;

}

void Track::addNote(std::string note) {

    this->notes.push_back(Note(note));

}

void Track::addNote(std::string note, uint16_t time) {

    this->notes.push_back(Note(note, time));

}

void Track::addNote(Note note, uint8_t repeat) {

    for (size_t i = 0; i < repeat; i++) {

        this->notes.push_back(note);

    }

}

void Track::addNote(Note note) {

    this->notes.push_back(note);

}