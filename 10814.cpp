#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct Person 
{
  int age;
  int id;
  char name[101];
};

bool cmp(Person a, Person b)
{
    if(a.age == b.age) 
    {
        return a.id < b.id;
    }
    return a.age < b.age;
}
int main(void)
{
    int n;
    scanf("%d",&n);
    vector<Person> v(n);
    for(int i = 0 ; i < n ;i++) 
    {
        scanf("%d %s",&v[i].age,v[i].name);
        v[i].id = i;
    }
    //stable_sort(v.begin(),v.end(),cmp);
    sort(v.begin(),v.end(),cmp);
    for(int i = 0 ; i < n ; i++) 
    {
        printf("%d %s\n",v[i].age,v[i].name);
    }
    return 0;
}