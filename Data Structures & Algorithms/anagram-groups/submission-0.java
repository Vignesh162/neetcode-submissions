class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String>> groups = new HashMap<>();
        for( String str : strs){
            char[] charArray = str.toCharArray();
            Arrays.sort(charArray);
            String sortedKey = new String(charArray);
            if (!groups.containsKey(sortedKey)) {
                groups.put(sortedKey, new ArrayList<>());
            }
            groups.get(sortedKey).add(str);
        }
        return new ArrayList<>(groups.values());
    }
}
