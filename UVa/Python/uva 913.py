while True:
    try:
        N = int(input())
    except EOFError:
        break

    last_3_odds_sum = (N + 1) // 2
    last_3_odds_sum = (2 * last_3_odds_sum * last_3_odds_sum) - 1
    last_3_odds_sum = 3 * last_3_odds_sum - 6
    
    print(last_3_odds_sum)
