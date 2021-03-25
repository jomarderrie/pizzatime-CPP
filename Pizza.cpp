//
// Created by kimjongun on 24-3-2021.
//

#include "Pizza.h"

Pizza::Pizza(int amountOfTimes, const std::string &name) : amountOfTimes(amountOfTimes), name(name) {}

int Pizza::getAmountOfTimes() const {
    return amountOfTimes;
}

const std::string &Pizza::getName() const {
    return name;
}

void Pizza::addIngredient(std::shared_ptr<Ingredient> ingredient) {
    for (const auto &item: ingredients) {
        if (ingredient->getName() == item->getName()) {
            throw std::runtime_error("Name alreayd exist");
        }
    }
    ingredients.push_back(ingredient);
}

float Pizza::calculateTotalIngredient() const {
    float total = 0;
    for (const auto &item:ingredients) {
        total += item->getPrice();
    }
    return total;
}

const std::vector<std::shared_ptr<Ingredient>> &Pizza::getIngredients() const {
    return ingredients;
}

