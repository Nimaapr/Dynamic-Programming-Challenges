# Word Break Problem

## Overview
The "Word Break Problem" is a classic dynamic programming challenge that involves determining whether a given string can be segmented into space-separated words from a provided dictionary of words. The implementation in Python demonstrates an efficient approach to solving this problem.

## Problem Statement
Given a non-empty string `s` and a dictionary `wordDict` containing a list of non-empty words, determine if `s` can be segmented into a space-separated sequence of one or more dictionary words.

## Implementation in Python
- **File**: `word_break.py`
- The solution uses dynamic programming to incrementally build up the solution for smaller substrings of `s`.
- The algorithm checks for each substring of `s` whether it can be formed by concatenating words from the dictionary.

## Complexity Analysis
- **Time Complexity**: O(n^2), where n is the length of the input string `s`. The nested loop in the implementation leads to quadratic time complexity.
- **Space Complexity**: O(n), due to the additional dynamic programming array used to store the subproblem solutions.

## Usage
To use this script, run it with Python and provide the string `s` and the list `wordDict`. For example:
```python
from word_break import wordBreak

s = "leetcode"
wordDict = ["leet", "code"]
print(wordBreak(s, wordDict))
```
