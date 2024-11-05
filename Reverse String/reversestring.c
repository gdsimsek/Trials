void reverseString(char* s, int sSize) {
    
    int i = 0;
    int n =  sSize - 1;

    while (i < n)
    {
        char temp = s[i];
        s[i] = s[n];
        s[n] = temp;
        n--;
        i++;
    }
}