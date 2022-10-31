    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        reverse(arr,arr+n);
	reverse(arr,arr+n-d);
	reverse(arr+n-d,arr+n);
    }
};
