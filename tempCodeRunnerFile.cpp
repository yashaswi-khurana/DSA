else if (arr[mid]==data)
        {
            cout<<"Value found at index: "<<mid<<endl;
            break;
        }
        else
        {
            last = mid-1;
        }
        mid = (first+last)/2;
    }
    if (first>last)
    {
        cout<<"Value not found"<<endl;