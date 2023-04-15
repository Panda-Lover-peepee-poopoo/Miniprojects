#include "user.h"
#include <iostream>

using namespace std;

int main() {
    User user("Chad"); // Create a User object with the name "Chad"
    
    int choice;
    string task_description;
    
    do {
        cout << "==== ToDo List Menu ====" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. Mark Task Completed" << endl;
        cout << "3. Mark Task Uncompleted" << endl;
        cout << "4. Update Task Description" << endl;
        cout << "5. Display Tasks" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: {
                cout << "Enter task description: ";
                cin.ignore();
                getline(cin, task_description);
                user.add_task(task_description);
                cout << "Task added successfully!" << endl;
                break;
            }
            case 2: {
                int index;
                cout << "Enter index of task to mark completed: ";
                cin >> index;
                user.mark_task_completed(index);
                cout << "Task marked as completed!" << endl;
                break;
            }
            case 3: {
                int index;
                cout << "Enter index of task to mark uncompleted: ";
                cin >> index;
                user.mark_task_uncompleted(index);
                cout << "Task marked as uncompleted!" << endl;
                break;
            }
            case 4: {
                int index;
                string new_description;
                cout << "Enter index of task to update: ";
                cin >> index;
                cout << "Enter new task description: ";
                cin.ignore();
                getline(cin, new_description);
                user.update_task(index, new_description);
                cout << "Task description updated!" << endl;
                break;
            }
            case 5: {
                user.display_tasks();
                break;
            }
            case 6: {
                cout << "Goodbye!" << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (choice != 6);
    
    return 0;
}
