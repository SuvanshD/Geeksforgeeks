# Armstrong Numbers  

**Difficulty:** Easy  
**Accuracy:** 49.88%  
**Submissions:** 165K+  
**Points:** 2  

## Problem Description  
You are given a 3-digit number `n`. Find whether it is an Armstrong number or not.  

An Armstrong number of three digits is a number such that the sum of the cubes of its digits equals the number itself.  

For example:  
- **371** is an Armstrong number since \(3^3 + 7^3 + 1^3 = 371\).  

### Note:  
Return `true` if it is an Armstrong number; otherwise, return `false`.  

---

## Examples  

| Input  | Output | Explanation                                      |  
|--------|--------|--------------------------------------------------|  
| n = 153| true   | \(1^3 + 5^3 + 3^3 = 153\), so it is an Armstrong number.|  
| n = 372| false  | \(3^3 + 7^3 + 2^3 = 378\), not equal to 372.     |  
| n = 100| false  | \(1^3 + 0^3 + 0^3 = 1\), not equal to 100.       |  

---

## Constraints  

- \(100 \leq n < 1000\)  

---

## Code  

```python
def is_armstrong(n: int) -> bool:
    # Convert the number to a string to extract digits
    digits = [int(digit) for digit in str(n)]
    # Calculate the sum of cubes of the digits
    sum_of_cubes = sum(digit**3 for digit in digits)
    # Check if the sum equals the original number
    return sum_of_cubes == n

# Examples
print(is_armstrong(153))  # Output: True
print(is_armstrong(372))  # Output: False
print(is_armstrong(100))  # Output: False
