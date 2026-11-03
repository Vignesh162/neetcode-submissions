class Solution {
    public boolean hasDuplicate(int[] nums) {
        Map<Integer,Boolean> seen = new HashMap<>();
        for( int num: nums){
            if(seen.getOrDefault(num,false) == true)return true;
            seen.put(num,true);
        }
        return false;
    }
}