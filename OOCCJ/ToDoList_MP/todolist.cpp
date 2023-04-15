#include "todolist.h"
#include <iostream>

void TodoList::add_task(const std::string& description) {
    Task task(description);
    tasks.push_back(task);
}

void TodoList::delete_task(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks.erase(tasks.begin() + index);
    } else {
        std::cout << "Invalid task index. Please try again." << std::endl;
    }
}

void TodoList::update_task(int index, const std::string& new_description) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].set_description(new_description);
    } else {
        std::cout << "Invalid task index. Please try again." << std::endl;
    }
}

void TodoList::mark_task_completed(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].set_completed(true);
    } else {
        std::cout << "Invalid task index. Please try again." << std::endl;
    }
}

void TodoList::mark_task_uncompleted(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].set_completed(false);
    } else {
        std::cout << "Invalid task index. Please try again." << std::endl;
    }
}

void TodoList::display_tasks() const {
    if (tasks.empty()) {
        std::cout << "No tasks in the list." << std::endl;
    } else {
        std::cout << "Tasks: " << std::endl;
        for (int i = 0; i < tasks.size(); i++) {
            std::cout << "[" << (i + 1) << "] " << tasks[i].get_description();
            if (tasks[i].is_completed()) {
                std::cout << " [Completed]";
            }
            std::cout << std::endl;
        }
    }
