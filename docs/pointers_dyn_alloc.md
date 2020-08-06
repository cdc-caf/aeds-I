## Structures and Datatypes
- Structures to group together heterogeneous pieces of information.
- A datatype is a set of values and a collection of operations on those values.
- Structures are aggregate types that we use to define collections of data such that we can manipulate an entire collection as a unit, but can still refer to individual components of a given datum by name.

## Pointers
- Pointers to refer to information indirectly.
- C provides us with the ability to manipulate data indirectly.
- A pointer is a reference to an object memory (usually implemented as a machine address)
- We declare a variable a to be a pointer to (for example) an integer by writing int *a, and we can refer to the integer itself as *a. We can declare pointers to any type of data. The unary operator & gives the machine address of an object and is useful for initializing pointers. For example, *&a is the same as a.
- Interested in working with huge collections of data. Pointer is needed.
- We may use an array, where we organize objects in a fixed sequential fashion that is more suitable for access than for  manipulation; or a list, where we organize objects in a logical sequential fashion that is more suitable for manipulation than for access.

## Array
- An array is a fixed collection of same-type data that are stored contiguously and that are accessible by an index.
- Arrays are fundamental data structures in that they have a direct correspondence with memory systems on virtually all computers.

## Memory Allocation
- Allocate memory in runtime, so arrays and datatypes can be more powerful and "without" a limitation of memory like fixed-length.
- When you pass the pointer to an array as an argument to a function, thus enabling  that function to access objects in the array without having  to make a copy of entire array.  
- Without memory allocation we would have to predeclare an array as large as any value that the user  is allowed to type. In a large program where we might use many arrays,  it is not feasible to do so for each array.
