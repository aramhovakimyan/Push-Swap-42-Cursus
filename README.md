# Push-Swap-42-Cursus
This project involves sorting a stack of integers using a limited set of operations.
# Push-Swap-42-Cursus

Welcome to push_swap, a project developed at 42 school. This project involves sorting a stack of integers using a limited set of operations.

## Table of Contents
- [Push-Swap-42-Cursus](#push-swap-42-cursus)
- [Push-Swap-42-Cursus](#push-swap-42-cursus-1)
  - [Table of Contents](#table-of-contents)
  - [Description](#description)
  - [Installation](#installation)
  - [Usage](#usage)
  - [Algorithm](#algorithm)
  - [Contributing](#contributing)
  - [License](#license)

## Description
The push_swap project is aimed at sorting a stack of integers in ascending order using two stacks (`stack A` and `stack B`) and a set of operations. The goal is to develop an algorithm that sorts the stack A with the minimum number of operations. The available operations are:
- `sa`: swap the first two elements of stack A
- `sb`: swap the first two elements of stack B
- `ss`: perform `sa` and `sb` simultaneously
- `pa`: move the first element from stack B to stack A
- `pb`: move the first element from stack A to stack B
- `ra`: rotate stack A (shift all elements up by one)
- `rb`: rotate stack B (shift all elements up by one)
- `rr`: perform `ra` and `rb` simultaneously
- `rra`: reverse rotate stack A (shift all elements down by one)
- `rrb`: reverse rotate stack B (shift all elements down by one)
- `rrr`: perform `rra` and `rrb` simultaneously

## Installation
1. Clone the repository to your local machine using the following command:
	`git clone <repository-url>`

2. Change to the project directory:
	`cd Push-Swap-42-Cursus`

3. Build the executable using the provided Makefile:
	`make`


## Usage
To use push_swap, run the following command:

`./push_swap [list of integers]`

Replace `[list of integers]` with the integers you want to sort. The program will display the operations required to sort the stack A in ascending order.

To check if the operations provided by push_swap are correct, you can use the following command:

`./push_swap [list of integers] | ./checker [list of integers]`

Replace `[list of integers]` with the same set of integers used with push_swap. The checker program will validate the operations and provide the result as `OK` or `KO`.

## Algorithm
The push_swap project requires the implementation of an efficient sorting algorithm to minimize the number of operations. There are multiple approaches to solving this problem, including various sorting algorithms, such as quicksort or mergesort. The specific algorithm used will depend on your implementation.

## Contributing
Contributions to push_swap are welcome. If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request.

## License
This project is licensed under the [MIT License](LICENSE).
