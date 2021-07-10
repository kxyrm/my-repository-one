#include<iostream>
#include<cstring>
using namespace std;
char ss[20];
class ren
{
public:
    int num;
    int fen;
    int shou = 0;
    int ans = 0;
    int duo = 0;
    char s[20];
};
int main()
{
    //freopen("C://a.in","r",stdin);
    int n;
    cin >> n;
    ren a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i].s;
        //cout << a[i].s << endl;
    }
    for(int i=0; i<n; i++)
    {
        cin >> ss;
        int j=0;
        while(1)
        {
            if(strcmp(a[j].s,ss)==0)
            {
                break;
            }
            j++;
        }
        //cout << j << "*" <<endl;
        cin >> a[j].num >> a[j].fen;
        //cout << a[j].num << " " << a[j].fen << endl;
        for(int w=0; w<a[j].fen; w++)
        {
            cin >> ss;
            int p=0;
            while(1)
            {
                if(strcmp(a[p].s,ss)==0)
                {
                    break;
                }
                p++;
            }
            a[j].duo = a[j].num % a[j].fen;
            a[p].shou += a[j].num/a[j].fen;
        }

        memset(ss,0,sizeof(ss));
    }
    for(int i=0; i<n; i++)
    {
        a[i].ans = a[i].shou - a[i].num + a[i].duo;
        cout << a[i].s << " ";
        cout << a[i].ans << endl;
    }
    return 0;
}
