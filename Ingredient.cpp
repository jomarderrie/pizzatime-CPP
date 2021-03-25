//
// Created by kimjongun on 24-3-2021.
//

#include "Ingredient.h"



Ingredient::Ingredient(float price, const std::string &name) : price(price), name(name) {}

float Ingredient::getPrice() const {
    return price;
}

const std::string &Ingredient::getName() const {
    return name;
}

const std::string &Ingredient::getPizzaName() const {
    return pizzaName;
}

