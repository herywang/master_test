//旋转数组中的最小数字
// Created by wangheng on 4/21/20.
//把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
//输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。
//例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。
//NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。
#include <iostream>
#include <vector>
using namespace std;

int minNumberInRotateArray(vector<int> rotateArray){
    if(rotateArray.size() == 0){
        return 0;
    }else{
        int front = rotateArray[0];
        for(int i = 1;i<rotateArray.size();i++){
            if(rotateArray[i]>= front){
                front = rotateArray[i];
            }else{
                return rotateArray[i];
            }
        }
        return rotateArray[0];
    }
}

int main(){
    vector<int> a = {3,4,5,1,2};
    int result = minNumberInRotateArray(a);
    cout<<result<<endl;

}

