# STL

The Standard Template Library (STL) is a powerful set of C++ template classes to provide general-purpose classes and functions for managing data structures and algorithms. It's a part of the C++ Standard Library and is widely used due to its efficiency, versatility, and standardized implementation across different compilers.

STL can be broadly divided into three main components:

Containers: Containers are classes that hold objects of a certain type. They manage the storage space for their elements and provide member functions to access and manipulate them efficiently. Some commonly used containers include:

Sequence Containers: These containers maintain a linear arrangement of elements.
std::vector: A dynamic array.
std::list: A doubly linked list.
std::deque: A double-ended queue.

Associative Containers: These containers organize elements in a sorted order.
std::set: A sorted set of unique keys.
std::map: A sorted key-value map.
std::multiset and std::multimap: Similar to set and map, but allow duplicate keys.

Unordered Containers: These containers provide fast retrieval based on a hash function.
std::unordered_set
std::unordered_map
std::unordered_multiset
std::unordered_multimap

Container Adapters: These are special containers that adapt the behavior of other containers.
std::stack: Adapts a container to provide stack (Last-In-First-Out) functionality.
std::queue: Adapts a container to provide queue (First-In-First-Out) functionality.
std::priority_queue: Adapts a container to provide priority queue functionality.

Iterators: Iterators provide a way to iterate over the elements of a container. They act as a generalization of pointers and provide a uniform way to access elements in a container, regardless of its underlying implementation. 
There are different kinds of iterators:
Input iterators: Read elements from a sequence.
Output iterators: Write elements to a sequence.
Forward iterators: Allow forward traversal of a sequence.
Bidirectional iterators: Allow bidirectional traversal of a sequence.
Random-access iterators: Provide random access to elements in a sequence.

Algorithms: Algorithms are functions for performing operations on sequences of elements, such as searching, sorting, and modifying. These algorithms are designed to work with iterators, making them independent of the underlying container. Some commonly used algorithms include:

Sorting algorithms: std::sort, std::stable_sort, std::partial_sort, etc.
Searching algorithms: std::find, std::binary_search, std::lower_bound, std::upper_bound, etc.
Modifying algorithms: std::transform, std::copy, std::fill, std::replace, etc.
Numeric algorithms: std::accumulate, std::inner_product, std::partial_sum, std::adjacent_difference, etc.

Additionally, STL provides various utilities such as function objects (functors), allocators, and smart pointers.