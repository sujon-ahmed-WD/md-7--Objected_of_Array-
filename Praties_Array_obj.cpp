 #include<bits/stdc++.h>
 using namespace std;
 class Stu
 {
    public:
    string name;
    int r;


 };
 int main()
 {
    int n;
    cin>> n; 
    Stu a[n];

    for (int i=0; i<n; i++)
    {
        cin.ignore();
        getline(cin,a[i].name);

        cin>>a[i].r;
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i].name<<a[i].r<<endl;
    }
    return 0;
 }