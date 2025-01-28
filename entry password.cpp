#include<iostream>
#include<string>
using namespace std;
bool checkcapital(string str)
{
    int temp = str.size();
    for(int i=0;i<temp;++i)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            return true;
        }
    }
    return false;
}

bool checksmall(string str)
{
    int temp = str.size();
    for(int i=0;i<temp;++i)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            return true;
        }
    }
    return false;
}

bool checknumber(string str)
{
    int temp = str.size();
    for(int i=0;i<temp;++i)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            return true;
        }
    }
    return false;
}

bool checkspcharacter(string str)
{
    int temp = str.size(),cnt=0;
    for(int i=0;i<temp;++i)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9'))
        {
            ++cnt;
        }
    }
    return (cnt!=temp);
}

int main()
{
    string str;
    cout << "Enter password:" << endl;
    cin >> str;
    while(str.size()<8)
    {
        cout << "Password must contain at least 8 characters.!! Enter again:" << endl;
        cin >> str;
    }

    while(!checkcapital(str))
    {
        cout << "Password must contain capital letters.Enter again: " << endl;
        cin >> str; 
    }

    while(!checksmall(str))
    {
        cout << "Password must contain small letters.!! Enter again: " << endl;
        cin >> str;
    }

    while(!checknumber(str))
    {
        cout << "Password must contain numerical numbers.!! Enter again: " << endl;
        cin >> str;
    }

    while(!checkspcharacter(str))
    {
        cout << "password must contain special characters.!! Enter again: " << endl;
        cin >> str;
    }
    cout << "Congratulations. Password taken.!!" << endl;
    return 0;
}