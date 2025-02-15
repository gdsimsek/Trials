char* greatestLetter(char* s) {
    
    char lower[26] = {0};
    char upper[26] = {0};
    int i = 0;
    char *result = (char*)malloc(2 * sizeof(char));

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            lower[s[i] - 'a']++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper[s[i] - 'A']++;
        }
    }
    for (int i = 25; i >= 0; i--)
    {
        if (lower[i] && upper[i]) {
            if (result) {
                result[0] = 'A' + i;
                result[1] = '\0';
            }
            return result;
        }
    }
    return "";
}