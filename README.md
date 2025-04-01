# Student Grading System

This is a C++ console application designed to allow teachers or administrators to input student scores, calculate their average, and assign grades based on predefined criteria. It then displays the results for all students entered.

## Features

- **Input Student Information**: Allows the user to input a student's name and their scores for three subjects.
- **Calculate Average Score**: Automatically calculates the average score of the three subjects for each student.
- **Grade Assignment**: Based on the calculated average, each student is assigned a grade:
  - A+ (Outstanding) for averages 90 and above
  - A (Excellent) for averages between 85 and 89
  - B+ (Very Good) for averages between 80 and 84
  - B (Good) for averages between 75 and 79
  - C+ (Satisfactory) for averages between 70 and 74
  - C (Average) for averages between 60 and 69
  - D (Needs Improvement) for averages between 50 and 59
  - F (Fail) for averages below 50
- **Valid Input Handling**: The program ensures that all inputs are valid positive numbers, and it will prompt the user again if invalid input is provided.
- **Multiple Entries**: The program can handle multiple students' records in a single run, allowing the user to enter more than one student.

## Example Output

```plaintext
Enter Student's Name: John
Enter first score: 85
Enter second score: 90
Enter third score: 88

Would you like to enter another student? (y/n): y

Enter Student's Name: Alice
Enter first score: 75
Enter second score: 80
Enter third score: 78

Would you like to enter another student? (y/n): n

========= STUDENT RESULTS =========
Name            Average         Grade
------------------------------------
John            87              A (Excellent)
Alice           77              B+ (Very Good)
====================================
