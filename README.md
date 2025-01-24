# Employee Management Project (Version 1)

This is a beginner-level project developed in C, which demonstrates the management of employee data for a company or organization. The project uses various data types, dynamic memory allocation, and file handling techniques to store, sort, and save employee details.

---

## Features

- **Data Storage**:
  - Stores employee details such as name, gender, age, ID, experience, and salary.
  - Uses a `struct` to manage employee records efficiently.
  
- **Sorting Capabilities**:
  - Sort employees by:
    - **Name** (lexicographical order)
    - **Gender**
    - **ID**
    - **Experience** (descending order)
    - **Salary** (highest to lowest)
    
- **File Handling**:
  - Saves sorted data to user-specified file paths.

- **Input Validation**:
  - Ensures valid inputs for gender, age, and other fields.

- **Sorting Algorithms**:
  - Implements sorting using basic algorithms like Bubble Sort or Quick Sort for the mentioned fields.

---

## Project Structure

The project is implemented as a single C program file:

---

## How to Run
1. Compile the program using 'gcc employ.c -o employ'.
2. Run the executable: './employ'.

---

## How to Run in Visual Studio Code
1. Save the source file and compile it by pressing 'ctrl+shift+ B'.
2. Run the executable: '.\employ.exe'.

---

## Known Limitations in Version 1
- Sorting is implemented using simple sorting algorithms such as Selection sort, which may be slow for large data sheets.
- Some limited error handling for few operations.

---

## Plans for Version 2
- Implement more efficient sorting algorithms such as Quick Sort or Merge Sort.
- Expand data handling capabilities, including the ability to update and delete employee records.
- Improve error handling and user feedback for invalid inputs and operations.
- Optimize code for efficiency to handle larger datasets.
- Reduce redundancy and refactor code for better maintainability.

---

## Author
-Developed by Gajulapuram Charan Sai on 19 January 2025.

---
