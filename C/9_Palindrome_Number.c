bool isPalindrome(int x) {
    long int p = 0;
    if(x < 0)
        return false;
    long int aux = x;
    while(aux != 0)
    {
        p = p * 10 + aux % 10;
        aux = aux / 10;
    }
    if(x == p)
        return true;
    return false;
}