def count_ways_ukulele():
    # Initialize dp array with zeros
    dp = [[0 for _ in range(7)] for _ in range(7)]
    dp[0][0] = 1  # Starting point

    # Populate the dp array
    for i in range(6):
        for j in range(i + 1):
            if dp[i][j] > 0:
                dp[i + 1][j] += dp[i][j]  # Move down
                if j + 1 <= i + 1:
                    dp[i + 1][j + 1] += dp[i][j]  # Move diagonally down-right

    # Sum up the ways to reach any 'E' in the last row
    return sum(dp[6])

# Calculate the number of ways to form "UKULELE"
num_ways = count_ways_ukulele()
print(f"The number of ways to form 'UKULELE' is: {num_ways}")