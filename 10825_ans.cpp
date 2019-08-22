#include <cstdio>
#include <algorithm>
#include <iostream>
#include <tuple>
#include <string>
using namespace std;
struct Student {
    std::string name;
    int kor;
    int eng;
    int math;
};

bool cmp(  Student  a,   Student b) {
    return std::make_tuple(-a.kor,a.eng,-a.math,a.name) < std::make_tuple(-b.kor,b.eng,-b.math,b.name);
}

int main(void) {
    int n;
    scanf("%d",&n);
    Student arr[100001];
    for(int i = 0 ; i<n ; i++) {
        cin >> arr[i].name;
        scanf("%d %d %d",&arr[i].kor, &arr[i].eng,&arr[i].math);
    }
    std::sort(arr,arr+n,cmp);
    for(int i = 0 ; i< n ; i++) {
        //printf("%s\n",arr[i].name);
        cout << arr[i].name << '\n';
    }
}