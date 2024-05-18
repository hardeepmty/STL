<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>STL Overview</title>
</head>
<body>
  <h1>Standard Template Library (STL) Overview</h1>

  <h2>Containers</h2>
  <p>Containers are classes that hold objects of a certain type. They manage the storage space for their elements and provide member functions to access and manipulate them efficiently.</p>
  <h3>Sequence Containers</h3>
  <ul>
    <li>std::vector: A dynamic array.</li>
    <li>std::list: A doubly linked list.</li>
    <li>std::deque: A double-ended queue.</li>
  </ul>

  <h3>Associative Containers</h3>
  <ul>
    <li>std::set: A sorted set of unique keys.</li>
    <li>std::map: A sorted key-value map.</li>
    <li>std::multiset and std::multimap: Similar to set and map, but allow duplicate keys.</li>
  </ul>

  <h3>Unordered Containers</h3>
  <ul>
    <li>std::unordered_set</li>
    <li>std::unordered_map</li>
    <li>std::unordered_multiset</li>
    <li>std::unordered_multimap</li>
  </ul>

  <h2>Container Adapters</h2>
  <p>These are special containers that adapt the behavior of other containers.</p>
  <ul>
    <li>std::stack: Adapts a container to provide stack (Last-In-First-Out) functionality.</li>
    <li>std::queue: Adapts a container to provide queue (First-In-First-Out) functionality.</li>
    <li>std::priority_queue: Adapts a container to provide priority queue functionality.</li>
  </ul>

  <h2>Iterators</h2>
  <p>Iterators provide a way to iterate over the elements of a container. They act as a generalization of pointers and provide a uniform way to access elements in a container, regardless of its underlying implementation.</p>
  <p>There are different kinds of iterators:</p>
  <ul>
    <li>Input iterators</li>
    <li>Output iterators</li>
    <li>Forward iterators</li>
    <li>Bidirectional iterators</li>
    <li>Random-access iterators</li>
  </ul>

  <h2>Algorithms</h2>
  <p>Algorithms are functions for performing operations on sequences of elements, such as searching, sorting, and modifying.</p>
  <p>Some commonly used algorithms include:</p>
  <ul>
    <li>Sorting algorithms</li>
    <li>Searching algorithms</li>
    <li>Modifying algorithms</li>
    <li>Numeric algorithms</li>
  </ul>

  <h2>Utilities</h2>
  <p>STL provides various utilities such as function objects (functors), allocators, and smart pointers.</p>
</body>
</html>
