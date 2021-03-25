//
// Created by kimjongun on 24-3-2021.
//

#ifndef TOETS_PIZZA_H
#define TOETS_PIZZA_H


#include <string>
#include <memory>
#include <vector>
#include "Ingredient.h"

class Pizza {
 int amountOfTimes;
    std::string name;
    std::vector<std::shared_ptr<Ingredient>> ingredients;

public:
    Pizza(int amountOfTimes, const std::string &name);

    int getAmountOfTimes() const;

    const std::string &getName() const;

    void addIngredient(std::shared_ptr<Ingredient>);

    float calculateTotalIngredient() const;

    const std::vector<std::shared_ptr<Ingredient>> &getIngredients() const;

};


#endif //TOETS_PIZZA_H
