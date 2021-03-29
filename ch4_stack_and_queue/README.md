To run the program
```
gcc queue.c -o queue.o
./queue.o
```

There are 4 options. Below shows example of playing with the system.
```
Welcome to small QUEUE!
Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Enter key of the item: 1
queue: [1], Size of Queue: 1
front: -1, rear: 0

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Enter key of the item: 2
queue: [1,2], Size of Queue: 2
front: -1, rear: 1

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Enter key of the item: 3
queue: [1,2,3], Size of Queue: 3
front: -1, rear: 2

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Enter key of the item: 4
queue: [1,2,3,4], Size of Queue: 4
front: -1, rear: 3

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Enter key of the item: 5
queue: [1,2,3,4,5], Size of Queue: 5
front: -1, rear: 4

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Deleted [1] from the queue.
queue: [2,3,4,5], Size of Queue: 4
front: 0, rear: 4

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Deleted [2] from the queue.
queue: [3,4,5], Size of Queue: 3
front: 1, rear: 4

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Deleted [3] from the queue.
queue: [4,5], Size of Queue: 2
front: 2, rear: 4

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Deleted [4] from the queue.
queue: [5], Size of Queue: 1
front: 3, rear: 4

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Deleted [5] from the queue.
queue: [], Size of Queue: 0
front: 4, rear: 4

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Queue is Empty. Cannot dequeue.
queue: [], Size of Queue: 0
front: 4, rear: 4

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Enter key of the item: 1
queue: [1], Size of Queue: 1
front: -1, rear: 0

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Enter key of the item: 2
queue: [1,2], Size of Queue: 2
front: -1, rear: 1

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Enter key of the item: 3
queue: [1,2,3], Size of Queue: 3
front: -1, rear: 2

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Enter key of the item: 4
queue: [1,2,3,4], Size of Queue: 4
front: -1, rear: 3

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Enter key of the item: 5
queue: [1,2,3,4,5], Size of Queue: 5
front: -1, rear: 4

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Enter key of the item: 1
Queue is full. Cannot enqueue any value.
queue: [1,2,3,4,5], Size of Queue: 5
front: -1, rear: 4

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 3
Front of the queue is: [1]

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Deleted [1] from the queue.
queue: [2,3,4,5], Size of Queue: 4
front: 0, rear: 4

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 3
Front of the queue is: [2]

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Deleted [2] from the queue.
queue: [3,4,5], Size of Queue: 3
front: 1, rear: 4

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 3
Front of the queue is: [3]

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Deleted [3] from the queue.
queue: [4,5], Size of Queue: 2
front: 2, rear: 4

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 3
Front of the queue is: [4]

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Deleted [4] from the queue.
queue: [5], Size of Queue: 1
front: 3, rear: 4

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 3
Front of the queue is: [5]

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Deleted [5] from the queue.
queue: [], Size of Queue: 0
front: 4, rear: 4

Please select option below:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 4
Thank you. Good bye :)
```
