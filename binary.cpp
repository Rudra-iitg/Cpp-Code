#nclude <iostream>
using namespace std;


int binary_search(int my_list[],int size, int target){
    int low = 0;
    int high = size - 1;
	while(low <= high){
	    int mid = (low + high) / 2;
	    int guess = my_list[mid];
	    if (guess == target){
	        return mid;
	    }
	    if (guess > target){
		high = mid -1;
	    }
	    else{
		low = mid + 1;
	    } 
	   
	}
	return -1;
    }
int main(){
    int my_list[] = {7, 14, 23, 35, 48, 57, 63, 79, 85, 94, 102, 118, 135, 147, 163};
    int size = sizeof(my_list)/sizeof(my_list[0]);
    int result = binary_search(my_list,size,118);
    cout << "the index of 118 is " << result << endl;
    
    return 0;
    }
