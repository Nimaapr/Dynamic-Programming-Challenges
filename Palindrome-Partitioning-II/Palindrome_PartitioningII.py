def minCut(s: str) -> int:
    n = len(s)
    
    # Check if the substring from i to j is palindrome
    is_palindrome = [[False] * n for _ in range(n)]
    for end in range(n):
        for start in range(end + 1):
            if s[start] == s[end] and (end - start <= 2 or is_palindrome[start + 1][end - 1]):
                is_palindrome[start][end] = True


    # Find the minimum cuts
    cuts = [0] * n
    for end in range(n):
        min_cut = end
        for start in range(end + 1):
            if is_palindrome[start][end]:
                min_cut = 0 if start == 0 else min(min_cut, cuts[start - 1] + 1)
        cuts[end] = min_cut

    return cuts[-1]

if __name__ == "__main__":
    # Example usage
    input_string = "abcbdd"
    min_cuts = minCut(input_string)
    print(min_cuts)
