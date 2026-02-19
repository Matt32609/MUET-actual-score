🎓 MUET Actual Result Calculator
---------------------------------------------------------------------------------------------------------------------------
This project is a dedicated calculator designed to decode the Malaysian University English Test (MUET) certificate scores. While official results are scaled to 90 marks per component for standardization by the Malaysian Examinations Council (MPM) , many students and educators need to know the actual raw score obtained in each of the four components (Listening, Speaking, Reading, and Writing).

The Problem: 
-----------------------------------------------------------------------------------------------------------------------------
Calculating these scores manually involves repetitive algebra and different multipliers for different papers, which is prone to human error and time-consuming.

The Solution:
----------------------------------------------------------------------------------------------------------------------------
This tool improves efficiency by automating the conversion logic. Users simply input their scaled scores, and the script instantly returns their true raw performance. This provides a clearer picture of a candidate's English proficiency levels before the scaling process is applied."

What concepts have I integrated:
---------------------------------------------------------------------------------------------------------------------------
- Modular Programming 

The logic is organized into distinct functions . This makes the code more readable and ensures that specific tasks like greeting the user and processing scores are isolated and manageable.

- User Input & Data Validation:

The script handles real-time user interaction via the command line. It utilizes .lower() string methods to ensure case-insensitivity, making the program robust against various user input styles (e.g., "Listening" vs. "LISTENING").

- Data type conversion:

Since all user inputs start as strings, the project utilizes Casting (float() and int()) to convert data into numerical formats for mathematical calculations and back into strings for output.

- Control Flow & Conditional Logic:

The project uses if-elif-else structures to determine which scoring algorithm to apply based on the user's selection. It also includes an "Invalid response" fallback to handle unexpected user behavior.

- Looping & Program Persistence:

By implementing a while True loop, the script maintains a continuous session. This allows users to calculate multiple component scores in one sitting without having to manually restart the program.

- Mathematical Modeling:

The script accurately translates the official MUET scaling formulas into algorithmic logic, reversing the standardized /90 score by the Malaysian Examinations Council (MPM) back into its original raw obtained marks.

- Error Handling (Try-Except Blocks)

Instead of allowing the program to crash when a user enters non-numeric data (like letters), I implemented try-except blocks. This "catches" the ValueError before it stops the execution, allowing the program to provide a helpful error message and recover gracefully in building a fault-tolerant software.

- Usage of Boolean logic:
 
The project employs Boolean Logical Operators (specifically the OR operator) to perform range checking on numerical data. By evaluating multiple conditions in a single statement—such as ensuring a score is neither below the minimum (0) nor above the maximum (90) to ensure it enforces Data Integrity.

How to run it?
--------------------------------------------------------------------
- Use python3 ./MUET\ actual\ score.py 

OR

- chmod +x MUET\ actual\ score.py
- ./MUET\ actual\ score.py

Example image of using it:
-------------------------------------------------------------------
![Screenshot_20260216_225351_Gallery](https://github.com/user-attachments/assets/99f000fa-b6d8-45c1-bf8a-2ad5b69cfb35)


