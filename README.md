# Maximum-of-a-1d-Array
C ++ Code to find Maximum element of an 1D Array
What happens to new Coders round the globe is that
when we make a code to find MAX. element out of a Array
We simply do int max = 0 ;
and then compare this max with each element in array with loop and display the result.

But the error occurs when the array contains a Negative Element.
Then the loop will fail.
So what we do is that
initialize max to the minimum value of the integer ( incase it is an int array)

int max = INT_MIN;
be sure to include climits header file
