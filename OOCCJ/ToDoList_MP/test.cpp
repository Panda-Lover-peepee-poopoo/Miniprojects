#include <iostream>
#include <string>
#include <vector>

// Task class to represent individual tasks
class Task {
private:
    std::string description;
    bool completed;

public:
    Task(const std::string& description) : description(description), completed(false) {}

    const std::string& get_description() const {
        return description;
    }

    bool is_completed() const {
        return completed;
    }

    void set_description(const std::string& new_description) {
        description = new_description;
    }

    void mark_completed() {
        completed = true;
    }

    void mark_uncompleted() {
        completed = false;
    }
};

// ToDoList class to manage the list of tasks
class ToDoList {
private:
    std::vector<Task> tasks;

public:
    void add_task(const std::string& description) {
        Task task(description);
        tasks.push_back(task);
    }

    void delete_task(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks.erase(tasks.begin() + index);
        } else {
            std::cout << "\n\nInvalid task index." << std::endl;
        }
    }

    void update_task(int index, const std::string& new_description) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].set_description(new_description);
        } else {
            std::cout << "\n\nInvalid task index." << std::endl;
        }
    }

    void mark_task_completed(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].mark_completed();
        } else {
            std::cout << "\n\nInvalid task index." << std::endl;
        }
    }

    void mark_task_uncompleted(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].mark_uncompleted();
        } else {
            std::cout << "\n\nInvalid task index." << std::endl;
        }
    }

    void display_tasks() const {
        std::cout << "Tasks:\n" << std::endl;
        for (size_t i = 0; i < tasks.size(); i++) {
            std::cout << "[" << i << "] ";
            if (!tasks[i].is_completed()) {
                std::cout << "[Incomplete] ";
            } else {
                std::cout << "[Completed] ";
            }
            std::cout << tasks[i].get_description() << std::endl;
        }
    }
};

int main() {
    ToDoList myList;

    int choice;
    do {
        std::cout << "To-Do List" << std::endl;
        std::cout << "1. Add Task" << std::endl;
        std::cout << "2. Delete Task" << std::endl;
        std::cout << "3. Update Task" << std::endl;
        std::cout << "4. Mark Task Completed" << std::endl;
        std::cout << "5. Mark Task Uncompleted" << std::endl;
        std::cout << "6. Display Tasks" << std::endl;
        std::cout << "7. Exit" << std::endl;
		std::cout << "Enter your choice: ";
		std::cin >> choice;
		    switch (choice) {
        case 1: {
            std::cout << "\nEnter task description: ";
            std::string description;
            std::cin.ignore(); // Ignore newline character from previous input
            std::getline(std::cin, description);
            myList.add_task(description);
            std::cout << "\n\nTask added successfully!\n" << std::endl;
            break;
        }
        case 2: {
            std::cout << "\nEnter task index to delete: ";
            int index;
            std::cin >> index;
            myList.delete_task(index);
            std::cout << "\n\nTask deleted\n\n";
			break;
        }
        case 3: {
            std::cout << "\nEnter task index to update: ";
            int index;
            std::cin >> index;
            std::cout << "\nEnter new task description: ";
            std::string new_description;
            std::cin.ignore(); // Ignore newline character from previous input
            std::getline(std::cin, new_description);
            myList.update_task(index, new_description);
            std::cout << "\n\nTask updated\n\n";
			break;
        }
        case 4: {
            std::cout << "\nEnter task index to mark as completed: ";
            int index;
            std::cin >> index;
            myList.mark_task_completed(index);
            std::cout << "\n\nTask Marked as completed\n\n";
			break;
        }
        case 5: {s
            std::cout << "\nEnter task index to mark as uncompleted: ";
            int index;
            std::cin >> index;
            myList.mark_task_uncompleted(index);
            std::cout << "\n\nTask Marked as uncompleted\n\n";
            break;
        }
        case 6: {
        	std::cout << "\n\n--------------------------------------" << std::endl;
            std::cout << "              TASKS LIST              " << std::endl;
            std::cout << "--------------------------------------\n\n" << std::endl;
            myList.display_tasks();
            break;
        }
        case 7: {
            std::cout << "Exiting...\n" << std::endl;
            break;
        }
        default: {
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    }
    std::cout << "\n";

} while (choice != 7);

return 0;
}

