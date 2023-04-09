#include <iostream>
#include <locale>
#include "../include/Hits.hpp"

int main() {
    
    std::locale::global(std::locale("pt_BR.UTF-8"));

    Hits hits;

    Track pokemon("pokemon");

    pokemon.addNote(Note("D4", 200), 2);
    pokemon.addNote("A4", 400);
    pokemon.addNote(Note("D4", 200), 2);
    pokemon.addNote("Bb4", 600);

    pokemon.addNote(Note("D5", 200), 2);
    pokemon.addNote("A4", 400);
    pokemon.addNote(Note("D4", 200), 2);
    pokemon.addNote("F#4", 600);

    pokemon.addNote(Note("D4", 200), 2);
    pokemon.addNote("A4", 400);
    pokemon.addNote(Note("D4", 200), 2);
    pokemon.addNote("Bb4", 600);

    pokemon.addNote("D5", 600);
    pokemon.addNote("C4", 600);
    pokemon.addNote("D4", 600);
    pokemon.addNote("C5", 600);
    pokemon.addNote(Note("D4", 200), 2);
    pokemon.addNote("A4", 400);
    pokemon.addNote(Note("D4", 200), 2);

    pokemon.addNote("Bb4", 600);
    pokemon.addNote(Note("D4", 200), 2);
    pokemon.addNote(Note("C4", 400), 2);
    pokemon.addNote(Note("D4", 200), 2);

    pokemon.addNote("Bb4", 600);
    pokemon.addNote("D4", 800);
    pokemon.addNote("D4", 100);
    pokemon.addNote("none", 500);

    pokemon.addNote("G4", 150);
    pokemon.addNote("B4", 150);
    pokemon.addNote("D4", 150);
    pokemon.addNote("F#4", 150);

    pokemon.addNote("G4", 300);
    pokemon.addNote("none", 300);
    pokemon.addNote("G4", 300);
    pokemon.addNote("none", 600);

    pokemon.addNote(Note("G4", 150), 2);
    pokemon.addNote("G4", 300);
    pokemon.addNote("none", 300);

    pokemon.addNote("none", 300);
    pokemon.addNote("G4", 300);
    pokemon.addNote("none", 300);

    pokemon.addNote(Note("F4", 150), 5);
    pokemon.addNote("F#4", 150);
    pokemon.addNote("G4", 750);
    pokemon.addNote("B", 200);

    pokemon.addNote("D5", 750);
    pokemon.addNote("C4", 450);
    pokemon.addNote("F4", 250);

    pokemon.addNote("F5", 500);
    pokemon.addNote("E5", 150);
    pokemon.addNote("Eb5", 150);
    pokemon.addNote("D5", 850);

    pokemon.addNote("F4", 450);
    pokemon.addNote("Eb4", 150);
    pokemon.addNote("E4", 150);
    pokemon.addNote("D4", 650);

    pokemon.addNote("C4", 250);
    pokemon.addNote("B4", 250);
    pokemon.addNote("C4", 250);

    pokemon.addNote("G4", 400);

    hits.addTrack(pokemon);

    hits.play("pokemon");

    return 0;

}
