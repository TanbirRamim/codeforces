def min_spell_casts(t, testcases):
    # Helper function to get the minimum number of spell casts for a single testcase
    def get_min_spell_casts(n, health):
        health.sort()
        first_strategy = sum(health)
        second_strategy = 0
        for i in range(n):
            if health[i] > 1:
                second_strategy += (health[i] - 1)
            else:
                second_strategy += 1
                break
        return min(first_strategy, second_strategy)

    # Iterate over all testcases and get the minimum number of spell casts for each
    for i in range(t):
        n = testcases[i][0]
        health = testcases[i][1]
        print(get_min_spell_casts(n, health))
