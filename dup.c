#include <stdio.h>

#include<stdbool.h>

int main() {


    int nums[20] = {8, 3, 3, 4, 5, 6, 2, 3, 9, 10, 3};

    int dups  = 0;

    bool flag =false;

    for(int i=0; i<10; i++){

        dups = nums[i];

        for(int j=i+1; j<10; j++){

            if(dups==nums[j])

                {

                    printf("duplicate number: %d\n", dups);

                    flag = true;

                    break;

                }

        }

        if(flag==true)

            break;

    }

return 0;

}
