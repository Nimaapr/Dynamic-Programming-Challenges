def wordBreak(s: str, wordDict: list) -> bool:
    word_set = set(wordDict)
    dp = [False] * (len(s) + 1)
    dp[0] = True  # Empty string can always be segmented

    for i in range(1, len(s) + 1):
        for j in range(i):
            if dp[j] and s[j:i] in word_set:
                dp[i] = True
                break

    return dp[len(s)]

# Example usage
s = "leetcode"
wordDict = ["leet", "code"]
print(wordBreak(s, wordDict))
