#include <iostream>
#include <string>

#include "Guild.h"
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "Spellblade.h"

using namespace std;

int main() {

    Guild myGuild("Default Guild");
    Hero* heroes[15];
    int heroCount = 0;

    int choice = -1;
    while (choice != 0) {
        cout << "\n=== Menu ===\n";
        cout << "1. Create/Rename Guild\n";
        cout << "2. Add Hero\n";
        cout << "3. Add Warrior\n";
        cout << "4. Add Knight\n";
        cout << "5. Add Spellblade\n";
        cout << "6. Show Guild Stats\n";
        cout << "7. Print Guild Roster\n";
        cout << "8. Calculate Warrior Effective Health\n";
        cout << "9. Calculate Knight Burst Damage\n";
        cout << "10. Calculate Spellblade Hybrid Damage\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (!cin) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Try again.\n";
            continue;
        }

        switch (choice) {
            case 1: {
                string name;
                cout << "Enter guild name: ";
                cin >> name;
                myGuild = Guild(name);
                cout << "Guild \"" << name << "\" created.\n";
                break;
            }
            case 2: {
                
                string name;
                int health, power;
                cout << "Hero name: ";
                cin >> name;
                cout << "Hero health: ";
                cin >> health;
                cout << "Hero base power: ";
                cin >> power;
                heroes[heroCount] = new Hero(name, health, power);
                myGuild += heroes[heroCount];
                heroCount++;
                cout << "Hero added.\n";
                break;
            }
            case 3: {
                
                string name;
                int health, power, armor;
                cout << "Warrior name: ";
                cin >> name;
                cout << "Warrior health: ";
                cin >> health;
                cout << "Warrior base power: ";
                cin >> power;
                cout << "Armor rating: ";
                cin >> armor;
                Warrior* w = new Warrior(name, health, power, armor);
                heroes[heroCount] = w;
                myGuild += w;
                heroCount++;
                cout << "Warrior added.\n";
                cout << "Effective Health: " << w->calculateEffectiveHealth() << '\n';
                break;
            }
            case 4: {
                
                string name;
                int health, power, armor, charge;
                cout << "Knight name: ";
                cin >> name;
                cout << "Knight health: ";
                cin >> health;
                cout << "Knight base power: ";
                cin >> power;
                cout << "Armor rating: ";
                cin >> armor;
                cout << "Charge bonus: ";
                cin >> charge;
                Knight* k = new Knight(name, health, power, armor, charge);
                heroes[heroCount] = k;
                myGuild += k;
                heroCount++;
                cout << "Knight added.\n";
                cout << "Burst Damage: " << k->calculateBurstDamage() << '\n';
                break;
            }
            case 5: {
                
                string name;
                int health, power, armor, mana, spell;
                cout << "Spellblade name: ";
                cin >> name;
                cout << "Spellblade health: ";
                cin >> health;
                cout << "Spellblade base power: ";
                cin >> power;
                cout << "Armor rating: ";
                cin >> armor;
                cout << "Mana pool: ";
                cin >> mana;
                cout << "Spell power: ";
                cin >> spell;
                Spellblade* s = new Spellblade(name, health, power, armor, mana, spell);
                heroes[heroCount] = s;
                myGuild += s;
                heroCount++;
                cout << "Spellblade added.\n";
                cout << "Hybrid Damage: " << s->calculateHybridDamage() << '\n';
                break;
            }
            case 6: {
                myGuild.displayGuildStats();
                break;
            }
            case 7: {
                cout << myGuild;
                break;
            }
            case 8: {
                if (heroCount == 0) {
                    cout << "No heroes available.\n";
                    break;
                }
                int idx;
                cout << "Enter hero number: ";
                cin >> idx;
                cout << "Effective Health: "
                     << static_cast<Warrior*>(heroes[idx - 1])->calculateEffectiveHealth()
                     << '\n';
                break;
            }
            case 9: {
                if (heroCount == 0) {
                    cout << "No heroes available.\n";
                    break;
                }
                int idx;
                cout << "Enter hero number: ";
                cin >> idx;
                cout << "Burst Damage: "
                     << static_cast<Knight*>(heroes[idx - 1])->calculateBurstDamage()
                     << '\n';
                break;
            }
            case 10: {
                if (heroCount == 0) {
                    cout << "No heroes available.\n";
                    break;
                }
                int idx;
                cout << "Enter hero number: ";
                cin >> idx;
                cout << "Hybrid Damage: "
                     << static_cast<Spellblade*>(heroes[idx - 1])->calculateHybridDamage()
                     << '\n';
                break;
            }
            case 0: {
                cout << "Goodbye!\n";
                break;
            }
            default:
                cout << "Invalid choice.\n";
        }
    
    }
    return 0;
}
