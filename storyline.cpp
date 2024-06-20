#include <iostream>

int main() {
    int choice;

    // Introduction
    std::cout << "Welcome to Jumanji: Welcome to the Jungle!" << std::endl;
    std::cout << "You and your friends have been transported into the world of Jumanji." << std::endl;
    std::cout << "To escape, you must return the jewel to the Jaguar's Eye and call out Jumanji." << std::endl;
    std::cout << "Let's begin your adventure!" << std::endl << std::endl;

    // First Branch Point
    for (choice=1 ; choice<3 ; choice ++) {
        std::cout << "You find yourself in a dense jungle. What do you do?" << std::endl;
        std::cout << "1. Follow the path" << std::endl;
        std::cout << "2. Explore the jungle" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        if (choice == 1 || choice == 2) break;
        else std::cout << "Invalid choice. Try again." << std::endl;
    }

    if (choice == 1) {
        // Second Branch Point
        for (choice=1 ; choice<3 ; choice ++) {
            std::cout << "You follow the path and reach a river. What do you do?" << std::endl;
            std::cout << "1. Cross the river" << std::endl;
            std::cout << "2. Follow the riverbank" << std::endl;
            std::cout << "Enter your choice: ";
            std::cin >> choice;
            if (choice == 1 || choice == 2) break;
            else std::cout << "Invalid choice. Try again." << std::endl;
        }

        if (choice == 1) {
            // Third Branch Point
            for (choice=1 ; choice<3 ; choice ++) {
                std::cout << "You find a hidden cave. What do you do?" << std::endl;
                std::cout << "1. Enter the cave" << std::endl;
                std::cout << "2. Keep looking for another way" << std::endl;
                std::cout << "Enter your choice: ";
                std::cin >> choice;
                if (choice == 1 || choice == 2) break;
                else std::cout << "Invalid choice. Try again." << std::endl;
            }

            if (choice == 1) {
                std::cout << "You enter the cave and encounter dangerous creatures. Despite the challenges, you find the Jaguar's Eye and return the jewel." << std::endl;
                std::cout << "Congratulations! You have successfully completed your mission and escaped Jumanji!" << std::endl;
            } else {
                std::cout << "You decided to keep looking and eventually find the way out of the jungle." << std::endl;
                std::cout << "Congratulations! You have successfully escaped Jumanji!" << std::endl;
            }
        } else {
            std::cout << "You follow the riverbank and eventually find the way out of the jungle." << std::endl;
            std::cout << "Congratulations! You have successfully escaped Jumanji!" << std::endl;
        }
    } else if (choice == 2) {
        // Second Branch Point
        for (choice=1 ; choice<3 ; choice ++) {
            std::cout << "You explore the jungle and reach a mountain. What do you do?" << std::endl;
            std::cout << "1. Climb the mountain" << std::endl;
            std::cout << "2. Go around the mountain" << std::endl;
            std::cout << "Enter your choice: ";
            std::cin >> choice;
            if (choice == 1 || choice == 2) break;
            else std::cout << "Invalid choice. Try again." << std::endl;
        }

        if (choice == 1) {
            std::cout << "You climb the mountain and find the Jaguar's Eye. You return the jewel and call out Jumanji." << std::endl;
            std::cout << "Congratulations! You have successfully completed your mission and escaped Jumanji!" << std::endl;
        } else {
            // Third Branch Point
            for (choice=1 ; choice<3 ; choice ++) {
                std::cout << "You go around the mountain and find a village. What do you do?" << std::endl;
                std::cout << "1. Ask for help" << std::endl;
                std::cout << "2. Keep going on your own" << std::endl;
                std::cout << "Enter your choice: ";
                std::cin >> choice;
                if (choice == 1 || choice == 2) break;
                else std::cout << "Invalid choice. Try again." << std::endl;
            }

            if (choice == 1) {
                std::cout << "The villagers help you find the way out of the jungle." << std::endl;
                std::cout << "Congratulations! You have successfully escaped Jumanji!" << std::endl;
            } else {
                std::cout << "You keep going on your own and eventually find the way out of the jungle." << std::endl;
                std::cout << "Congratulations! You have successfully escaped Jumanji!" << std::endl;
            }
        }
    }

    }
