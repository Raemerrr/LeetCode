class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        	int answer = 0, temp = 0;
			for (int num : nums) {
				if (num == 0) {
					temp = 0;
				} else {
					temp += 1;
				}
                answer = Math.max(answer, temp);
			}
			return answer;
    }
}
