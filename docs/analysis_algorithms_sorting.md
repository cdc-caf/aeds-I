## Analysis of Algorithms
- We can save factors thousands or millions in the running time with appropriate algorithm design choices.
- Faster algorithms are often more complicated than brute-force solutions, and implementors are often willing to accept a slower algorithm to avoid having to deal with added complexity.
- When we are dealing with huge problem sizes, we have no choice but to seek a better algorithm.
- Improving the running time of a program y a factor of 10 is inconsequential if the program take only a few microseconds.
- First, C programs are translated into machine code for a given computer, and it can be a challenging task to figure out exactly how long even one C statement might take to execute (especially in an environment where resources are being shared, so even the same program can have varying performance characteristics at two different times). Second, many programs are extremely sensitive to their input data, and performance might fluctuate wildly depending on the input. Third, many programs of interest are not well understood, and specific mathematical results may not be available. Finally, two programs might not be comparable at all: one may run much more efficiently on one particular kind of input, the other runs efficiently under other circumstances. 
- It's the task of algorithm analyst to discover as much information as possible about the performance of algorithms; it is the task of the programmer to apply such information in selecting algorithms for particular applications.
- Identify the abstract operations on which algorithm is based, to separate analysis from the implementation. This separation often allows us to compare algorithms that are independent of particular implementations or of particular components.
- The performance of algortihm typically depends on only a few quantities, and typically the most important quantities to analyze are easy to identify.
- We also have to study the data, an to model the input that might be processed to the algorithms. There are two approaches to the analysis: we either assume that the input is random, and study the average-case performance of the program, or we look for perverse input, and study the worst-case performance of the program.
- We cannot do thorough mathematical and empirical studies of every algorithm that we encounter, but we strive to identify essential performance characteristics, knowing that, in principle, we can develop a scientific basis for making informed choices among algorithms in critical applications.

## Growth of functions
- Most algorithms have a primary parameter N that affects the running time most significantly.
- Constants give us more detail than we really need. For example, the worst-case running time is an^2+bn+c for some constants a, b, and c. We thus ignored not only the actual statement costs, but also the abstract costs. 
- Order of growth that really interest us. We therefore consider only the leading term of formula (e.g., an^2), since the lower-order terms are relatively insignificantfor large n. We also ignore the leading term’s constant coefficient, since constant factors are less significant than the rate of growth in determining computational efficiency for large inputs.
- When we look at input sizes large enough to make only the order of growth of the running time relevant, we are studying asymptotic efficiency of algorithms, how the running time of an algorithm increases with the size of the input. An algorithm that is asymptotically more efficient will be the best choice for all but very small inputs.
- Since O-notation describes an upper bound, when we use it to bound the worst-case running time of an algorithm, we have a bound on the running time of the algorithm on every input.
- When we say "the running time is O(n²)", we mean that there is a function f(n) that is O(n²) such that for any value of n, no matter what particular input of size nis chosen, the running time on that input is bounded from above by the value f(n). Equivalently, we mean that the worst-case running time is O(n²). 

## Recurrences
- When algorithm contains a recursive call to itself, its running time can often be described by a recurrence.
- A recurrence is an equation or inequality that describes a function in terms of its value on smaller inputs.
- Three approaches to solve recurrences: substitution method, recursion tree and master method. Chapter 4 of Thomas H. Cormen, "Intorduction of Algorithms". 

## Sortings
- If the file to be sorted will fit into memory, then the sorting method is called internal. Sorting files from disk is called external sorting. The main difference between the two is that an internal sort can access any item easily whereas an external sort must access item sequentially, or at least in large blocks.
- During thedevelopment of our algorithms, we shall also encounter some basic tasks that are best suited for sequential allocation, and other tasks that are best suited to linked allocation.
- Nonadaptive sort - the sequence of operations that it performs is independent of the order of the data.
- Adaptive sort- the sequence of operations that it performs different sequences of operations, depending on the outcomes of comparisons.
- Three types of sorting: those that sort in place and use no extra memory except perhaps for a small stack or table; those that use a linked-list representation or otherwise refer to data through pointers or array indices, and so need extra memory for N pointers or indices; and those that need enough extra memory to hold another copy of the array to be sorted.
- A sorting method is said to be stable if it preserves the relative order of duplicate keys in the file.
- Methods
	- Selection Sort: First, find the smallest element in the array, and exchange it with the element in the first position. Then, find the second smallest element and exchange it with the element in the second position. Continue in this way until the entire array is sorted.
		- A disadvantage of this method is that its running time depends only slightly on the amount of order already in the file.
	- Insertion Sort: Consider the elements one at a time, inserting each in its proper place among those already considered (keeping them sorted). We need to make space for the element being inserted by moving larger elements one position to the right, and then in inserting the element into vacated position.
	- Bubble Sort: Keep passing through the file, exchanging adjacent elements that are out of order, continuing until the file is sorted.    
- Insertion Sort, Selection Sort and Bubble Sort methods require time proportional to N² to sort N items. Generally, the running time of a sorting algorithm is proportionally to the number of comparisons that the algorthm uses, to the number that items are moved or exchanged, or to both.
- An inversion is a pair of keys that are out of order in the file.
- To count the number of inversions, we can add up, for each element, the number of elements to its left that are greater (we refer to this quantity as the number of inversions corresponding to the element).
- Insertion sort and bubble sort use a linear number of comparisons and exchanges for files with at most a constant number of inversions corresponding to each element.
- Insertion sort uses a linear number of comparisons and exchanges for files with at most a constant number of elements with more than a constant number of corresponding inversions.
- Selection Sort runs in linear time for files with large items and small keys.
- Insertion Sort is slow because the only exchanges it does involve adjacent items, so items can move through the array only one place at a time.

## Quicksort
- The running time of quicksort depends on the input, ranging from linear to quadratic in the number of items to be sorted, and people sometimes surprised by undesirable and unexpected effects for some inputs, particularly in highly tuned versions of the algorithm.
- For huge files, quicksort is likely to run five to ten times as fast as shellsort, and it can adapt to be even more efficient for other types of files that might occur in practice.
- Works by partitioning an array into two parts, then sorting the parts independently. The precise position of the partition depends on the initial order of the elements in the input file.

## Heapsort
-  Its primary disadvantage is that the inner loop is comparatively long, so that implementations tend to be about twice as slow as QuickSort, for example. 
-  the method treats an array as a complete tree stored in level order and is based on maintaining a so-called heap ordering on the array values, defined as follows: A heap of N keys in an array a[1...N] has a[i] greater than a[2i] and a[2i+1] for 1 <= i <= floor(n/2). Equivalently, a[i] is less than a[i div 2] for 2 <= i <= N.
-  the running time depends primarily on two quantities: the number of "data moves" and the of right turns. Some researches work with the number of comparisons used, which is closely related to the number of data moves.
-  a priority queue is a data structure of items with keys that supports two basic operations: insert a new item, and delete the item with the largest key.
-  In a heap, the records are stored in an array such that each key is guaranteed to be larger than the keys at two other specific positions. In turn, each of those keys must be larger than two more keys, and so forth.
-  A tree is heap-ordered if the key in each node is larger than or equal to the keys in all of that node's children (if any). Equivalently, the key in each node of a heap-ordered tree is smaller than or equal to the key in that node's parent (if any).
-  No node in a heap-ordered tree has a key larger than the key at the root.
-  A heap is a set of nodes with keys arranged in a complete heap-ordered binary tree, represented as an array.
-  The priority-queue algorithms on heaps all work by first making a simple modification that could violate the heap condition, then traveling through the heap, modifying the heap as required to ensure that the heap condition is satisfied everywhere.
-  If the heap property is violated because a node's key becomes larger than that node's parent's key, then we can make progress toward fixing the violation by exchanging the node with its parent. After the exchange, the node is larger than both its children (one is the old parent, the other is smaller than the old parent because it was a child of that node) but may be still be larger than its parent. We can fix that violation in the same way, and so forth, moving up the heap until we reach a node with larger key, or the root.
-  If the heap property is violated because a node's key becomes smaller than one or both of that node's childrens' key, then we can make progress toward fixing the violation by exchanging the node with the larger of its two children. This switch may cause a violation at the child; we fix that violation in the same way, and so forth, moving down the heap until we reach a node with both children smaller, or the bottom.
-  The change priority, delete and replace maximum operations for the priority queue abstract data type can be implemented with heap-ordered trees such that no more than 2lgn comparisons are required for any operation on an N-item queue.
- There is no worst-case input that makes heapsort run significantly slower (unlike quicksort), and heapsort does not use any extra space (unlike mergesort). This guaranteed worst-case performance does come at a price: the algorithm's inner loop (cost per comparison) has more basic operations than quicksort's, and it uses more comparisons than quicksort for random files, so heapsort is likely to be slower than quicksort for typical or random files.
- Quicksort vs Heapsort - https://www.cs.auckland.ac.nz/software/AlgAnim/qsort3.html
