#include <iostream>
#include <string>

// Enum for Pokemon types
enum PokemonType { FIRE, WATER, GRASS, ELECTRIC, NORMAL };

class Pokemon {
private:
    std::string name;
    PokemonType type;
    int health;

public:
    // Task 1: Default Constructor
    Pokemon() : name("Pikachu"), type(ELECTRIC), health(10) {}

    // Task 2: Parameterized Constructor
    Pokemon(const std::string& p_name, PokemonType p_type, int p_health)
        : name(p_name), type(p_type), health(p_health) {}

    // Task 3: Copy Constructor
    Pokemon(const Pokemon& other)
        : name(other.name), type(other.type), health(other.health) {}

    // Method to display Pokemon details
    void display() const {
        std::cout << "Pokemon Name: " << name << ", Type: " << type << ", Health: " << health << std::endl;
    }
};

class Player {
private:
    std::string name;
    Pokemon chosenPokemon;

public:
    // Task 1: Default Constructor
    Player() : name("Trainer"), chosenPokemon() {}

    // Task 2: Parameterized Constructor
    Player(const std::string& p_name, const Pokemon& p_chosenPokemon)
        : name(p_name), chosenPokemon(p_chosenPokemon) {}

    // Task 3: Copy Constructor
    Player(const Player& other)
        : name(other.name), chosenPokemon(other.chosenPokemon) {}

    // Method to display Player details
    void display() const {
        std::cout << "Player Name: " << name << std::endl;
        std::cout << "Chosen ";
        chosenPokemon.display();
    }
};

// Main function to demonstrate functionality
int main() {
    // Default Constructors
    Pokemon defaultPokemon;
    Player defaultPlayer;
    std::cout << "Default Player and Pokemon:" << std::endl;
    defaultPlayer.display();
    std::cout << std::endl;

    // Parameterized Constructors
    Pokemon charizard("Charizard", FIRE, 78);
    Player customPlayer("Ash", charizard);
    std::cout << "Parameterized Player and Pokemon:" << std::endl;
    customPlayer.display();
    std::cout << std::endl;

    // Copy Constructors
    Player copiedPlayer(customPlayer);
    std::cout << "Copied Player and Pokemon:" << std::endl;
    copiedPlayer.display();

    return 0;
}