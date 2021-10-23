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
The biggest issue was related to testing the areas my solution failed, originally, I tested to see if it worked - however, it wasn’t until I tried to break it that I found some of the more serious issues with my design and implementation.  For example, ...

### Primer 2 - Self-service Checkout
This primer required me to create this program which allows me to create a self-service checkout program in which ask the user to enter the number of items and their cost.The program should then calculate the sub total and apply a fixed shopping tax on it and then add those two values together to display the total amount.

To help complete this challenge I needed to break the overall problem into the following main task which were:

1. Collect the data from the user,
2. Used while loop which would not allow the program to continue unless the imputs are valid,
3. Calculate the quantity * cost for each items,
4. Finally add up all the values together and calculate the tax for a total.

#### Reflection (as well as issues, challenges & resolutions)

The only one thing that I needed to solve was how to loop the propmpts and keep asking the user to their inputs unless the number 0 was entered.
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

## Section 2 - Programming Paradigms
### Programming Paradigms
Simply put, a programming paradigm, for example, procedural, object-oriented, functional, structured, declarative, imperative and event driven can be described as a specific approach used when trying to solve a problem.  Although many programming languages can (and do) support multiple paradigms this discussion will focus more specifically on the possible benefits with examples of the potential differences and similarities of five from the above list. These are ...

---
## Section 3 - Continued Professional Development
### Benefits of becoming a Polyglot Programmer
Vestibulum vitae semper sem. Duis leo leo, suscipit at felis non, pellentesque varius massa. Sed sit amet orci nibh. Morbi scelerisque faucibus elit, vitae mollis turpis finibus eget. In convallis euismod nunc non imperdiet. Duis ultricies pulvinar lorem, sed molestie nunc porta at. Aenean arcu ante, efficitur nec felis sed, feugiat iaculis turpis. Vestibulum eu elementum diam. Quisque nec tortor auctor, scelerisque ante vitae, fringilla tellus.

Quisque ligula lectus, efficitur quis malesuada sit amet, malesuada sed nibh. In lorem erat, elementum quis tempus nec, rhoncus ac ante. Mauris suscipit massa tempor, pulvinar neque vel, gravida nulla. Donec massa diam, molestie in diam nec, vulputate faucibus ligula. Aliquam erat volutpat. Aliquam sit amet dui ligula. Nullam euismod eros ultrices magna convallis lobortis. Proin convallis placerat tincidunt. Quisque interdum, nisi id egestas luctus, augue libero lacinia urna, sit amet tempus nisl sem nec quam. Vestibulum interdum urna mauris, vel dignissim nisi dignissim egestas. Donec volutpat dictum dui, at egestas sem tristique nec.
