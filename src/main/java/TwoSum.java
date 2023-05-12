import java.util.HashMap;

//TimeComplexity: O(N)
//SpaceComplexity: O(N)

public class TwoSum {
    public static int[] twoSum(int[] nums, int target) {
        int[] result = new int[2];
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            if (map.containsKey(target - nums[i])) {
                result[0] = i;
                result[1] = map.get(target - nums[i]);
                return result;
            }
            map.put(nums[i], i);
        }
        return result;
    }

    public static void main(String[] args) {

        System.out.println(twoSum(new int[]{1, 2, 4,6,5},3));
    }
}
