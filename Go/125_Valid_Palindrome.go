func isPalindrome(s string) bool {
	s = strings.ToLower(s)
	var new_s string
	for i := 0; i < len(s); i++ {
		if (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') {
            new_s += string(s[i])
		}
	}
	fmt.Println(new_s)
    for i, j := 0, len(new_s) - 1; i < j; i, j = i + 1, j - 1 {
        if new_s[i] != new_s[j] {
            return false
        }
    }
	return true
}
