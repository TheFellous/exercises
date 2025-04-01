#include <bits/stdc++.h>
class MovingAverage {
    private: 
        std::queue<int> helper; 
        int size, sum=0; 
    public:
        MovingAverage(int size) {
            this->size = size; 
            
        }
        
        double next(int val) {
            if(helper.size() == size){
                this->sum-= helper.front(); 
                helper.pop(); 
            }
            helper.push(val); 
            sum+= val; 
    
            return sum/helper.size(); 
                
        }
    };
    
    /**
     * Your MovingAverage object will be instantiated and called as such:
     * MovingAverage* obj = new MovingAverage(size);
     * double param_1 = obj->next(val);
     */