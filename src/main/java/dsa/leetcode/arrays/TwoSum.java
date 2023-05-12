package dsa.leetcode.arrays;

import java.util.HashMap;
import java.util.Map;

//TimeComplexity: O(N)
//SpaceComplexity: O(N)

public class TwoSum {
    public static int[] twoSumApproach1(int[] nums, int target) {
        int[] result = new int[2];
        HashMap<Integer,Integer> hashMap = new HashMap<>();
        for(int i=0;i< nums.length;i++){
            if(hashMap.containsKey(target-nums[i])){
                result[1] = i;
                result[0] = hashMap.get(target-nums[i]);
                return result;
            }
            hashMap.put(nums[i],i);
        }
        return result;
    }
    public static int[] twoSumApproach2(int[] numbers, int target) {
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        for (int i = 0; i < numbers.length; map.put(numbers[i],i++))
            if (map.containsKey(target - numbers[i]))
                return new int[]{map.get(target - numbers[i]),i};
        return new int[]{0,0};
    }
}
