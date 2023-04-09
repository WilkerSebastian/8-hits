#include <vector>
#include "Track.hpp"
#include "Note.hpp"
#ifndef HITS_HPP
#define HITS_HPP

class Hits {

    private:

        std::vector<Track> tracks;

    public:

        void play(std::string name); 

        void addTrack(Track track);

};


#endif