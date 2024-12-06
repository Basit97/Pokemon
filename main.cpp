#include <iostream>
#include <string>
#include <cstdlib> // For system()

using namespace std;

// Function to clear the console
void clearConsole() {
#if defined(_WIN32) || defined(_WIN64)
    system("cls");
#else
    system("clear");
#endif
}

// Function to wait for the user to press Enter
void waitForEnter() {
    cout << "Press Enter to continue...";
    cin.get();
}

// Class representing the Player
class Player {
public:
    string name;

    Player(string playerName) : name(playerName) {}
};

// Class representing Professor Oak
class ProfessorOak {
public:
    void explainMainQuest(Player& player) {
        clearConsole();
        cout << "Professor Oak: \"Ah, " << player.name << ", let me tell you about your grand adventure that's about to unfold!\"\n";
        waitForEnter();

        cout << "Professor Oak: \"Becoming a Pokémon Master is no easy task. It demands courage, strategy, and sometimes a little bit of luck.\"\n";
        waitForEnter();

        cout << "Professor Oak: \"Your main mission is to collect all the Pokémon Badges and defeat the Pokémon League. "
            << "Only then can you challenge the Elite Four and aim for the title of Champion.\"\n";
        waitForEnter();

        cout << player.name << ": \"Wait, isn’t that just like every other Pokémon game?\"\n";
        waitForEnter();

        cout << "Professor Oak: \"No breaking the fourth wall, " << player.name << "! This is serious business.\"\n";
        waitForEnter();

        cout << "Professor Oak: \"To achieve this, you must capture new Pokémon, battle wild creatures, challenge gym leaders, "
            << "and keep your Pokémon healthy at the PokeCenter.\"\n";
        waitForEnter();

        cout << "Professor Oak: \"Remember, you can only carry a limited number of Pokémon. Choose wisely who you want on your team!\"\n";
        waitForEnter();

        cout << player.name << ": \"Piece of cake, right?\"\n";
        waitForEnter();

        cout << "Professor Oak: \"Ha! That’s what everyone thinks. But the path to becoming a Champion is filled with obstacles. "
            << "Lose a battle, and it’s back to the start!\"\n";
        waitForEnter();

        cout << "Professor Oak: \"So, what do you say? Are you ready to embark on this epic journey to become the next Pokémon Champion?\"\n";
        waitForEnter();

        cout << player.name << ": \"Ready as I’ll ever be, Professor!\"\n";
        waitForEnter();

        cout << "Professor Oak: \"That’s the spirit! Now, your journey begins. Remember, it’s not just about battling—it’s about forming bonds with your Pokémon. "
            << "Go, Trainer, the world of Pokémon awaits you!\"\n";
        waitForEnter();

        cout << "Professor Oak: \"Oh, and about the actual game loop… let’s just pretend I didn’t forget to set it up. Onwards!\"\n";
        waitForEnter();
    }
};

int main() {
    clearConsole();

    // Create a player object
    string playerName;
    cout << "Enter your name, Trainer: ";
    getline(cin, playerName);
    Player player(playerName);

    // Create a Professor Oak object
    ProfessorOak professor;

    // Professor explains the main quest
    professor.explainMainQuest(player);

    return 0;
}