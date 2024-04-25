# Financial Time Series Analysis

## Overview
This project analyzes the EURO/USD exchange rate time series data to identify significant changes and patterns. It involves finding the dates of the highest and lowest exchange rate changes, as well as determining the contiguous period with the maximum sum of rate changes.

## Contents
1. **Heap Functions Implementation:** Implementation of Build_Max_Heap and Build_Min_Heap functions using the Heapify algorithm, without using any sorting operation.
2. **Maximum Subsequence Sum Algorithm:** Implementation of an efficient algorithm to find the maximum sum of rate changes within a sequence of numbers.
3. **Program Execution:** Implementation and execution of a program to find the N highest and N lowest exchange rate days, along with the start and end days of the contiguous period with the maximum sum of rate changes.
4. **Results and Analysis:** Text file containing the program results and analysis of the algorithms used, including their total complexity.

## Execution Instructions
1. Compile the C++ codes provided for the heap functions, maximum subsequence sum algorithm, and the main program.
2. Execute the compiled program.
3. Follow the on-screen instructions to input the desired parameters, such as the number of highest/lowest exchange rate days (N).
4. Observe the program output, which includes the identified dates and the start/end dates of the contiguous period with the maximum sum of rate changes.
5. Refer to the accompanying text file for detailed analysis of the program results and algorithms used.

## Analysis
The time complexity analysis of the program components is as follows:
- Build_Max_Heap and Build_Min_Heap functions: O(N)
- Heapify functions: O(log N)
- Reading from the text file and array assignment: O(N)
- Calculation of mean: O(N)
- Finding most positive and negative changes: O(N log N)
- Maximum subsequence sum function: O(N)

Therefore, the total complexity of the entire program is O(N log N), resulting from the addition of complexities of all functions used, and by neglecting lower-order terms. Since N log N > N > log N, the overall time complexity is O(N log N).

This analysis provides insights into the efficiency of the program and helps understand its scalability with larger datasets.

Feel free to reach out if you have any questions or need further clarification on the project or its implementation!
