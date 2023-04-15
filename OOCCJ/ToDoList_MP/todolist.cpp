#include "todolist.h"

void ToDoList::add_task(const std::string& description) {
    tasks.push_back(Task(description));
}

void ToDoList::delete_task(int index) {
    tasks.erase(tasks.begin() + index);
}

void ToDoList::update_task(int index, const std::string& new_description) {
    tasks[index] = Task(new_description);
}

void ToDoList::mark_task_completed(int index) {
    tasks[index].mark_completed();
}

void ToDoList::mark_task_uncompleted(int index) {
    tasks[index].mark_uncompleted();
}

void ToDoList::display_tasks() const {
    // implementation
}
