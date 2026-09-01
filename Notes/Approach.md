# 1 :  (Two)2 Pointer Approach 

**Ex -**

```
int ReverseArray(int arr[] , int length){
   
    int start = 0;
    int end = length - 1;

    while(start < end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

```

# 2 : Kadane's Algorithm

**Ex-**
```
    int main (){
    int current_sum = 0;
    int max_sum = INT_MIN;
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = 9;
    for(int i = 0; i<n; i++){
      
            current_sum += arr[i];
            max_sum = max(current_sum , max_sum);

            if(current_sum < 0){
                current_sum = 0;
            }
      
    }

    cout << max_sum;
}
```

# 3 : Brute Algo

```
int main(){
    vector <int> nums = {3 , 2 , 3};
    
    for(int n : nums){
        int freq = 0;
        for(int value : nums){
            if(n == value){
                freq++;
            }
        }
        if(freq > nums.size()/2){
            cout << "Majaority element is = " << n;
            break;
        }
    }
    

    return 0;
}
```

# 4 : Better then Brute

```

int main(){
    vector <int> nums = {3 , 2 , 3};

    int ans = nums[0];
    int freq = 1;
    sort(nums.begin() , nums.end());
    for(int i = 1; i<nums.size(); i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }else{
            freq = 1;
            ans = nums[i];
        }
    }

    cout << ans;

    return 0;
}
```

# 5 : Moore's Voting Algorithm

```

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
```
