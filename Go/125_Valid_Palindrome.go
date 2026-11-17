func isPalindrome(s string) bool {
    str := make([]byte, 0)
    s = strings.ToLower(s)
    for i := 0; i < len(s); i++ {
        if unicode.IsLetter(rune(s[i])) || unicode.IsDigit(rune(s[i])) {
            str = append(str, s[i])
        }
    }
    //fmt.Println(str)

    for i, j := 0, len(str) - 1; i < j; i, j = i + 1, j - 1 {
        if str[i] != str[j] {
            return false
        }
    }

    return true
}
