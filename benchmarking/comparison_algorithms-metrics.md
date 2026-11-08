# Algorithm Performance Comparison

## Objective
Compare the execution time of two implementations solving the same problem.

## Execution Results

### Run 1
```text
Naive algorithm result: 625025000
Naive algorithm time: 2.869623 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000122 seconds
```

### Run 2
```text
Naive algorithm result: 625025000
Naive algorithm time: 2.807013 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000107 seconds
```

### Run 3
```text
Naive algorithm result: 625025000
Naive algorithm time: 2.807548 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000145 seconds
```

## Average Execution Time

- Naive algorithm: 2.828061 seconds
- Single-pass algorithm: 0.000125 seconds

## Relative Performance

The naive algorithm is approximately 22,684.98 times slower than the single-pass algorithm.

## Complexity Analysis

- Naive algorithm: O(n²) — uses nested loops.
- Single-pass algorithm: O(n) — traverses the array only once.

## Conclusion

The single-pass implementation is significantly faster because it processes each array element only once, while the naive implementation repeatedly checks elements using nested loops.

Both implementations produce their expected results, but the single-pass algorithm is considerably more efficient.
