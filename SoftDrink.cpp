//
// Created by kimjongun on 24-3-2021.
//

#include "SoftDrink.h"

SoftDrink::SoftDrink(const std::string &name, int amountOfTimes, float price) : name(name),
                                                                                amountOfTimes(amountOfTimes),
                                                                                price(price) {}

const std::string &SoftDrink::getName() const {
    return name;
}

int SoftDrink::getAmountOfTimes() const {
    return amountOfTimes;
}

float SoftDrink::getPrice() const {
    return price;
}
