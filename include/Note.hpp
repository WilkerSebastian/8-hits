#include<string>
#ifndef NOTE_HPP
#define NOTE_HPP

class Note {

    private:

        uint16_t frequency;
        uint16_t time;

        void setNote(std::string note);

    public:

        Note(std::string note);

        Note(std::string note, uint16_t time);

        uint16_t getTime();

        uint16_t getFrequency();

};

#endif