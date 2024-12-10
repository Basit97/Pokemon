#include <iostream>
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include <string>
using namespace std;

// Function to clear the console
void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Function to wait for the user to press Enter
void waitForEnter() {
    cin.get(); // Wait for Enter key
}

// Define an enum for Pokemon choices
enum class PokemonChoice {
    CHARMANDER = 1,
    BULBASAUR,
    SQUIRTLE,
    PIKACHU // Default choice
};

// Define an enum for Pokemon types
enum class PokemonType {
    FIRE,
    GRASS,
    WATER,
    ELECTRIC,
    NORMAL // Added for the default constructor
};

// Pokémon class definition
class Pokemon {
public:
    string name;
    PokemonType type;
    int health;

    // Default constructor
    Pokemon() : name("Unknown"), type(PokemonType::NORMAL), health(50) {}

    // Parameterized constructor
    Pokemon(const string& p_name, PokemonType p_type, int p_health)
        : name(p_name), type(p_type), health(p_health) {}

    // Copy constructor
    Pokemon(const Pokemon& other)
        : name(other.name), type(other.type), health(other.health) {}

    // Destructor
    ~Pokemon() = default;

    void attack() const {
        cout << name << " attacks with a powerful move!\n";
    }
};

// Player class definition
class Player {
public:
    string name;
    Pokemon chosenPokemon;

    // Default constructor
    Player() : name("Trainer"), chosenPokemon(Pokemon()) {}

    // Parameterized constructor
    Player(const string& p_name, const Pokemon& p_chosenPokemon)
        : name(p_name), chosenPokemon(p_chosenPokemon) {}

    void choosePokemon(int choice) {
        switch (static_cast<PokemonChoice>(choice)) {
        case PokemonChoice::CHARMANDER:
            chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
            break;
        case PokemonChoice::BULBASAUR:
            chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
            break;
        case PokemonChoice::SQUIRTLE:
            chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
            break;
        default:
            chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
            break;
        }
        cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
    }
};

// Professor Oak class definition
class ProfessorOak {
public:
    string name;

    // Parameterized constructor
    explicit ProfessorOak(const string& p_name) : name(p_name) {}

    void greetPlayer(Player& player) const {
        cout << name << ": Hello there! Welcome to the world of Pokémon!\n";
        waitForEnter();
        cout << name << ": My name is Oak. People call me the Pokémon Professor!\n";
        waitForEnter();
        cout << name << ": But enough about me. Let's talk about you!\n";
        waitForEnter();
    }

    void offerPokemonChoices(Player& player) const {
        cout << name << ": First, tell me, what’s your name? [Please Enter Your Name]\n";
        getline(cin, player.name);
        cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
        waitForEnter();
        cout << name << ": You must be eager to start your adventure. But first, "
            "you’ll need a Pokémon of your own!\n";
        waitForEnter();

        // Present Pokémon choices
        cout << name << ": Choose wisely...\n";
        cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        cout << name << ": So, which one will it be? Enter the number of your choice: ";
        cin >> choice;

        // Clear input buffer
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        player.choosePokemon(choice);
        waitForEnter();
    }

    void explainMainQuest(const Player& player) const {
        clearConsole();
        cout << "Professor Oak: " << player.name
            << ", I am about to explain your upcoming grand adventure.\n";
        waitForEnter();
        cout << "Professor Oak: Becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck!\n";
        waitForEnter();
        cout << "Professor Oak: Your mission is to collect all Pokémon Badges and conquer the Pokémon League.\n";
        waitForEnter();
        cout << player.name << ": Sounds like a walk in the park... right?\n";
        waitForEnter();
        cout << "Professor Oak: Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges.\n";
        waitForEnter();
    }
};

// Main game loop function
void gameLoop(Player& player) {
    int choice;
    bool keepPlaying = true;

    while (keepPlaying) {
        clearConsole();

        cout << "\nWhat would you like to do next, " << player.name << "?\n";
        cout << "1. Battle Wild Pokémon\n";
        cout << "2. Visit PokeCenter\n";
        cout << "3. Challenge Gyms\n";
        cout << "4. Enter Pokémon League\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
        case 1:
            cout << "You look around... but all the wild Pokémon are on vacation. Maybe try again later?\n";
            break;
        case 2:
            cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokémon will have to tough it out for now!\n";
            break;
        case 3:
            cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n";
            break;
        case 4:
            cout << "You boldly step towards the Pokémon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\n";
            break;
        case 5:
            cout << "Are you sure you want to quit? (y/n): ";
            char quitChoice;
            cin >> quitChoice;
            if (quitChoice == 'y' || quitChoice == 'Y') {
                keepPlaying = false;
            }
            break;
        default:
            cout << "That's not a valid choice. Try again!\n";
            break;
        }

        waitForEnter();
    }

    cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
}

// Main function
int main() {
    ProfessorOak professor("Professor Oak");
    Player player;

    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);
    professor.explainMainQuest(player);

    gameLoop(player);

    return 0;
#include "header.hpp"