int score(const int dice[5]) {
    
    int count[7] = {0};
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        count[dice[i]]++;
    }
    if (count[1] >= 3) {
        total += 1000;
        count[1] -= 3;
    }
    if (count[6] >= 3) {
        total += 600;
        count[6] -= 3;
    }
    if (count[5] >= 3) {
        total += 500;
        count[5] -= 3;
    }
    if (count[4] >= 3) {
        total += 400;
        count[4] -= 3;
    }
    if (count[3] >= 3) {
        total += 300;
        count[3] -= 3;
    }
    if (count[2] >= 3) {
        total += 200;
        count[2] -= 3;
    }
    total += count[1] * 100;
    total += count[5] * 50;
    return total;
}