//
// Created by kimjongun on 24-3-2021.
//

#ifndef TOETS_SOFTDRINK_H
#define TOETS_SOFTDRINK_H


#include <string>

class SoftDrink {
    std::string name;
    int amountOfTimes;
    float price;

public:
    SoftDrink(const std::string &name, int amountOfTimes, float price);

    const std::string &getName() const;

    int getAmountOfTimes() const;

    float getPrice() const;
};


#endif //TOETS_SOFTDRINK_H
