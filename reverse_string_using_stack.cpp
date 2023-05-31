#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    stack<char>st;
    for(int i=0;str[i]!='\0';i++)
    {

        if((str[i]>='a' && str[i]<='z'))
        {
            st.push(str[i]);
        }
        if(str[i]=='.')
        {
            while(!st.empty())
            {
                cout<<st.top();
                st.pop();
            }
            cout<<".";
        }
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }

    return 0;
}


