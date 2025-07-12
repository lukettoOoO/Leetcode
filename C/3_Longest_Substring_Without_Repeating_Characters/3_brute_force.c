int lengthOfLongestSubstring(char* s) {
    int char_freq[256];
    for(int i = 0; i < 256; i++)
        char_freq[i] = 0;
    int max = 0;
    int n = strlen(s);
    //normal case:
    for(int l = 0; l < n; l++)
    {
        for(int i = l; i < n; i++)
        {
            int has_duplicate = 0;
            int substring_len = 0;
            for(int j = l; j <= i; j++)
            {
                char_freq[s[j]]++;
                substring_len++;
                printf("%c ", s[j]);
                if(char_freq[s[j]] > 1)
                {
                    has_duplicate = 1;
                    break;
                }
            }
            printf("\n");
            if(has_duplicate == 0)
            {
                printf("no duplicates\n");
                if(substring_len > max)
                    max = substring_len;
            }
            else
                printf("has duplicates\n");
            //a substring has been parsed
            for(int i = 0; i < 256; i++)
                char_freq[i] = 0;
        }
        printf("\n");
    }
    return max;
}
