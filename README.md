# Vector and Probability Calculator

Welcome to the **Vector and Probability Calculator**, your comprehensive companion for performing vector operations and probability calculations directly from the command line. Whether you're a student, educator, or professional, this tool offers a user-friendly interface to handle various mathematical computations efficiently.

## Table of Contents

- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Functionalities](#functionalities)
  - [1. Vector Addition and Dot Product](#1-vector-addition-and-dot-product)
  - [2. Check Orthogonality of Vectors](#2-check-orthogonality-of-vectors)
  - [3. Check Orthonormality of a Vector](#3-check-orthonormality-of-a-vector)
  - [4. Probability: Combinations & Permutations](#4-probability-combinations--permutations)
  - [5. Hypergeometric Distribution](#5-hypergeometric-distribution)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Features

- **Vector Operations**: Add two vectors of varying sizes and compute their dot product.
- **Orthogonality Check**: Determine whether two vectors are orthogonal.
- **Orthonormality Check**: Verify if a single vector is orthonormal.
- **Probability Calculations**: Compute combinations (nCr) and permutations (nPr) efficiently.
- **Hypergeometric Distribution**: Calculate probabilities based on the hypergeometric distribution.
- **User-Friendly Interface**: Clear prompts and colored outputs enhance the user experience.
- **Cross-Platform Compatibility**: Designed for Unix-based systems (uses `clear` command).

## Installation

### Prerequisites

- **C Compiler**: Ensure you have a C compiler installed. You can use `gcc` which is commonly available on Unix-based systems.

### Steps

1. **Clone the Repository**

   ```bash
   git clone https://github.com/ibesuperv/C-EL.git
   ```

2. **Navigate to the Directory**

   ```bash
   cd vector-probability-calculator
   ```

3. **Compile the Program**

   ```bash
   gcc -o calculator C-el.c
   ```

   Replace `main.c` with the actual filename if different.

4. **Run the Program**

   ```bash
   ./calculator
   ```

## Usage

Upon running the program, you'll be greeted with a welcome screen followed by a main menu offering various mathematical computations. Navigate through the menu by entering the corresponding number for the desired operation.

### Main Menu Options

1. **Vector Addition and Dot Product of Two Vectors**
2. **Check Whether Two Vectors are Orthogonal**
3. **Check Whether a Vector is Orthonormal**
4. **Probability: Combinations & Permutations**
5. **Hypergeometric Distribution**
0. **Exit**

Enter the number corresponding to your choice and follow the on-screen prompts to perform calculations.

## Functionalities

### 1. Vector Addition and Dot Product

**Description**: Add two vectors of specified sizes and compute their dot product.

**Usage**:
- Enter the size of the first and second vectors.
- Input the elements for both vectors.
- The program will display the resultant added vector and the dot product.

### 2. Check Orthogonality of Vectors

**Description**: Determine if two vectors are orthogonal (i.e., their dot product is zero).

**Usage**:
- Enter the sizes and elements of the two vectors.
- The program will indicate whether the vectors are orthogonal.

### 3. Check Orthonormality of a Vector

**Description**: Verify if a single vector is orthonormal (i.e., it has a unit norm).

**Usage**:
- Enter the size and elements of the vector.
- The program will confirm if the vector is orthonormal.

### 4. Probability: Combinations & Permutations

**Description**: Calculate combinations (nCr) and permutations (nPr) based on user input.

**Usage**:
- Enter values for `n` (total items) and `r` (items to choose or arrange).
- The program will display both nCr and nPr.

### 5. Hypergeometric Distribution

**Description**: Calculate the probability of a certain number of successes in a sample without replacement.

**Usage**:
- Enter the population size (N), number of successes in the population (K), sample size (r), and number of successes in the sample (k).
- The program will compute and display the probability.

## Screenshots

*Include screenshots of the program in action to give users a visual understanding.*



## Contributing

Contributions are welcome! Please follow these steps:

1. **Fork the Repository**

2. **Create a Feature Branch**

   ```bash
   git checkout -b feature/YourFeature
   ```

3. **Commit Your Changes**

   ```bash
   git commit -m "Add your feature"
   ```

4. **Push to the Branch**

   ```bash
   git push origin feature/YourFeature
   ```

5. **Open a Pull Request**

## License

This project is licensed under the [MIT License](LICENSE).

## Contact

For any inquiries or support, please contact:

- **Email**: your.email@example.com
- **GitHub**: [@yourusername](https://github.com/yourusername)

---

*Happy Computing!*
