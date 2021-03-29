To run the program
```
gcc cqueue.c -o cqueue.o
./cqueue.o
```

This queue used array, but circular way, so that we do not need to rearrange, when the rear hits the end of the array.
You can queue, dequeue, peek. 
Below is the example of using the program:
```
Welcome to Circular Queue World!
Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Please enter value: 4
Enqueued [4] at [1]
Queue: [4]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Please enter value: 5
Enqueued [5] at [2]
Queue: [4,5]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Please enter value: 6
Enqueued [6] at [3]
Queue: [4,5,6]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Please enter value: 7
Enqueued [7] at [4]
Queue: [4,5,6,7]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Please enter value: 3
Enqueued [3] at [5]
Queue: [4,5,6,7,3]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Please enter value: 2
[ERROR] Queue is full. Cannot insert before dequeue.
Queue: [4,5,6,7,3]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Dequeued [4] at [1]
Queue: [5,6,7,3]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Dequeued [5] at [2]
Queue: [6,7,3]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Dequeued [6] at [3]
Queue: [7,3]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Please enter value: 4
Enqueued [4] at [0]
Queue: [7,3,4]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Please enter value: 5
Enqueued [5] at [1]
Queue: [7,3,4,5]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Please enter value: 6
Enqueued [6] at [2]
Queue: [7,3,4,5,6]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Please enter value: 2
[ERROR] Queue is full. Cannot insert before dequeue.
Queue: [7,3,4,5,6]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Dequeued [7] at [4]
Queue: [3,4,5,6]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Dequeued [3] at [5]
Queue: [4,5,6]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Dequeued [4] at [0]
Queue: [5,6]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Dequeued [5] at [1]
Queue: [6]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Dequeued [6] at [2]
Queue: []

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
[ERROR] Queue is empty. Cannot dequeue from the queue.
Queue: []

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 3
[ERROR] Queue is empty. Cannot find peek of the queue.

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Please enter value: 4
Enqueued [4] at [3]
Queue: [4]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 3
Peek is [4] at [3]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Please enter value: 2
Enqueued [2] at [4]
Queue: [4,2]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 3
Peek is [4] at [3]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 1
Please enter value: 5
Enqueued [5] at [5]
Queue: [4,2,5]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 3
Peek is [4] at [3]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Dequeued [4] at [3]
Queue: [2,5]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 3
Peek is [2] at [4]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Dequeued [2] at [4]
Queue: [5]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 3
Peek is [5] at [5]

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 2
Dequeued [5] at [5]
Queue: []

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 3
[ERROR] Queue is empty. Cannot find peek of the queue.

Please choose option:
1. Queue, 2. Dequeue, 3. Peek, 4. Exit => 4
Thank you. Good Bye. Bye. Bye. and Bye.
```
