#include "../include/Note.hpp"
#include <iostream>
#include <cmath>
#include <regex>
#include <unordered_map>

Note::Note(std::string note) {

    this->time = 0;

    this->setNote(note);

}

Note::Note(std::string note, uint16_t time) {

    this->time = time;

    this->setNote(note); 

}

void Note::setNote(std::string note) {

    // Mapa com as notas e seus respectivos valores de n
    std::unordered_map<std::string, int> noteValues = {
        {"C", -9},
        {"C#", -8},
        {"Db", -8},
        {"D", -7},
        {"D#", -6},
        {"Eb", -6},
        {"E", -5},
        {"F", -4},
        {"F#", -3},
        {"Gb", -3},
        {"G", -2},
        {"G#", -1},
        {"Ab", -1},
        {"A", 0},
        {"A#", 1},
        {"Bb", 1},
        {"B", 2}
    };

    // Obtém a nota e a oitava a partir da string
    std::regex pattern("([A-Ga-g])(#|b)?(\\d+)?"); // expressão regular para separar nota, acidente e oitava
    std::smatch match;

    if(std::regex_match(note, match, pattern)) {
        
        std::string noteName = match[1].str();
        int octave = match[3].str().empty() ? 4 : stoi(match[3].str());

        // Obtém o valor de n a partir da nota e da oitava
        int noteValue = 12 * (octave - 4) + noteValues[noteName];

        // Calcula e retorna a frequência correspondente
        double frequency =  pow(2, noteValue / 12.0) * 440;

        this->frequency = static_cast<uint16_t>(frequency);

    } else {
        this->frequency = 0;
    }

}

uint16_t Note::getTime() {

    return this->time;

}

uint16_t Note::getFrequency() {

    return this->frequency;

}