# Primer Portfolio
## Section 1 - Primer Challenges
### Primer 1 - Fahrenheit / Centigrade Conversion
This challenge requires us to allow a user to enter a value before selecting whether to convert it from Fahrenheit to Centigrade or Centigrade to Fahrenheit.  As part of the initial design the conversion algorithms were needed for both calculations.
To help complete this challenge I needed to break the overall problem down into the following main tasks:
* Get data from the user
* Verify the data is in a suitable format
* Create a method to convert F->C
* Create a method to convert C->F
#### Reflection (as well as issues, challenges & resolutions)
 
The biggest issue was related to testing the areas my solution failed, originally, I tested to see if it worked - however, it wasn’t until I tried to break it that I found some of the more serious issues with my design and implementation.  For example, the program did not run when a string was entered as input instead of float, to resolve this issue I used the try/catch which prevents the program from crashing.
### Primer 2 - Self-service Checkout
This primer required me to create this program which allows me to create a self-service checkout program in which ask the user to enter the number of items and their cost.The program should then calculate the subtotal and apply a fixed shopping tax on it and then add those two values together to display the total amount.
To help complete this challenge I needed to break the overall problem into the following main task which were:
1. Collect the data from the user,
2. Used while loop which would not allow the program to continue unless the inputs are valid,
3. Calculate the quantity * cost for each items,
4. Finally add up all the values together and calculate the tax for a total.
#### Reflection (as well as issues, challenges & resolutions)
The only one thing that I needed to solve was how to loop the prompts and keep asking the user for their inputs unless the number 0 was entered.
That was solved by using a while loop.
subTotal = subTotal + (quantity * cost);
### Primer 3 - Password Complexity Checker
This primer required me to create a program that shows the strength of a password.
To help complete this challenge I needed to break the overall problem down into the following main task:
1. Get data from the user.
2. Verify the data is in a suitable format.
3. I created a method to implement the digit, letter and special characters.
4. I created a method to calculate the complexity of the password.
5. Finally show the result.
#### Reflection (as well as issues, challenges & resolutions)
Where this task proved challenging was meeting the criteria of stop asking for a password until it's complexity is 'weak'. To fix  this problem I decided to create a helper function to abstract the mechanism behind checking the complexity by using a switch statement rather than an if statement.
### Primer 4 - Employee list removal
This primer required me to create a program that displayed a list of employee names. The users will be asked to enter an employee's name.
To help complete this challenge I needed to break the overall problem down into the following main tasks:
1. Get data from the user
2. Create variables to place names
3. Search for a name using the input and remove it if match
4. Output the names
#### Reflection (as well as issues, challenges & resolutions)
Where this task proved challenging was in the user input. This is because if the user has misspelled or written their name in a lower case "Please enter a name" which implies the user has to enter their name with a capital letter.
### Primer 5 - Phone directory
This primer required me to create a program that uses a file to store and search for phone contacts by prompting a name or number from the user.
To help complete this challenge I needed to break the overall problem down into the following main task
1. Get data from the user
2. Read the data from the file store
3. Compare the user input with the data to see if it matched
4. Output the match if there is one
#### Reflection (as well as issues, challenges & resolutions)
Where this task proved challenging was reading the file correctly in C++.
The problem was the whitespace in the CSV file which affects the result to display on the console.
### Primer 6 - Data file parser
This primer required me to create a program to display a list of employee information in a table format.
To help complete this challenge I needed to break the overall problem down into the following main task
1. Get data from the user
2. Read the data from the file store in a memory
3. Only display the first name an initial
4. Close the CSV file
#### Reflection (as well as issues, challenges & resolutions)
Where this task proved challenging was the spacing between the columns.
In order to figure out the spacing I needed to use the getline function from primer 4 and 5 and implemented into the while loop which is the way to display information from the file and the closing file.

### Primer 7 - Sleep timer
This primer required me to write a blocking function that would have a default value of 10 seconds.

#### Reflection (as well as issues, challenges & resolutions)
This challenge was easy to complete, I just had to know how to find the current thread of the sleep program.

