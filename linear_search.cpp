// #include <iostream>
// using namespace std;

//  bool search(int arr[],int key, int size)
//     {
//         for (int i = 0; i < size; i++)
//         {
//             if (arr[i] == key)
//             {
//                 return 1;
//             }
            
//         }
//         return 0;  
//     }

// int main()
// {
//     int arr[5] = {5,10,8,-2,6};

//     cout<<"Enter the element to search in the Array\n";
//     int key;
//     cin>>key;

//     bool found = search(arr ,5 ,key);

//     if (found)
//     {
//         cout<<"Element is Present\n";
//     }
//     else
//     {
//         cout<<"Element is Absent\n";
//     }
   
//     return 0;
// }



#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5,2,-4,7,13};
    int i, item;
    int flag = 0;

    cout<<"Enter the element to Search\n";
    cin>>item;

    for ( i = 0; i < 5; i++)
    {
        if (arr[i]==item)
        {
            flag = 1;
            break;
        }
    }
    
    if (flag == 1)
    {
        cout<<"Element is Present\n";
    }
    else
    {
        cout<<"Element is Absent\n";
    }

    return 0;
}
