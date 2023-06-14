class Solution {
    public int findNumbers(int[] nums) {
        return (int) Arrays.stream(nums)
					.mapToObj(String::valueOf)
					.filter(num -> num.length() % 2 == 0)
					.count();
    }
}