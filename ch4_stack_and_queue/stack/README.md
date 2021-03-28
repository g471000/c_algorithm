To run the program..
```
gcc stack.c -o stack.o
./stack.o
```

This will who option to Push, Pop, Print of the stack and also Exit.
Below is an example of using the program:
```
Welcome to small stack world! Stack MAX size is 10.
Please select option:
1. Push, 2. Pop, 3. Print, 4. Exit => 1
Insert value to push: 3
Inserted [3] at top [0]
Size of Stack: 1

Please select option:
1. Push, 2. Pop, 3. Print, 4. Exit => 1
Insert value to push: 2
Inserted [2] at top [1]
Size of Stack: 2

Please select option:
1. Push, 2. Pop, 3. Print, 4. Exit => 1
Insert value to push: 4
Inserted [4] at top [2]
Size of Stack: 3

Please select option:
1. Push, 2. Pop, 3. Print, 4. Exit => 1
Insert value to push: 5
Inserted [5] at top [3]
Size of Stack: 4

Please select option:
1. Push, 2. Pop, 3. Print, 4. Exit => 3
stack(bottom -> top): [3,2,4,5], size of Stack: 4

Please select option:
1. Push, 2. Pop, 3. Print, 4. Exit => 2
Poped [5] at top [3]
Size of Stack: 3

Please select option:
1. Push, 2. Pop, 3. Print, 4. Exit => 2
Poped [4] at top [2]
Size of Stack: 2

Please select option:
1. Push, 2. Pop, 3. Print, 4. Exit => 3
stack(bottom -> top): [3,2], size of Stack: 2

Please select option:
1. Push, 2. Pop, 3. Print, 4. Exit => 4
Thank you. Good bye!

```
