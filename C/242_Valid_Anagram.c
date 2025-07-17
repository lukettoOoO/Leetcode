bool isAnagram(char* s, char* t) {
    int salpha[256], talpha[256];
    for(int i = 0; i < 256; i++)
    {
        salpha[i] = 0;
        talpha[i] = 0;
    }
    for(int i = 0; i < strlen(s); i++)
        salpha[s[i]]++;
    for(int i = 0; i < strlen(t); i++)
        talpha[t[i]]++;
    for(int i = 0; i < 256; i++)
        if(salpha[i] != talpha[i])
            return false;
    return true;
}
