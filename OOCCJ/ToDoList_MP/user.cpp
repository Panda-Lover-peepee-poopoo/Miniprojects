#include "user.h"

User::User(const std::string& name) : name(name) {}

void User::add_task(const std::string& description) {
    myList.add_task(description);
}

void User::delete_task(int index) {
    myList.delete_task(index);
}

void User::update_task(int index, const std::string& new_description) {
    myList.update_task(index, new_description);
}

void User::mark_task_completed(int index) {
    myList.mark_task_completed(index);
}

void User::mark_task_uncompleted(int index) {
    myList.mark_task_uncompleted(index);
}

void User::display_tasks() const {
    myList.display_tasks();
}
