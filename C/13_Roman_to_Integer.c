int romanToInt(char* s) {
    int result = 0;
    int i;
    for(i = 0; i < strlen(s) - 1; i++)
    {
        if(s[i] == 'I' && s[i + 1] == 'V')
        {
            result = result + 4;
            i++;
        }
        else if(s[i] == 'I' && s[i + 1] == 'X')
        {
            result = result + 9;
            i++;
        }
        else if(s[i] == 'X' && s[i + 1] == 'L')
        {
            result = result + 40;
            i++;
        }
        else if(s[i] == 'X' && s[i + 1] == 'C')
        {
            result = result + 90;
            i++;
        }
        else if(s[i] == 'C' && s[i + 1] == 'D')
        {
            result = result + 400;
            i++;
        }
        else if(s[i] == 'C' && s[i + 1] == 'M')
        {
            result = result + 900;
            i++;
        }
        else if(s[i] == 'I')
            result = result + 1;
        else if(s[i] == 'V')
            result = result + 5;
        else if(s[i] == 'X')
            result = result + 10;
        else if(s[i] == 'L')
            result = result + 50;
        else if(s[i] == 'C')
            result = result + 100;
        else if(s[i] == 'D')
            result = result + 500;
        else if(s[i] == 'M')
            result = result + 1000;
    }
    if(s[i] == 'I')
        result = result + 1;
    else if(s[i] == 'V')
        result = result + 5;
    else if(s[i] == 'X')
        result = result + 10;
    else if(s[i] == 'L')
        result = result + 50;
    else if(s[i] == 'C')
        result = result + 100;
    else if(s[i] == 'D')
        result = result + 500;
    else if(s[i] == 'M')
        result = result + 1000;
    return result;
}