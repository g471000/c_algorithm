
int binsearch(int array[], int searchNum, int left, int right){
	int middle;
	while(left <= right){
		middle = (left + right)/2;
		
		if(array[middle] > searchNum){
			left = middle + 1;
		} else if (array[middle] < searchNum){
			right = middle - 1;
		} else {
			// found!
			return middle;
		}	
	}
	// can not find
	return -1;
}
