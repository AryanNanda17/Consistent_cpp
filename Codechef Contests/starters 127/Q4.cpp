while(t--){
	    long long n,l;cin>>n>>l;
	    int count = 0;
	    int k = 0;
	    if(l<10000){
	        k=l;
	        while(count<n){
                count++;
                cout<<k<<" ";
                k+=l;
	        }
	        cout<<endl;
	    }
	    else if(l>=10000){
	        k=1;
	        while(count<n){
	            cout<<k<<" ";
	            k++;
	            count++;
	        }
	        cout<<endl;
	    }
	}