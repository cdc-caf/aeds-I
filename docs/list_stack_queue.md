## Linked List
- The primary advantage of linked lists over arrays is that the links provide us with the capability to rearrange the items efficiently. This flexibility is gained at the expense of quick access to any arbitrary item in the list, because the only way to get to an item in the list is to follow links from the beginning.
- A linked list is a set of items where each item is part of a node that also contains a link to a node.
- Moreover, although a node's link usually refers to a different node, it could refer to the node itself, so linked lists can also be cyclic structures.
- Conventions for the link in the final node: (link)
- It is a null link that points  to no node.
- It refers to a dummy node that contains no item.
- It refers back to the first node, making the list a circular list.
- Arrays also support arbitray access by index, which lists do not.
- Memory allocation is a central consideration in the effective use of linked list. It's important to remember that we will have many instances of this structure, one for each node that we want to use.
- Insertion and deletion are unnatural and inconvenient in arrays, because they require moving all of the array's contents following the affected item.
- Linked lists are not well suited for the find the kth item(find an item given its index). Another operation that is unnatural on singly linked lists is find the item before a given item.
- When we choose a data structure, we must be aware of the effects of that choice upon effiency of the algorithms that will process the data.
- An advantage of linked lists over arrays is that linked lists gracefully grow and shrink during their lifetime. In particular, their maximum size does not need to be known in advance.

Doubly Linked List
- support the operation "find the item before a given item" by using a doubly linked list in which we maintain two links for each node: one (prev) to the item before, and another (next) to the item after.

## Abstract Data Types
- With abstract data types, we can separate the conceptual transformations that our programs perform on our data from any particular data structure representation and algorithm implementation
- Abstract data types allow us to take this process further, to develop abstract  mechanisms for certain computational tasks at a higher level than provided by C system.
- To develop a new layer of abstraction, we need to define the abstract objects that we want to manipulate and the operations that we perform on them; we need to represent the data in some data  structure and to implement the operations; and (the point of the exercise) we want to ensure that the objects are convenient to use to solve an applications problem.
- An abstract data type (ADT) is a data type (a set of values and a collection of operations on those values) that is accessed only through an interface.
- ADTs provide the flexibility necessary to make it convenient to change or improve the fundamental data structures and algorithms in the system. Most important, the ADT interface defines a contract between users and implementors that provides a precise means of communicating what each can expect of the other.
- What we like to do with our data? Then, we define an interface and write client code to test the hypothesis that the existence of the ADT would make it easier for us to implement the client program. 
- What basic operations would client programs want to perform on the data at hand?
- Which operations do we know how to implement efficiently?
- To evaluate the effectiveness of a particular ADT, we need to consider two costs: the implementation cost, which depends on our choice of algorithm and data structure for the implementation; and the cost of particular decision-making rule in terms of effect on the performanceof the client.

## Collections
- Arrays and linked lists provide basic mechanisms that allow us to insert and delete specified items. Indeed, linked lists and arrays are the underlying data structures for several of the implementations of collections.
- The cost of insertion and deletion is dependent on the specific structure that we use and the specific item being inserted or deleted.
- The challenge is to choose a data structure that allows us to perform the required operations efficiently.

## Stack
- A stack is an ADT that comprises two basic operations: insert(push) a new item, and delete(pop) the item that was most recently inserted. 
- Items are removed according to last-in, first-out(LIFO) discipline.
- Each push increases the size of stack by 1 and each pop decreases the size of stack by 1.
- Many computers implement a function-call mechanism: Save the current environment on entry to a procedure by pushing information popped onto a stack; restore the environment on exit by using information popped from the stack.
- The array implementation uses the amount of space necessary to hold the maximum number of items expected throughout the computation; the list implementation uses space proportional to the number of items, but always uses extra space for one link per item and uses extra time, to allocate memory for each push and deallocate memory for each pop. 
- If we need a huge stack that is ususally nearly full, we might prefer the array implementation; if we have a stack whose size varies dramatically and other data structures that could make use of the space not being used when the stack has only a few items in it, we might prefer the linked-list implementation.
- We can implement the push and pop operations for the stack ADT in constant time, using either arrays or linked lists. 

## Queue
- Rather than removing the most recently inserted element, we remove the element that has been in the queue the longest.
- Queues are frequently used within computer systems to hold tasks that are yet to be accomplished when we want to provide services in a first-come, first-served basis.
- A FIFO queue is an ADT that comprises two basic operations: insert(put) a new item, and delete (get) the item that was least recently inserted.
- Each get decreases the size of the queue by 1 and each put increaes the size of the queue by 1.
- It's maintened two pointers in a linked list implementation: one to the beginning(so that we can get the first element), and one to the end(so that we can put a new element onto the queue).
- On array implementation there are two indices: one to the beginning of the queue and one to the end of the queue. To get an element, we remove it from the beginning(head) of the queue and increment the head index; to put  an element, we add it to the end (tail) of the queue and increment the tail index.
- A sequence of put and get operations causes the queue to appear to move through the array. When it hits the end of the array, we arrange for it to wrap around to the beginning.
- We encounter stacks more often than we encounter FIFO queues, because of the fundamental relationship between stacks ans recursive programs, we shall also encounter algorithms for which queues is the natural underlying structure

## Duplicate Items
- One approach to handling this situation is to leave up to the clients hte task of ensuring that duplicate items are not presented to the ADT. 
- Being sure that clients and implementations adhere to the specifications in an interface is difficult enough.
- In general, we have a policy decision to make when a client makes an insert request for an item that is already in the data structure. This decision affects the order in which items are ultimately processed for ADTs such as stacks and FIFO queues, and the distinction is significant for client programs.
- The policy choice affects the implementations: the forget-the-old-item policy is generally more diffcult to implement than the ignore-the-new-item policy, because it requires modifications on the ADT.

## First-Class ADT
- Is one for which we can have potentially many different instances, and which we can assign to variables which we can declare to hold the instances.
- The method to implement first-class data types applies to any data type: it provides us with the capability to write programs that manipulate stacks and queue in much the same way that we manipulate other types of data in C. So, it provides us with a natural way to express high-level operations involving such ADTs.
- Improved encapsulation. With the FIRST-CLASS ADT pattern we decouple interface and implementation, following the recommended principle of programming towards an interface, not an implementation.
- Loose Coupling. All dependencies on the internals of the data structure are eliminated from client code.
- Controlled construction and destruction. The FIRST-CLASS ADT pattern gives us full control over the construction and destruction of objects, providing us with the possibility to ensure that all objects are created in a valid state. Similarly, we can ensure proper de-allocation of all elements of the object, provided that client code behaves correctly and calls the defined destroy-function.
- Extra Level of Indirection. There is a slight performance cost involved. Using the FIRST-CLASS ADT pattern implies one extra level of indirection on all operations on the data structure.
- Increased dynamic memory usage. In problem domains where there may be potentially many instances of a quantity unknown at compile- time, a static allocation strategy cannot be used. As a consequence, the usage of dynamic memory tends to increase when applying the FIRST-CLASS ADT pattern.
