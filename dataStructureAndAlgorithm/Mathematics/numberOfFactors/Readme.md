##Number of Factors

Given an array of integers. We are required to write a program to print the number of factors of every element of the given array.

**Simple Approach:** A simple approach will be to run two nested loops. One for traversing the array and other for calculating all factors of elements of array. 
Time Complexity: O( n * n) 
Auxiliary Space: O( 1 )

**Efficient Approach:** We can optimize the above approach by optimizing the number of operations required to calculate the factors of a number. We can calculate the factors of a number n in sqrt(n) operations using this approach. 
Time Complexity: O( n * sqrt(n)) 
Auxiliary Space: O( 1 )

**Best Approach:** If you go through number theory, you will find an efficient way to find the number of factors. If we take a number, say in this case 30, then the prime factors of 30 will be 2, 3, 5 with count of each of these being 1 time, so total number of factors of 30 will be (1+1) * (1+1) * (1+1) = 8. 
Therefore, the general formula of total number of factors of a given number will be: 
 

``` 
Factors = (1+a1) * (1+a2) * (1+a3) * … (1+an)
```

Now, the best way to find the prime factorization will be to store the sieve of prime factors initially. Create the sieve in a way that it stores the smallest primes factor that divides itself. We can modify the Sieve of Eratostheneses to do this. Then simply for every number find the count of prime factors and multiply it to find the number of total factors.

Time Complexity: O(n * log(max(number)))

