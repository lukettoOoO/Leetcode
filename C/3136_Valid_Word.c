bool isValid(char* word) {
    if(strlen(word) < 3)
        return false;
    bool containsVowel = false, containsConsonant = false;
    for(int i = 0; i < strlen(word); i++)
    {
        if(!isalnum(word[i]))
            return false;
        if(strchr("aeiouAEIOU", word[i]) != NULL)
            containsVowel = true;
        if(!strchr("aeiouAEIOU", word[i]) != NULL && !isdigit(word[i]))
            containsConsonant = true;
    }
    if(containsVowel && containsConsonant)
        return true;
    return false;

}
