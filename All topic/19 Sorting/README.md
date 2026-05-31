# 🚀 Sorting & Comparator Mastery | Codeforces Problem Set (A–S)

## 📖 Overview

This repository contains my solutions, notes, and learnings from a comprehensive **Sorting & Comparator Problem Set** on Codeforces.

The goal of this set was not only to learn sorting algorithms but also to master:

- Merge Sort
- Counting Sort
- Custom Comparators
- Multi-Level Sorting
- Sorting Structures & Objects
- Geometry-Based Sorting
- Ranking Systems
- Greedy Comparator Logic
- Interview-Oriented Sorting Patterns

---

## 🎯 Learning Objectives

By completing this problem set, I learned:

✅ How sorting works internally

✅ When to use Merge Sort

✅ Counting Sort optimization for limited ranges

✅ Custom comparator design

✅ Multi-key sorting techniques

✅ Sorting records and structures

✅ Ranking systems implementation

✅ Greedy sorting logic

✅ Real-world sorting applications

---

# 📚 Problems Covered

| #   | Problem                 |
| --- | ----------------------- |
| A   | Merge Two Sorted Arrays |
| B   | Merge Sort              |
| C   | Merge Sort Trace        |
| D   | Count Inversions        |
| E   | Reverse Pairs           |
| F   | Sort String             |
| G   | Largest Number - I      |
| H   | Sort Ages               |
| I   | Temperature Records     |
| J   | ReverseSort             |
| K   | Sorted By Units         |
| L   | StringSort              |
| M   | MagnitudeSort           |
| N   | Sort the Scholars       |
| O   | What's Your JEE Rank?   |
| P   | Closest Points          |
| Q   | Amazon Orders           |
| R   | Flight Schedule         |
| S   | Largest Number - II     |

---

# 🧠 Key Concepts Learned

## 1️⃣ Merge Sort

- Divide and Conquer
- Stable Sorting
- O(N log N)
- Merge Procedure

### Applications

- External Sorting
- Large Dataset Processing
- Inversion Counting

---

## 2️⃣ Counting Sort

Used when:

```text
Value Range << Number of Elements
```

Examples:

- Sort Ages
- Temperature Records
- Largest Number I

### Complexity

```text
Time  : O(N + K)
Space : O(K)
```

---

## 3️⃣ Custom Comparators

Most important topic in this set.

Examples:

### ReverseSort

```cpp
bool cmp(int a,int b){
    return a>b;
}
```

### StringSort

```cpp
if(length differs)
    compare length

else
    compare lexicographically
```

### Largest Number II

```cpp
return a+b > b+a;
```

---

## 4️⃣ Multi-Level Sorting

Pattern:

```text
Primary Key
      ↓
Secondary Key
      ↓
Tertiary Key
```

Examples:

### Sort the Scholars

```text
Marks Descending
Name Ascending
```

### JEE Rank

```text
Total Marks Descending
Maths Descending
Physics Descending
Name Ascending
```

### Amazon Orders

```text
Priority Descending
Timestamp Ascending
Order ID Ascending
```

---

## 5️⃣ Geometry Sorting

### Closest Points

Sort points by:

```text
Distance
→ x-coordinate
→ y-coordinate
```

Optimization:

Instead of:

d = √((x-a)² + (y-b)²)

Use:

d² = (x-a)² + (y-b)²

Avoids floating-point operations.

---

# 📈 Complexity Cheat Sheet

| Technique              | Time       | Space    |
| ---------------------- | ---------- | -------- |
| Merge Sort             | O(N log N) | O(N)     |
| Counting Sort          | O(N+K)     | O(K)     |
| STL Sort               | O(N log N) | O(log N) |
| Custom Comparator Sort | O(N log N) | O(log N) |

---

# 💡 Interview Patterns Covered

### Pattern 1

```text
Sort by X
```

Use Comparator

---

### Pattern 2

```text
Sort by X
If equal, sort by Y
```

Multi-Key Sorting

---

### Pattern 3

```text
Small Range + Large N
```

Counting Sort

---

### Pattern 4

```text
Sort by Distance
```

Use Squared Distance

---

### Pattern 5

```text
Largest Concatenation
```

Compare:

```text
ab
ba
```

---

# 🔥 Favorite Problems

### Count Inversions

Learned Merge Sort applications.

### Reverse Pairs

Advanced Divide & Conquer.

### Largest Number II

Classic comparator-based greedy sorting.

### Closest Points

Geometry + Comparator.

### What's Your JEE Rank?

Real-world ranking system implementation.

---

# 🏆 Skills Gained

- Problem Solving
- Competitive Programming
- Comparator Design
- Sorting Optimization
- Data Structure Usage
- Algorithm Analysis
- Interview Preparation

---

# 🛠 Tech Stack

- Language: C++
- STL
- Vectors
- Strings
- Structures
- Custom Comparators
- Merge Sort

---

# 📌 Key Takeaway

Sorting is much more than:

```cpp
sort(arr.begin(), arr.end());
```

The real power lies in understanding:

- How sorting works
- When to optimize
- How to design custom comparators
- How to solve ranking and scheduling problems

This problem set helped me build a strong foundation for DSA interviews and competitive programming.

---

## 🚀 Author

**Sourav Bhattacharya**

MCA Student | DSA Enthusiast | Competitive Programmer

Currently learning:

- Data Structures & Algorithms
- Full Stack Development
- Data Science
- System Design

⭐ If you found this repository useful, don't forget to star it!
