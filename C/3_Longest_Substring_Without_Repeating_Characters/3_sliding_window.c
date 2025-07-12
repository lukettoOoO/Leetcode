int lengthOfLongestSubstring(char* s) {
    int char_freq[256];
    for(int i = 0; i < 256; i++)
        char_freq[i] = 0;
    int max = 0;
    int n = strlen(s);
    int left = 0, right = 0;
    for(right = 0; right < n; right++)
    {
        char_freq[s[right]]++;
        while(char_freq[s[right]] > 1) //duplicate
        {
            char_freq[s[left]]--;
            left++;
        }
        if(right - left + 1 > max)
            max = right - left + 1;
    }
    return max;
}
