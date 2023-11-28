# Assignment-5
Kareem Elnaghy 900223587 
The analysis can be found in the main function in comments or down below :

 Analysis:
 The buildmaxheap and buildminheap functions both have a time complexity of O(N), where N is the size fo the heap.
 The heapify functions have a time complexity of O(log N), where N is the size fo the heap.
 The function that reads from the txt file and assigns the values to an array has a time complexity of O(N),
 where N is the number of lines in the text file.
 The getMean function has a time complexity of O(N), where N is the size of the heap.
 The function for the mostPositiveChanges and mostNegativeChanges has a complexity of O(Nlog N), since it iterates
 over the first N elements and calls the buildmaxheap and buildminheap functions.
 The maximum subsequence function has a time complexity of O(N) since it iterates over the size of the heap.

 Therefore, the total complexity of the entire program will be O(Nlog N) which is a result of the addition of the
 complexities of all the functions used in the program and by neglecting lower order terms. Since Nlog N > logN > N,
 the overall time complexity will be O(Nlog N).
