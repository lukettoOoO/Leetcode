class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] result = new int[2];
        Map<Integer, Integer> map = new HashMap<>();
        
        for(int i = 0; i < nums.length; i++) {
            int term = target - nums[i];
            if(map.containsKey(term)) {
                result[0] = i;
                result[1] = map.get(term);
                break;
            }
            else {
                map.put(nums[i], i);
            }
        }

        return result;
    }
}
