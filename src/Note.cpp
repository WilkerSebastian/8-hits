#include "../include/Note.hpp"
#include <map>

Note::Note(std::string note) {

    this->time = 0;

    this->setNote(note);

}

Note::Note(std::string note, uint16_t time) {

    this->time = time;

    this->setNote(note); 

}

void Note::setNote(std::string note) {

    const std::map<std::string, int> notes = {
        {"C", 132},
        {"C#", 137},
        {"Db", 142},
        {"D", 148},
        {"D#", 154},
        {"Eb", 158},
        {"E", 165},
        {"Fb", 168},
        {"E#", 171},
        {"F", 175},
        {"F#", 183},
        {"Gb", 190},
        {"G", 198},
        {"G#", 206},
        {"Ab", 211},
        {"A", 220},
        {"A#", 229},
        {"Bb", 237},
        {"B", 247},
        {"Cb", 253},
        {"B#", 257},
        {"D1#", 264},
    };

    auto it = notes.find(note);

    this->frequency = it != notes.end() ? it->second : 0;

}

uint16_t Note::getTime() {

    return this->time;

}

uint16_t Note::getFrequency() {

    return this->frequency;

}