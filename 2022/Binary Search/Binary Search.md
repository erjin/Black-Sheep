# Binary Search
## 1 Time complexity
### 1.1 Spent O(1) to reduce a T(N) to T(n/2)
```
T(n) = T(n/2) + O(1)
T(n) = T(n/4) + O(1) + O(1)
...
T(n) = T(1) + log2(n) x O(1)
T(n) = log2(n) x O(1) + O(1)
T(n) = O[log(n)]
```
### 1.2 Spent O(n) to reduce a T(N) to T(n/2)
```
T(n) = T(n/2) + O(n) 
T(n) = T(n/4) + O(n/2) + O(n)
T(n) = T(1) + O(n) + O(n/2) + ...
T(n) = O(n+ n/2+ n/4 +..+2+1)
T(n) = O(n+n-1)
T(n) = O(n)
```
## 2 Better than O(n), think of O(logn) binary search

## 3 Recursion or Non-R
- stack overflow
- ask interviewer for recursion?

## 4 Key points for binary search
### 4.1 while condition
while(start + 1 < end)
    points to slibiling elements (two elements)
while(start < end)
    points to the same element
### 4.2 assign mid
mid = start + (end - start) / 2  //overflow
### 4.3 three checks
separate the check for >, <, ==
### 4.4 final step after while loop
A[start] A[end] ?= target

## 5 Binary three levels
### 5.1 Simple binary search pattern
- Simple pattern match

### 5.2 OOXX
- first bad version - given api to check bad or not
1 2 3 ... k-1 k k+1 ... n
o o o     o   x x       x

### 5.3 Half Half
- find one mountain peak in peaks
- 33. Search in Rotated Sorted Array
