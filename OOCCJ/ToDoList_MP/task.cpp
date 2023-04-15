#include "task.h"

Task::Task(const std::string& description, bool completed)
    : description(description), completed(completed) {}

void Task::set_description(const std::string& description) {
    this->description = description;
}

std::string Task::get_description() const {
    return description;
}

void Task::set_completed(bool completed) {
    this->completed = completed;
}

bool Task::is_completed() const {
    return completed;
}
