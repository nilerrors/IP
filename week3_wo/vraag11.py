# Function to add a new task
def add_task(tasks, task):
    tasks.append(task)

# Function to update a task's status
def update_task(tasks, task, status):
    for _task in tasks:
        if _task['name'] == task:
            _task['status'] = status

# Function to print all pending tasks
def print_pending_tasks(tasks):
    pending_tasks = []
    for task in tasks:
        if task['status'] == 'pending':
            pending_tasks.append(task)
    for task in pending_tasks:
        print(task['name'])

# Function to check if a task is complete
def is_task_complete(tasks, task):
    for _task in tasks:
        if _task['status'] == 'complete' and _task['name'] == task:
            return True
    return False



tasks = []

# Adding tasks
add_task(tasks, {'name': 'Task 1', 'status': 'pending'})
add_task(tasks, {'name': 'Task 2', 'status': 'complete'})

update_task(tasks, 'Task 1', 'complete')

print_pending_tasks(tasks)

task_complete = is_task_complete(tasks, 'Task 1')
print("Is Task 1 complete?", task_complete)

