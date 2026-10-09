#include <iostream>
#include <string>
#include <print>

enum class Aliment {
    BURGER,
    SUSHI,
    SALADE,
    PIZZA
};

std::string nom(Aliment food) {
    switch (food) {
        case Aliment::BURGER:
            return "Burger";
        case Aliment::SUSHI:
            return "Sushi";
        case Aliment::SALADE:
            return "Salade";
        case Aliment::PIZZA:
            return "Pizza";
    }
}

int prix(Aliment food) {
    switch (food) {
        case Aliment::BURGER:
            return 12;
        case Aliment::SUSHI:
            return 18;
        case Aliment::SALADE:
            return 9;
        case Aliment::PIZZA:
            return 15;
    }
}

// Method to take less place in the main:
Aliment IntToAliment(int number) {
    
    return static_cast<Aliment>(number - 1);
}

int main() {

    // for (int i = 0; i < 4; i++) {
    //     Aliment tempaliment = static_cast<Aliment>(i);
    //     // Fonction à test
    //     std::println("{}", nom(tempaliment));
    // }

    int choix = 5;
    int addition = 0;
    while (choix != 0) {
        std::println("1. Burger  2. Sushi  3. Salade  4. Pizza  0. L'addition");
        std::cin >> choix;
        std::println("Votre choix {}", choix);
        if (choix == 0) {
            break;
        } else if (choix > 4 ) {
            std::println("Ce plat n'est pas au menu.");
        } else {
            std::println("{} ajoute : {} CHF", nom(IntToAliment(choix)), prix(IntToAliment(choix)));
            addition = addition + prix(IntToAliment(choix));
        }
    }
    std::println("Total: {} CHF", addition);


    return 0;
}
