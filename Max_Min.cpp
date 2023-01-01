// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n, max, i;
//     int arr[100];

//     cout<<"Enter the size of Array\n";
//     cin>>n;

//     cout<<"Enter the elements in the array\n";

//     for ( i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
    
//     max = arr[0];

//     for ( i = 0; i < n; i++)
//     {
//         if (arr[i]>max)
//         {
//             max = arr[i];
//         }
//     }

//     cout << max << "is the maximum value found at position";

//     return 0;
// }





#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, max,min, i;
    int arr[100];

    cout<<"Enter the size of Array\n";
    cin>>n;

    cout<<"Enter the elements in the array\n";

    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    // for maximum value
    max = arr[0];
    for ( i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout << max << " is the maximum value found at position\n";

    // for minimum value
    min = arr[0];
    for ( i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
        
    }
    cout << min << " is the minimum value found\n";
    
    return 0;
}
