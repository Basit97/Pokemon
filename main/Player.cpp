#include "Player.hpp"
#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include <iostream>
using namespace std;
// Player class definition


  // Default constructor
Player::Player() {
    name = "Trainer";
    chosenPokemon = Pokemon(); // Using the default Pokemon constructor
}

// Parameterized constructor
Player::Player(string p_name, Pokemon p_chosenPokemon) {
    name = p_name;
    chosenPokemon = p_chosenPokemon;
}

void Player::choosePokemon(int choice) {
    switch (choice) {
    case CHARMANDER:
        chosenPokemon = Pokemon("Charmander", FIRE, 100);
        break;
    case BULBASAUR:
        chosenPokemon = Pokemon("Bulbasaur", GRASS, 100);
        break;
    case SQUIRTLE:
        chosenPokemon = Pokemon("Squirtle", WATER, 100);
        break;
    default:
        chosenPokemon = Pokemon("Pikachu", ELECTRIC, 100);
        break;
    }
    cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
    Utility::waitForEnter(); // Wait for user to press Enter before proceeding
}
