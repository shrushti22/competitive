###Prime Numbers

#####Some facts about Prime Numbers:
- Two is the only even Prime number.
- Every prime number can be represented in form of 6n+1 or 6n-1 except the prime number 2 and 3, where n is a natural number.
- Two and Three are only two consecutive natural numbers that are prime.
- **Goldbach Conjecture**: Every even integer greater than 2 can be expressed as the sum of two primes.
- **Wilson Theorem**: Wilson’s theorem states that a natural number p > 1 is a prime number if and only if
(p - 1) ! ≡  -1   mod p 
OR  (p - 1) ! ≡  (p-1) mod p
- **Fermat’s Little Theorem**: If n is a prime number, then for every a, 1 <= a < n,
an-1 ≡ 1 (mod n)
OR 
an-1 % n = 1
- **Prime Number Theorem**: The probability that a given, randomly chosen number n is prime is inversely proportional to its number of digits, or to the logarithm of n.
- **Lemoine’s Conjecture**: Any odd integer greater than 5 can be expressed as a sum of an odd prime (all primes other than 2 are odd) and an even semiprime. A semiprime number is a product of two prime numbers. This is called Lemoine’s conjecture.


####Naive Method:
A simple solution is to iterate through all numbers from 2 to n-1 and for every number check if it divides n. If we find any number that divides, we return false. 
Time complexity of this solution is O(n)
**Optimized Naive Method:**
1. Instead of checking till n, we can check till √n because a larger factor of n must be a multiple of smaller factor that has been already checked.
2. The algorithm can be improved further by observing that all primes are of the form 6k ± 1, with the exception of 2 and 3. This is because all integers can be expressed as (6k + i) for some integer k and for i = -1, 0, 1, 2, 3, or 4; 2 divides (6k + 0), (6k + 2), (6k + 4); and 3 divides (6k + 3). So a more efficient method is to test if n is divisible by 2 or 3, then to check through all the numbers of form 6k ± 1.


####Fermat Method:
If n is a prime number, then for every a, 1 < a < n-1,

an-1 ≡ 1 (mod n)
OR 
an-1 % n = 1 
 
```
Example: Since 5 is prime, 24 ≡ 1 (mod 5) [or 24%5 = 1],
         34 ≡ 1 (mod 5) and 44 ≡ 1 (mod 5) 
         Since 7 is prime, 26 ≡ 1 (mod 7),
         36 ≡ 1 (mod 7), 46 ≡ 1 (mod 7) 
         56 ≡ 1 (mod 7) and 66 ≡ 1 (mod 7) 
```

If a given number is prime, then this method always returns true. If the given number is composite (or non-prime), then it may return true or false, but the probability of producing incorrect results for composite is low and can be reduced by doing more iterations.

Algorithm:
```
// Higher value of k indicates probability of correct
// results for composite inputs become higher. For prime
// inputs, result is always correct
1)  Repeat following k times:
      a) Pick a randomly in the range [2, n - 2]
      b) If gcd(a, n) ≠ 1, then return false
      c) If an-1 &nequiv; 1 (mod n), then return false
2) Return true [probably prime].
```
