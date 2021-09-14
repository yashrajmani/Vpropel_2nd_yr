// 06:09:21
// Sum of First Few Consecutive Prime Numbers
// Given a number 'n', write an algorithm and a code to check if it can be written as sum of first few prime numbers. Print Yes if 'n' can be written as first few prime numbers and No otherwise. For example, if n is 5 then print Yes as it can be written as 2+3, if n is 41 then print Yes as it can be written as 2 + 3 + 5 + 7 + 11 + 13 and if n is 11 then print 'No' as it cannot be written as sum of first few prime numbers.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, Number, count;
//     int n;
//     cin >> n;
//     int subsum = 0;
//     int cn=0,cy=0;

//     for (Number = 1; Number <= n; Number++)
//     {
//         count = 0;
//         for (i = 2; i <= Number / 2; i++)
//         {
//             if (Number % i == 0)
//             {
//                 count++;
//                 break;
//             }
//         }
//         if (count == 0 && Number != 1)
//         {

//             subsum += Number;

//             if (subsum == n)
//             {
//                 cy++;

//             }
//             else
//             {
//                 cn++;

//             }
//         }
//     }

// if(cy==1)
// {
//     cout<<"Yes";
// }

// else
// {
//     cout<<"No";
// }

//     return 0;
// }

// // 07:09:2021
// #include <iostream>
// #include <string.h>

// using namespace std;
// int main()
// {

//     char n[10];
//     cin >> n;

//     int x = strlen(n);

//     int xx = 0;
//     int yy = 0;

//     for (int i = 0; i < x; i = i + 2)

//     {
//         xx += int(n[i]);
//         // cout<<n[i]<<endl;
//     }

//     // cout<<"HHHHHHHHHH"<<endl;

//     for (int i = strlen(n) - 1; i >= 0; i = i - 2)

//     {
//         yy += int(n[i]);

//         // cout<<n[i]<<endl;
//     }

//     // cout<<xx<<endl;
//     // cout<<yy<<endl;

//     cout << abs(xx - yy);
//     return 0;
// }

// // 09:09:21
// #include <iostream>
// #include <string.h>
// using namespace std;
// int ctr = 0;

// int ans = 0;
// int count = 0;

// void subString(char str[], int n)
// {

//     for (int len = 1; len <= n; len++)
//     {

//         for (int i = 0; i <= n - len; i++)
//         {

//             int j = i + len - 1;
//             for (int k = i; k <= j; k++)
//             {
//                 cout << str[k];
//                 if (str[k] == 'a'||str[k]=='e'||str[k]=='i'||str[k]=='o'||str[k]=='u')
//                 {
//                     ctr++;
//                 }

//             }
//               if (ctr == count)
//                 {
//                     ans++;
//                 }
//             cout << endl;
//         }
//     }
// }

// int main()
// {
//     char s[10];

//     cin >> s;
//     cin >> count;

//     subString(s, strlen(s));

//     // cout << (ctra + ctre + ctri + ctro + ctru);

//     // cout<<endl;

//     cout << ans;

//     return 0;
// }

// #include <iostream>
// #include <string.h>

// using namespace std;
// int main()
// {
//     char s[10];
//     cin >> s;
//     int seats;
//     cin >> seats;
//     int i = 0;

//     for (int i = 0; i < seats; i++)
//     {
//         cout << i + 1 << " ";
//         cout << s[i]<<endl;
//         if (strlen(s) <= i)
//         {
//             cout<<"fault";
//         }
//     }

//     return 0;
// }

// // 1 2 3 4 5 6 7 8 9 10
// // g o o d g o o d g o

// //11:09:21
// #include <iostream>
// using namespace std;
// int main()
// {
//     int m,n;
//     int mf=0;
//     int nf=0;
//     cin>>m>>n;
//     for (int i = 2; i < m; i++)
//     {
//        if(m%i==0)
//        {

//            mf+=i;

//        }
//     }

//     for (int i = 2; i < n; i++)
//     {
//        if(n%i==0)
//        {

//            nf+=i;
//        }
//     }

//     if(mf>nf)
//     {
//         cout<<m;
//     }
//     if(nf>mf)
//     {
//         cout<<n;
//     }
//     if(mf==nf)
//     {
//         cout<<"No dominance";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= 4; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
