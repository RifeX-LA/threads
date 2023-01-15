# Overview

Header only library to provide a simple interface for threads.

Features:

1. Get available number of hardware thread contexts or 1 if this information is not available.
    ```c++
    std::cout << flow::threads::available();
    ```
   
    Possible output:
    ```
    8
    ```
    or `1` if the information is not available.


2. Get the number of hardware thread contexts or 2 if this information is unavailable (usefull when you want to use at least 2 threads).

    ```c++
    std::cout << flow::threads::concurrent_availalbe();
    ```
   
    Possible output:
    ```
    8
    ```
    or `2` if the information is not available.


3. Get the optimal number of hardware thread contexts for task size of `n`. Which means that the `n` is the maximum number, that function can return. The minimum return value is n, if n is less than 2, or 1 otherwise.

    ```c++
    std::cout << flow::threads::optimal(100) << std::endl;
    std::cout << flow::threads::optimal(2) << std::endl;
    std::cout << flow::threads::optimal(0) << std::endl;
    ```
   
    Possible output:
    ```
    8
    2
    0
    ```
   
4. Get the optimal number of hardware thread contexts for task size of `n`. Which means that the `n` is the maximum number, that function can return. The minimum return value is n, if n is less than 2, or 2 otherwise.
    
    ```c++
    std::cout << flow::threads::optimal(100) << std::endl;
    std::cout << flow::threads::optimal(2) << std::endl;
    std::cout << flow::threads::optimal(0) << std::endl;
    ```
   
    Possible output:
    ```
    8
    2
    0
    ```

# Usage

Put the `flow` directory to your project and include the `flow/threads.hpp` header file. Nothing to build.

# Requirements

C++11