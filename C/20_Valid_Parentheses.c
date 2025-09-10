bool isValid(char* s) {
    char str[10000];
    int n = 0;
    int len = strlen(s);
    for(int i = 0; i < len; i++)
    {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            str[n++] = s[i];
        else if(s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            if(n == 0)
                return false;
            else
            {
                char top = str[n - 1];
                n--;
                if(s[i] == ')' && top != '(')
                    return false;
                if(s[i] == ']' && top != '[')
                    return false;
                if(s[i] == '}' && top != '{')
                    return false;
            }
        }
    }
    if(n == 0)
        return true;
    return false;
}
