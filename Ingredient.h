//
// Created by kimjongun on 24-3-2021.
//

#ifndef TOETS_INGREDIENT_H
#define TOETS_INGREDIENT_H


#include <string>

class Ingredient {
    float price;
    std::string name;
    std::string pizzaName;
public:
    Ingredient(float price, const std::string &name);

    float getPrice() const;

    const std::string &getName() const;

    const std::string &getPizzaName() const;
};


#endif //TOETS_INGREDIENT_H
