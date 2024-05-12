# Vaccine-Tracking-System
# Data Structure Practice Project

This repository showcases a project focused on the application of data structures for efficient data management and operations. The primary objective is to utilize suitable data structures to store and manipulate datasets, including operations such as search, update, and delete.
## Key Features

    Data Structure Utilization: The project employs a Trie data structure to store the dataset, which represents the population of Egypt with dummy values. This choice is motivated by the Trie's ability to offer constant time complexity (O(1)) for operations, making it highly efficient for this application.

    SSN Handling: The project includes functionality for handling Egyptian National IDs (SSN), which are 14-digit strings. Each digit is processed individually, leveraging the Trie's constant time complexity for each digit, resulting in an overall complexity of O(1) for the entire 14-digit string.
## Implementation Details

    Trie Data Structure: The Trie is used as the primary data structure for storing the population dataset. Its constant time complexity for operations ensures fast and efficient data manipulation.

    SSN Processing: The project implements operations on the 14-digit SSN strings, processing each digit individually. Despite the sequential nature of the operation, the Trie's design allows for constant time complexity per digit, effectively reducing the overall complexity to O(1).

Using an appropriate data structure to store the dataset and apply operations such as search, update, and delete.

The data structure used for the main dataset of the population of Egypt (dummy values) was:
"Trie" with the runtime complexity of O(1)

The interactions are done by the SSN aka Egyptian National ID which is a 14-number String each number at a time with runtime complexity O(1) so for the 14 numbers it takes O(14) => O(1).
