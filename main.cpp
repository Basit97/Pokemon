#include <iostream>
#include <string> // Include for std::string

using namespace std;

int  () {
    // Declare variables
    string chosen_pokemon; // Variable to store the chosen Pokémon
    string player_name;     // Variable to store the player's name

    // Welcome messages
    cout << "Ah, Trainer!\n";
    cout << "Welcome to the world of Pokémon! I am Professor Oak.\n";
    cout << "Today is a momentous day—you’ll be choosing your very first Pokémon.\n";
    cout << "Every great Trainer remembers this moment for the rest of their lives.\n";
    cout << "So, choose wisely, young one!\n";

    // Presenting Pokemon choices
    cout << "You can choose one of the following Pokémon:\n";
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";

    cout << "Professor Oak: I have three Pokemon here with me. They’re all quite feisty!\n";
    cout << "Professor Oak: Choose wisely...\n";
    cout << "1. Charmander - The fire type. A real hothead!\n";
    cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
    cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

    int choice;
    cout << "Professor Oak: So, which one will it be? Enter the number of your choice: ";
    cin >> choice;

    // Store the chosen Pokemon based on user input
    switch (choice) {
    case 1:
        chosen_pokemon = "Charmander";
        cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
        break;

    case 2:
        chosen_pokemon = "Bulbasaur";
        cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!\n";
        break;

    case 3:
        chosen_pokemon = "Squirtle";
        cout << "Professor Oak: Splendid! Squirtle will keep you cool under pressure!\n";
        break;

    default:
        cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
        chosen_pokemon = "Pikachu"; // Default if no valid choice is made
        cout << "Professor Oak: Just kidding! Let's go with Pikachu, the surprise guest!\n";
        break;
    }

    // Ask for the player's name
    cout << "What is your name, young Trainer? ";
    cin >> player_name;

    // Concluding the first chapter
    cout << "Professor Oak: " << chosen_pokemon << " and you, " << player_name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}
