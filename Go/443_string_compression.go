func compress(chars []byte) int {
    consecutive_len := 1
    write_i := 0
    for i := 0; i < len(chars); i++ {
        if i + 1 < len(chars) && chars[i] == chars[i + 1] {
            consecutive_len++
        } else if consecutive_len == 1 {
            // append the character
            chars[write_i] = chars[i]
            write_i++
            consecutive_len = 1
        } else {
            // append the character followed by the group's length
            chars[write_i] = chars[i]
            write_i++
            len_str := strconv.Itoa(consecutive_len)
            for j := 0; j < len(len_str); j++ {
                chars[write_i] = len_str[j]
                write_i++
            }
            consecutive_len = 1
        }
    }

    return write_i
}
