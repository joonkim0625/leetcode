# TwoSum

This problem asks to find a pair of indices if the sum of two indices is eqaul
to the target value that is given.

When I didn't even think about utilizing HashMap to approach this problem, I
would just brute force this problem by using a nested for loops. Obviously, this
will result in a runtime of O(n^2), which we all would want to avoid. 

Of course, after checking if my solution was the best it could be, I found out
that I could have used a HashMap data structure to solve this problem with a
runtime of O(n)!

HashMap uses `HashTable` to implement the map abstract data type (ADT). 
This map ADT needs a key and a value if you want to put something into the map.
It uses hash function to convert the key value into an index and then store the
value to that hashed index. This allows HashMap to look up things in constant
time (of course, you would want to have a good hash function to distribute the
indices as equally as possible). There are more things we can talk about HashMap
- such as collisions and etc... but the general idea is what I just mentioned.  

Of course, this approach requires O(n) space since we need a space for the
HashMap values. 
