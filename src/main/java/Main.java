import dsa.leetcode.arrays.TwoSum;

import java.util.Arrays;

import static dsa.leetcode.arrays.TwoSum.*;

public class Main {
    public static void main(String[] args) {
        System.out.println(Arrays.toString(twoSumApproach1(new int[]{2,7,11,15}, 9)));
        System.out.println(Arrays.toString(twoSumApproach2(new int[]{2,7,11,15}, 9)));
    }
}
