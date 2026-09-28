// Problem: Sort 0s, 1s and 2s
// Link: https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

int index = 0;
        for (int num = 0; num <= 2; num++) {
            int count = mpp[num];
            while (count > 0) {
                arr[index++] = num;
                count--;
            }
        }