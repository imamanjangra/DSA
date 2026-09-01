#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std; 

// 1 Brute Algo
// --------------------------------------------------------
// int main(){
//     vector <int> nums = {3 , 2 , 3};
    
//     for(int n : nums){
//         int freq = 0;
//         for(int value : nums){
//             if(n == value){
//                 freq++;
//             }
//         }
//         if(freq > nums.size()/2){
//             cout << "Majaority element is = " << n;
//             break;
//         }
//     }
    

//     return 0;
// }
// -----------------------------------------------------------------

//  Better then Brute
// -----------------------------------------------

// int main(){
//     vector <int> nums = {3 , 2 , 3};

//     int ans = nums[0];
//     int freq = 1;
//     sort(nums.begin() , nums.end());
//     for(int i = 1; i<nums.size(); i++){
//         if(nums[i] == nums[i-1]){
//             freq++;
//         }else{
//             freq = 1;
//             ans = nums[i];
//         }
//     }

//     cout << ans;

//     return 0;
// }

// -------------------------------------------------------------------

// Moore's Voting Algorithm

int main (){
    int ans = 0; 
    vector<int> nums = {3 , 2 , 3 , 3 , 2}; 
    int freq = 0;

    for(int i = 0; i<nums.size(); i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout << ans;
}