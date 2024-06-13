# PyPlus.hpp

## Overview

`PyPlus.hpp` is a C++ header file that provides a collection of preprocessor macros and template functions to enhance the functionality of C++ code, especially when working with collections. It includes utilities for checking conditions on elements, calculating sums and products, and streamlining the output of iterable containers.

## Features

- **Conditional Macros**: `any`, `all`, `none` for checking if any, all, or none of the elements in a collection satisfy a given condition.
- **Aggregation Macros**: `sum`, `product` for calculating the sum or product of elements in a collection.
- **Stream Insertion Operator Overload**: for printing iterable containers in a readable format.

## Usage

### Conditional Checks

- `any(item, function)`: Returns `true` if any element satisfies the condition specified in `function`.
- `all(item, function)`: Returns `true` if all elements satisfy the condition specified in `function`.
- `none(item, function)`: Returns `true` if no elements satisfy the condition specified in `function`.

### Aggregation

- `sum(tp, item, function)`: Calculates the sum of elements in a collection.
- `product(tp, item, function)`: Calculates the product of elements in a collection.

### Stream Insertion

- Overloads the `<<` operator to print iterable containers like `std::vector`, `std::list`, etc.

## Requirements

This header requires a C++ compiler that supports C++20 or later due to the use of the `concept` keyword.

## Installation

Simply include the `PyPlus.hpp` file in your project and make sure it is in your include path.

## Example

```cpp
#include "PyPlus.hpp"
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << "Any number greater than 3: " << any(n > 3, for (int n : numbers)) << '\n';
    std::cout << "All numbers greater than 0: " << all(n > 0, for (int n : numbers)) << '\n';
    std::cout << "None number equal to 6: " << none(n == 6, for (int n : numbers)) << '\n';
    std::cout << "Sum of numbers: " << sum(int, n, for (int n : numbers)) << '\n';
    std::cout << "Product of numbers: " << product(int, n, for (int n : numbers)) << '\n';
    std::cout << "Numbers: " << numbers << '\n';
    return 0;
}
```

## License

This project is open source and available under the [MIT License](LICENSE.md).

## Contributions

Contributions are welcome. Please open an issue or submit a pull request with your changes.

## Contact

For any queries or feedback, please contact the repository owner.
