/* 19. Vectors:
   Develop a program that uses the C++ std::vector container to store a list of student names. 
   Allow users to add and remove names from the list. */

#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector<std::string> studentNames;

    while(true){

        std::cout << "Menu:" << std::endl;
        std::cout << "1. Add student name" << std::endl;
        std::cout << "2. Remove student name" << std::endl;
        std::cout << "3. Display student names" << std::endl;
        std::cout << "4. Exit" << std::endl;

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch(choice){

            case 1: {
                    std::string newName;
                    std::cout << "Enter student name: ";
                    std::cin >> newName;
                    studentNames.push_back(newName);
                    std::cout << "Student name added." << std::endl;
                    break;
            }
            case 2: {
                    if (!studentNames.empty()) {
                        std::string nameToRemove;
                        std::cout << "Enter student name to remove: ";
                        std::cin >> nameToRemove;
                        auto it = std::find(studentNames.begin(), studentNames.end(), nameToRemove);
                        if (it != studentNames.end()) {
                            studentNames.erase(it);
                            std::cout << "Student name removed." << std::endl;
                        } else {
                            std::cout << "Student name not found." << std::endl;
                        }
                    } else {
                        std::cout << "No student names to remove." << std::endl;
                    }
                    break;
            }
            case 3: {
                    if (!studentNames.empty()) {
                        std::cout << "Student names:" << std::endl;
                        for (const std::string &name : studentNames) {
                            std::cout << name << std::endl;
                        }
                    } else {
                        std::cout << "No student names to display." << std::endl;
                    }
                    break;
            }
            case 4:
                    std::cout << "Exiting program." << std::endl;
                    return 0;

            default:
                    std::cout << "Invalid choice. Please enter a valid option." << std::endl;
        }
    }

    return 0;
}