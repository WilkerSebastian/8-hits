#include "../include/Hits.hpp"
#include<iostream>
#ifdef _WIN32 // Verifica se o sistema operacional é Windows
    #include <windows.h>
    void beep(int freq, int dur) {
        Beep(freq, dur);
    }
#else // Senão, assume que o sistema operacional é Linux ou outro derivado de Unix
    #include <stdio.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/ioctl.h>
    #include <linux/kd.h>
    void beep(int freq, int dur) {
        int fd = open("/dev/console", O_WRONLY);
        if (fd >= 0) {
            ioctl(fd, KIOCSOUND, (int)(1193180/freq));
            usleep(dur * 1000);
            ioctl(fd, KIOCSOUND, 0);
            close(fd);
        }
    }
#endif


void Hits::play(std::string name) {

    Track track;

    for (Track t : this->tracks) {

        if(t.name.compare(name) == 0) {

            track = t;
            break;

        }

    }

    for (Note note : track.notes) {

        uint16_t frequency = note.getFrequency();
        uint16_t time = note.getTime();

        beep(frequency, time);

    }

}

void Hits::addTrack(Track track) {

    this->tracks.push_back(track);

}
