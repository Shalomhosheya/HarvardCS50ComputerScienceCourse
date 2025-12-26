# CS50: Introduction to Computer Science

## Course Overview
CS50 is Harvard University's introduction to computer science and programming. It teaches you how to think algorithmically and solve problems efficiently.

---

## Week 0: Scratch

### Key Concepts
**Computational Thinking** - Breaking down problems into smaller, manageable pieces.

**Core Programming Concepts:**
- **Input/Output** - Getting data in and displaying results
- **Variables** - Containers that store information
- **Conditionals** - Making decisions (if/else)
- **Loops** - Repeating actions
- **Functions** - Reusable blocks of code
- **Events** - Triggers that start actions

**Scratch** - Visual programming language using blocks to understand programming fundamentals without syntax concerns.

---

## Week 1: C Programming

### Introduction to C
C is a powerful, low-level programming language that gives you control over computer memory.

### Basic Syntax
```
#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");
}
```

### Key Concepts

**Data Types:**
- `int` - Integers (whole numbers)
- `float` - Decimal numbers
- `char` - Single characters
- `string` - Text (sequence of characters)
- `bool` - True/false values

**Variables:**
```
int age = 21;
float price = 9.99;
char grade = 'A';
```

**Operators:**
- Arithmetic: `+`, `-`, `*`, `/`, `%`
- Comparison: `==`, `!=`, `<`, `>`, `<=`, `>=`
- Logical: `&&` (AND), `||` (OR), `!` (NOT)

**Input/Output:**
- `printf()` - Print output
- `scanf()` - Get input (not recommended in CS50)
- `get_int()`, `get_string()` - CS50 library functions for safer input

---

## Week 2: Arrays

### Arrays
Arrays store multiple values of the same type in contiguous memory locations.

**Declaration:**
```
int scores[3];
scores[0] = 72;
scores[1] = 73;
scores[2] = 33;

// Or initialize directly
int scores[] = {72, 73, 33};
```

### Strings
Strings are arrays of characters ending with a null terminator `\0`.

```
string name = "EMMA";
// Actually stored as: ['E', 'M', 'M', 'A', '\0']
```

### Command-Line Arguments
Programs can accept input when run from the terminal.

```
int main(int argc, string argv[])
{
    // argc = argument count
    // argv = argument vector (array of strings)
}
```

### Important String Functions
- `strlen()` - Get string length
- `strcmp()` - Compare strings
- `strcpy()` - Copy strings

---

## Week 3: Algorithms

### Searching Algorithms

**Linear Search** - Check each element one by one.
- Time complexity: O(n)
- Simple but slow for large datasets

**Binary Search** - Divide and conquer (requires sorted data).
- Time complexity: O(log n)
- Much faster for large datasets

### Sorting Algorithms

**Selection Sort** - Find smallest element, swap with first position, repeat.
- Time complexity: O(n²)

**Bubble Sort** - Swap adjacent elements if out of order, repeat.
- Time complexity: O(n²)

**Merge Sort** - Divide array in half, sort each half, merge together.
- Time complexity: O(n log n)
- More efficient but uses more memory

### Big O Notation
Describes how an algorithm's runtime grows with input size:
- O(1) - Constant time
- O(log n) - Logarithmic time
- O(n) - Linear time
- O(n log n) - Linearithmic time
- O(n²) - Quadratic time
- O(2ⁿ) - Exponential time

---

## Week 4: Memory

### Pointers
Variables that store memory addresses.

```
int n = 50;
int *p = &n;  // p stores the address of n
printf("%i\n", *p);  // Dereference to get value at address
```

**Key Operators:**
- `&` - Address-of operator
- `*` - Dereference operator

### Memory Layout
- **Stack** - Local variables, function calls
- **Heap** - Dynamically allocated memory
- **Code** - Program instructions
- **Globals** - Global variables

### Dynamic Memory Allocation
```
int *x = malloc(sizeof(int));  // Allocate memory
*x = 50;
free(x);  // Always free allocated memory!
```

**Important:** Always free dynamically allocated memory to prevent memory leaks.

### Common Memory Issues
- **Buffer overflow** - Writing beyond allocated memory
- **Memory leak** - Not freeing allocated memory
- **Dangling pointer** - Pointer to freed memory
- **Segmentation fault** - Accessing invalid memory

---

## Week 5: Data Structures

### Linked Lists
Each node contains data and a pointer to the next node.

```
typedef struct node
{
    int number;
    struct node *next;
}
node;
```

**Advantages:** Dynamic size, easy insertion/deletion
**Disadvantages:** No random access, extra memory for pointers

### Hash Tables
Combine arrays and linked lists for fast lookup.

**Hash Function:** Converts input to array index
**Collision Handling:** Use linked lists at each array position

**Time Complexity:** Average O(1) for search, insert, delete

### Trees
Hierarchical data structure with nodes connected by edges.

**Binary Search Tree (BST):**
- Each node has at most two children
- Left child < parent < right child
- Search time: O(log n) for balanced tree

### Tries
Tree structure for storing strings, commonly used for dictionaries.

**Advantages:** Fast prefix searching
**Disadvantages:** Memory intensive

---

## Week 6: Python

### Transition from C to Python
Python is a high-level, interpreted language with simpler syntax.

### Basic Syntax
```python
# No semicolons, no curly braces
print("Hello, World!")

# Variables (no type declaration)
name = "Emma"
age = 21

# Conditionals
if age >= 18:
    print("Adult")
else:
    print("Minor")

# Loops
for i in range(10):
    print(i)

# Lists (like arrays)
scores = [72, 73, 33]

# Dictionaries (like hash tables)
person = {"name": "Emma", "age": 21}
```

### Key Differences from C
- No manual memory management
- No compilation needed
- Dynamic typing
- Built-in data structures (lists, dictionaries, sets)
- Simpler file I/O
- Exception handling with try/except

### File I/O
```python
# Reading
with open("file.txt", "r") as file:
    contents = file.read()

# Writing
with open("file.txt", "w") as file:
    file.write("Hello")
```

---

## Week 7: SQL

### Relational Databases
Organize data into tables with rows and columns.

### SQL Basics
**Creating Tables:**
```sql
CREATE TABLE students (
    id INTEGER PRIMARY KEY,
    name TEXT NOT NULL,
    age INTEGER
);
```

**CRUD Operations:**
```sql
-- Create
INSERT INTO students (name, age) VALUES ('Emma', 21);

-- Read
SELECT * FROM students WHERE age >= 18;

-- Update
UPDATE students SET age = 22 WHERE name = 'Emma';

-- Delete
DELETE FROM students WHERE id = 1;
```

### Relationships
- **One-to-One** - Each record relates to one other record
- **One-to-Many** - One record relates to multiple records
- **Many-to-Many** - Multiple records relate to multiple records (use junction table)

### Keys
- **Primary Key** - Unique identifier for each row
- **Foreign Key** - References primary key in another table

### JOIN Operations
Combine data from multiple tables:
```sql
SELECT students.name, classes.title
FROM students
JOIN enrollments ON students.id = enrollments.student_id
JOIN classes ON enrollments.class_id = classes.id;
```

### Indexes
Speed up queries by creating indexes on frequently searched columns.

---

## Week 8: HTML, CSS, JavaScript

### HTML (Structure)
```html
<!DOCTYPE html>
<html>
<head>
    <title>My Page</title>
</head>
<body>
    <h1>Welcome</h1>
    <p>This is a paragraph.</p>
</body>
</html>
```

### CSS (Style)
```css
body {
    background-color: lightblue;
    font-family: Arial;
}

h1 {
    color: navy;
    text-align: center;
}
```

### JavaScript (Behavior)
```javascript
// Variables
let name = "Emma";
const age = 21;

// Functions
function greet(name) {
    console.log("Hello, " + name);
}

// DOM Manipulation
document.querySelector('h1').innerHTML = 'New Title';

// Event Listeners
document.querySelector('button').addEventListener('click', function() {
    alert('Button clicked!');
});
```

### HTTP
- **GET** - Request data from server
- **POST** - Submit data to server
- **Status Codes:** 200 (OK), 404 (Not Found), 500 (Server Error)

---

## Week 9: Flask

### Web Framework
Flask is a Python web framework for building web applications.

### Basic Flask App
```python
from flask import Flask, render_template, request

app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/greet', methods=['POST'])
def greet():
    name = request.form.get('name')
    return render_template('greet.html', name=name)
```

### Templates (Jinja)
```html
<!DOCTYPE html>
<html>
<body>
    <h1>Hello, {{ name }}!</h1>
</body>
</html>
```

### Sessions
Store user-specific data across requests:
```python
from flask import session

session['user_id'] = 123
user_id = session.get('user_id')
```

---

## Week 10: Final Project

### Building Your Own Project
Apply everything you've learned to create something meaningful.

**Steps:**
1. **Ideation** - What problem will you solve?
2. **Planning** - Outline features and structure
3. **Implementation** - Write code iteratively
4. **Testing** - Test thoroughly
5. **Documentation** - Explain your project

---

## Important Programming Practices

### Code Style
- Use meaningful variable names
- Add comments to explain complex logic
- Indent consistently
- Keep functions small and focused

### Debugging
- **printf debugging** - Print values to understand flow
- **Rubber duck debugging** - Explain code to someone/something
- **Use debuggers** - Step through code line by line

### Problem-Solving Strategy
1. Understand the problem completely
2. Break it into smaller subproblems
3. Solve each subproblem
4. Combine solutions
5. Test thoroughly

---

## Key Takeaways

Computer science is fundamentally about problem-solving. The languages and tools you learn are just means to an end. Focus on understanding concepts like algorithms, data structures, and computational thinking. These skills transfer across all programming languages and technologies.

**Most Important:** Practice consistently, build projects, and don't be afraid to make mistakes. Programming is learned by doing.