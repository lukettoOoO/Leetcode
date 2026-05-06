class Solution {
    public boolean isPalindrome(String s) {
        String sParsed = "";
        for(int i = 0; i < s.length(); i++) {
            char lowerChar = s.charAt(i);
            if(Character.isLetterOrDigit(lowerChar)) {
                lowerChar = Character.toLowerCase(lowerChar);
                sParsed += lowerChar;
            }
        }
        System.out.println(sParsed);

        String sParsedReversed = "";
        for(int i = sParsed.length() - 1; i >= 0; i--) {
            sParsedReversed += sParsed.charAt(i);
        }

        return sParsed.equals(sParsedReversed);
    }
}
