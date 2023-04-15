#include "user.h"
#include <iostream>
#include <string>

int main() {
    User user;

    std::string description;
    int index;
    int choice = 0;

    while (choice != 7) {
        std::cout << "Todo List Menu" << std::endl;
        std::cout << "1. Add Task" << std::endl;
        std::cout << "2. Delete Task" << std::endl;
        std::cout << "3. Update Task" << std::endl;
        std::cout << "4. Mark Task Completed" << std::endl;
        std::cout << "5. Mark Task Uncompleted" << std::endl;
        std::cout << "6. Display Tasks" << std::endl;
        std::cout << "7. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter task description: ";
                std::cin.ignore();
                std::getline(std::cin, description);
                user.add_task(description);
                std::cout << "Task added successfully!" << std::endl;
                break;
            case 2:
                std::cout << "Enter task index: ";
                std::cin >> index;
                user.delete_task(index - 1);
                break;
            case 3:
                std::cout << "Enter task index: ";
                std::cin >> index;
                std::cout << "Enter new task description: ";
                std::cin.ignore();
                std::getline(std::cin, description);
                user.update_task(index - 1, description);
                break;
            case 4:
                std::cout << "Enter task index: ";
                std::cin >> index;
                user.mark_task_completed(index - 1);
                break;
            case 5:
                std::cout << "Enter task index: ";
                std::cin >> index;
                user.mark_task_uncompleted(index - 1);
                break;
            case 6:
                user.display_tasks();
                break;
            case 7:
                std::cout << "Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    }

    return 0;
}
