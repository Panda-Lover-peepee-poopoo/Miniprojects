#include "task.h"

Task::Task(const std::string& description) : description(description), completed(false) {}

void Task::mark_completed() {
    completed = true;
}

void Task::mark_uncompleted() {
    completed = false;
}

std::string Task::toString() const {
    return (completed ? "✓" : "✗") + " " + description;
}
