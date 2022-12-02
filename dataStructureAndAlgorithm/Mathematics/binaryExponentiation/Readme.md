### Binary Exponentiation

Raising  $a$  to the power of  $n$  is expressed naively as multiplication by  $a$  done  $n - 1$  times:  $a^{n} = a \cdot a \cdot \ldots \cdot a$ .

This can be done in  $O(n)$  time. However, we can do it in  $O(\log n)$  time using binary exponentiation.

The idea of binary exponentiation is, that we split the work using the binary representation of the exponent.

For example, if we want to compute  $a^{13}$ , we can split it into  $a^{8} \cdot a^{4} \cdot a^{1}$ . This is because  $13 = 8 + 4 + 1$ .

Using this idea, we can compute  $a^{13}$  in  $O(\log n)$  time.

**Using recursion**:
<image src="./algo.jpg">

```cpp
int power(int a, int n) {
    if (n == 0) {
        return 1;
    }
    int subproblem = power(a, n / 2);
    if (n % 2 == 0) {
        return subproblem * subproblem;
    } else {
        return subproblem * subproblem * a;
    }
}
```


**Using iteration**:

```cpp
int binpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
```

