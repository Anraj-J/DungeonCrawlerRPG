// This is a sample file from the project to give an idea of how the project was implemented. Even from this file, code has been removed to adhere to university policy.

#include "sample.h"
#include "sample2.h"
#include <iostream>
#include <string>

Npc::Npc(x), x{x} {
    //Constructor
}

int Npc::attack(string x, SampleClass* opp, string& y, bool& z) {

  // sample attack formula
  
    int miss = rand() % 2;
    attackInfo += getSym();
    if (miss == 0) {
        int damage = ((100 * getAtk()) / (100 + x->getDef())) + 1;
        if (x->getHp() <= damage) {
            x->setHp(0);
            attackInfo += " defeats PC. ";
        } else {
            x->setHp(x->getHp() - damage);
            attackInfo += " deals ";
            attackInfo += std::to_string(damage);
            attackInfo += " damage to PC. ";
        }
    } else {
        attackInfo += " misses attack on PC. ";
    }
}

void Npc::notify(bool a, string& b, bool& c) {
// Observer Pattern implemented here. The subject's notifyObservers() calls this observer's notify(). Removed to adhere to university policy.
}
