#include <iostream>
#include <locale>
#include "../include/Hits.hpp"

int main() {
    
    std::locale::global(std::locale("pt_BR.UTF-8"));

    Hits hits;

    Track pokemon("pokemon");

    pokemon.addNote(Note("D", 200), 2);
    pokemon.addNote("A", 400);
    pokemon.addNote(Note("D", 200), 2);
    pokemon.addNote("Bb", 600);

    pokemon.addNote(Note("D", 200), 2);
    pokemon.addNote("A", 400);
    pokemon.addNote(Note("D", 200), 2);
    pokemon.addNote("F#", 600);

    pokemon.addNote(Note("D", 200), 2);
    pokemon.addNote("A", 400);
    pokemon.addNote(Note("D", 200), 2);
    pokemon.addNote("Bb", 600);

    pokemon.addNote("D", 600);
    pokemon.addNote("C", 600);
    pokemon.addNote("D", 600);
    pokemon.addNote("C", 600);
    pokemon.addNote(Note("D", 200), 2);
    pokemon.addNote("A", 400);
    pokemon.addNote(Note("D", 200), 2);

    pokemon.addNote("Bb", 600);
    pokemon.addNote(Note("D", 200), 2);
    pokemon.addNote(Note("C", 400), 2);
    pokemon.addNote(Note("D", 200), 2);

    pokemon.addNote("Bb", 600);
    pokemon.addNote("D", 800);
    pokemon.addNote("D", 100);
    pokemon.addNote("none", 500);

    pokemon.addNote("G", 150);
    pokemon.addNote("B", 150);
    pokemon.addNote("D", 150);
    pokemon.addNote("F#", 150);

    pokemon.addNote("G", 300);
    pokemon.addNote("none", 300);
    pokemon.addNote("G", 300);
    pokemon.addNote("none", 600);

    pokemon.addNote(Note("G", 150), 2);
    pokemon.addNote("G", 300);
    pokemon.addNote("none", 300);

    pokemon.addNote("none", 300);
    pokemon.addNote("G", 300);
    pokemon.addNote("none", 300);

    pokemon.addNote(Note("F", 150), 5);

    hits.addTrack(pokemon);

    hits.play("pokemon");

    return 0;

}
