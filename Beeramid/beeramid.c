
int beeramid(double bonus, double price) {
    int c = 0;
    int total = 0;
    int floor = 1;

    c = bonus / price;

  
    while (total + (floor * floor) <= c) {
        total += floor * floor;
        floor++;
    }

    return floor - 1;
}