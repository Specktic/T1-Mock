#include <bits/stdc++.h>
#include <gtest/gtest.h>

using namespace std;

class SS {

    private:


    public:

        int nLen;

        void selectionSort(int arr[], int n)
        {
            int i, j, min_idx;

            for (i = 0; i < n - 1; i++) {

                min_idx = i;
            for (j = i + 1; j < n; j++) {
                if (arr[j] < arr[min_idx])
                    min_idx = j;
            }

            if (min_idx != i)
                swap(arr[min_idx], arr[i]);
            }
        }

        void printArray(int arr[], int size)
        {
            int i;
            for (i = 0; i < size; i++) {
                cout << arr[i] << " ";
                cout << endl;
            }
        }

        SS()
        {
            nLen = 0;
        }

};

TEST(SStest, nStartsAsZero)
{
    SS sorter;
    EXPECT_EQ(0, sorter.nLen);
}

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}