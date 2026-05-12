Tate Prodigalidad
CMSC 430
Project3 Documentation

1.	Approach
For Project 3, I began with the provided skeleton code and incrementally incorporated the new features as outlined in the project specifications. I first ensured that the base project compiled and executed correctly using the initial test cases (Test1–Test4). From there, I extended support to handle real literals, hexadecimal integer literals, and character literals with escape characters. These were integrated in scanner.l with corresponding semantic actions, and new helper functions were created in values.cc, hex.cc, and charlit.cc.

Next, I implemented arithmetic, relational, and logical operators. This required updates to parser.y (for operator precedence/associativity) and to values.cc (for operator evaluation). I then moved on to control-flow constructs: when, if/elsif/else and switch. Each was modeled using conditional expressions and tested with the provided input programs.

Finally, I extended support to parameterized main functions (reading values from argv) and implemented left and right fold expressions. The fold required adding a new evaluation function in values.cc that iterates through lists based on direction and applies the selected operator.

Throughout development, I used incremental builds and tested against test1–test16 to ensure correctness. Once all test cases compiled successfully and returned the expected results, I finalized the implementation.

2.	Test Plan
The following table summarizes the test plan, showing the test case number, description, and expected result. Each test ensures a specific language feature is handled correctly. 

Test Case	Description	Expected Result	Screenshot
Test1	Function with arithmetic expression	Result = 25	 
Test2	Function with switch statement (character return)	Result = 9	 
Test3	Function with switch statement (duplicate of Test2)	Result = 99 	 
Test4	Function with list variable indexing	Result = 8	 
Test5	Function with real and hexadecimal literals	Result = 115.57	 
Test6	Function with character literal escape sequences	Result = 12	D 
Test7	Function testing all arithmetic operators	Result = 5	 
Test8	Function testing relational and logical operators	Result = 0	 
Test9	Function with IF/ELSIF/ELSE statement	Result = 3 	 
Test10	Multiple variable declarations	Result = 10 	 
Test11	Single parameter declaration	Result = 8.3	 
Test12	Two parameter declarations	Result = 14.9	 
Test13	Right fold statement with list variable	Result = 2	 
Test14	Left fold statement with list literal	Result = 0	 
Test15	All statements combined	Result = 1	 

3.	Lessons Learned
This project provided valuable experience in extending a compiler's front-end to support a variety of language constructs. One of the key lessons was the importance of incremental development: by adding one feature at a time and verifying it against targeted test cases, errors were easier to isolate and resolve. I also gained a deeper understanding of operator precedence and associativity in grammar design, as well as the practical use of semantic actions to directly evaluate expressions.

Another lesson learned was the integration of lists and fold operations. Implementing fold required not only designing a clean grammar production but also creating robust evaluation logic in values.cc to handle both left and right associative reductions. Debugging fold expressions reinforced the importance of carefully managing vector iteration and consistent operator evaluation.

Lastly, I recognized the need for clear error reporting. By updating appendError and ensuring meaningful syntax, semantic, and lexical error messages, it became easier to identify issues in both test cases and edge cases. This emphasis on usability and clarity is essential in compiler development, as it mirrors the needs of real-world language tooling.
