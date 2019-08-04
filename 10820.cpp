#include <iostream>
#include <string>
using namespace std;

int so, dae, num, gong;

int main(void)
{
    // char str[102];

    // while (fgets(str, sizeof(str), stdin))
    // {
    //     so = 0;
    //     dae = 0;
    //     num = 0;
    //     gong = 0;
    //     int len = strlen(str);
    //     for (int i = 0; i < len; i++)
    //     {
    //         if (str[i] >= 'a' && str[i] <= 'z')
    //         {
    //             so++;
    //         }
    //         else if (str[i] >= 'A' && str[i] <= 'Z')
    //         {
    //             dae++;
    //         }
    //         else if (str[i] >= '0' && str[i] <= '9')
    //         {
    //             num++;
    //         }
    //         else if (str[i] == ' ')
    //         {
    //             gong++;
    //         }
    //     }
    //     printf("%d %d %d %d\n",so,dae,num,gong);
    // }

    //답//
    string str;
    //getline(stdin,str) (X)
    while (getline(cin, str))
    {
        so = 0; dae = 0 ; num = 0; gong= 0;
        for (char ch : str)
        {
            if (ch >= 'a' && ch <= 'z')
            {
                so++;
                
            }
            else if (ch >= 'A' &&  ch<= 'Z')
            {
                dae++;
            }
            else if (ch >= '0' && ch <= '9')
            {
                num++;
            }
            else if (ch == ' ')
            {
                gong++;
            }
        }
        printf("%d %d %d %d\n",so,dae,num,gong);

    }
    return 0;
}