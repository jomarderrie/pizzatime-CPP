#include <iostream>
#include "Order.h"
#include "Ingredient.h"


int main() {
    std::cout << "Welcome to Cheesy Pizzas, you have ordered the following products: " << std::endl << std::endl;

    /**
     * Add method calls to your Order class below. Your program should perform the given
     * steps. Please also handle errors and print the error message when something went wrong!
     * Possible errors are:
     *  - Adding duplicate ingredients to the pizza
     *  - Errors reading the input file (In this case the file is ok, but maybe in the future we will use a wrong file)
     */
    Order order;
    try {

        // TODO: Add 3x softdrink "Coca-Cola" to the order with a unit price of 2.15
        // TODO: Add 1x softdrink "Orance-Juice" to the order with a unit price of 2.65
        order.addSoftDrink(std::make_shared<SoftDrink>("Coca-Cola", 3, 2.15));
        order.addSoftDrink(std::make_shared<SoftDrink>("Orance-Juice", 1, 2.65));

        // TODO: Add 2x Pizza Margherita to the order, with the following ingredients:
        order.addPizza(std::make_shared<Pizza>(2, "Margherita"));

        // Ingredient: Dough, price: 3.0
        order.addIngredient(std::make_shared<Ingredient>(3.0, "Dough"), "Margherita");
        // Ingredient: Tomato, price: 2.0
        order.addIngredient(std::make_shared<Ingredient>(2.0, "Tomato"), "Margherita");
        // Ingredient: Mozzarella, price: 1.0
        order.addIngredient(std::make_shared<Ingredient>(1.0, "Mozzarella"), "Margherita");
        // Ingredient: Oregano, price: 0.75
        order.addIngredient(std::make_shared<Ingredient>(0.75, "Oregano"), "Margherita");

        order.addPizza(std::make_shared<Pizza>(2, "Salami"));
        // TODO Add 2x Pizza Salami to the order, read the ingredients from 'input.txt'.
        order.readEmployeeFromFile("input.txt");
        // Format: [ingredient] [price]
        // TODO: Tell the Order class to print out all products and total price
        order.printTotalCost();
        // TODO: Release any memory you have allocated
    }catch (std::exception &exception) {
        std::cerr << "Oops! Something went wrong." << std::endl
                  << exception.what() << std::endl;
    }

    return 0;
}

