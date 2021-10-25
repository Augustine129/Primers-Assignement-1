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
 
### Primer 8 - Joining & Detaching threads
This primer required me to create a program that initializes two threads, each with a unique timer function.
The two threads needed to be initialized at different times.
Thread 1 with a timer of 5 seconds and thread 2 with a timer of 10 seconds.
 
To help complete this challenge I needed to break the overall problem down into the following main task
 
1. Create timers of 5 and 10 second duration on 2 seperate threads
2. Joining these 2 Threads
3. Detach Threads
 
#### Reflection (as well as issues, challenges & resolutions)
I was able to show a working implementation of threads being joined and detached. I was able to see that the thread was blocked until the first timer and the second timer had completed.
 
### Primer 9 - Joining & Detaching threads
This primer required me to create a program that involved creating a car class that has methods that allow the user to unlock and lock the car, turn the engine on and off.
 
To help complete this challenge I needed to break the overall problem down into the following main task
 
1. Get input form the user
2. Turning engine on
3. Turning engine off
4. Lock the car.
5. Unlock the car if the engine is off and when the user decide to turn it off
 
#### Reflection (as well as issues, challenges & resolutions)
When I was running my code at first it was displaying the wrong information in the console.
However after implementing conditions to the function of the car lock.
 
### Primer 10 - Joining & Detaching threads
This primer required me to create a program that found the area of a rectangle, triangle and square using the "AreaOfShape"
 
To help complete this challenge I needed to break the overall problem down into the following main task
 
1. Work out the conditions needed to overload for each function.
2. Create .size() functions for each shape.
3. Finally show the result to the user.
 
#### Reflection (as well as issues, challenges & resolutions)
The reason why I decided to choose square, triangle and rectangle because I could distinguish them by the amount of argument they each hold
 
## Section 2 - Programming Paradigms
Programming Paradigms such as procedural, object-oriented, functional, structured, declarative, imperative and event driven are a logical approach used during software development that is used to show how the programming language has been implemented. Many programming languages use multiple programming paradigms and some programming languages are designed so that they only follow one programming paradigm.
# IMPERATIVE & DECLARATIVE PARADIGM:
Imperative Paradigm is a paradigm of computer programming where the program describes steps that change the state of the computer an example of an imperative programming languages are C++, C#, Java, Python , PHP and more . Unlike declarative programming, which describes "what" a program should accomplish, imperative programming explicitly tells the computer "how" to accomplish it
# OBJECT-ORIENTED PARADIGM:
Object-Oriented Paradigm, a program that illustrates the structure and behaviour of objects and classes of objects.
Object-Oriented Paradigm has a storage fixing state and a set of methods describing behavior of the object.
Classes compose an inheritance hierarchy including polymorphism of operation.
Polymorphism allows programme code to have multiple meanings or functions, however  encapsulation is the process of keeping classes private so that external code cannot modify them.
Inheritance refers to methods and functions gaining access to the attributes of another class. Execution of an object- oriented program is regarded as exchange of messages between objects,modifying states.
In object-oriented paradigm, objects of the same type (files, for example) need a set of methods that show how an object of this type reacts to stimuli from outside the object’s “territories”. To create these methods, a unit called a class is used
The advantages of the object-oriented programming paradigm are;
1- Improved software development productivity: OO programming is modular, as it provides separation of duties in object-based program development. It is also extensible, as objects can be extended to include new attributes and behaviors. Objects can also be reused within and across applications. Because of these three factors; extensibility, modularity, and reusability.
2- Faster development: Reuse enables faster development. Object-oriented programming languages come with rich libraries of objects, and code developed during projects is also reusable in future projects.
Disadvantage of a object-oriented paradigm are;
1- Steep learning curve: The thought process involved in OO programming may not be natural for some people, and it will take time to get used to it.
2- The complexity of creating programs: it is very complex to create programs based on the interaction of objects. Some of the key programming techniques, such as inheritance and polymorphism, can be a big challenge to comprehend initially.
## PROCEDURAL PROGRAMMING
Procedural Programming is the use of code in a stepwise procedure to develop applications. Procedures will be created to allow a series of steps to be followed.
Data can be passed from procedure to procedure using parameters
## FUNCTIONAL PARADIGM
It is a programming paradigm where programs are constructed by applying and composing functions. This paradigm implements mathematical functions. These functions are pure functions, which means they do not cause any observable side effects such as modifying a global.
 
## Section 3 - Continued Professional Development
### Benefits of becoming a Polyglot Programmer
## What Is Polyglot Programming?
Polyglot programming is the practice of writing code in multiple languages to capture additional functionality and efficiency not available in a single language.
For example, on my team at Accurx we employ a Front-end engineer and a Back-end engineer to create a fully functional application for our users. Moreover we employ a Full-stack engineer who is proficient in multiple languages and a team with varying languages skills work together to perform polyglot programming.
## Advantages of becoming a Polyglot Programmer
1. Being proficient in multiple languages not only looks good on your resume but also indicates to companies that you are flexible and adaptable.
2. Another benefit is that you have the ability to contribute to every part of the tech stack; from frontend to backend, knowing  all the languages that specialise in each part of the stack.
3. Becoming a polyglot programmer ensures that a person can understand terminology more easily during their studies or work. For example if a programmer understand the concept of C# and Javascript , and they started learning Typescript.
The polyglot programmer would easily understand the different concepts which are similar to the two previous languages the programmer is familiar with.
4. The fourth benefit of being a Polyglot Programmer is that you become more creative when approaching a problem, you can vision various solutions and decide which one is the best. In comparison to the person who knows a  single language, you start to become more rigid and stick with your problem solving techniques.
 
 
