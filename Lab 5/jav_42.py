class Queue:
    def __init__(self):
        self.queue = []

    def enqueue(self, value):
        self.queue.append(value)

    def dequeue(self):
        if not self.is_empty():
            return self.queue.pop(0)
        else:
            return "Queue is empty"

    def front(self):
        if not self.is_empty():
            return self.queue[0]
        else:
            return "Queue is empty"

    def is_empty(self):
        return len(self.queue) == 0

# Example usage
queue = Queue()
queue.enqueue(10)
queue.enqueue(20)
print("Front element:", queue.front())
print("Dequeued element:", queue.dequeue())
print("Is queue empty?", queue.is_empty())
