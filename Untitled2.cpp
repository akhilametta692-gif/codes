int main() 
{ 
    int *a; 
    int n; 
    cout<<"enter the size of the array :"<<endl; 
    cin>>n; 
    
    a = new int[n];
    
    cout<<"integer array"<<endl; 
    cout<<"before sorting"; 
    display(a,n); 
    
    delete[] a;
}
