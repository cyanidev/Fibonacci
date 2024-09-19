The function f calculates the nth number in the sequence where:

f(1) returns 1
For n > 1, it returns the sum of the previous two values in the sequence, similar to Fibonacci but with a static variable to store the previous result.

### Usage

Clone the repository and compile with `make`. To run the program:

```
./Fibonacci <positive integer>
```

The output of the program corresponds to the Fibonacci number at the index provided as input.

```
./test-GBU > ./Fibonacci 83 
< f(83) = 9919485309475549

```

If you're seeing any discrepancies in the output (like missing digits), it could be related to the format used for printing the result. Since size_t is typically used for unsigned integers, it might not always handle very large numbers (beyond 64-bit) depending on the system.

If you need to handle larger Fibonacci numbers, consider using a larger data type such as unsigned long long or even a big integer library like GMP (GNU Multiple Precision Arithmetic Library) for more extensive number ranges.
