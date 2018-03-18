//hpynos
#include<bits/stdc++.h>
using namespace std;
int numSq(int n)
{
	int sum=0;
	while(n!=0)
	{
		sum+=(n%10) * (n%10);
		n=n/10;
	}
	return sum;
}
int isHappyNumber(int n)
{
		int i=1;
    set<int> st;
    while (1)
    {
        n = numSq(n);
        if (n == 1)
            return i;
        if (st.find(n) != st.end())
            return 0;
        st.insert(n);
        i++;
    }
}
/* Another Method
bool isHappy(int n)
{
    int slow, fast;
		slow = fast = n;
    do
    {
        //    move slow number by one iteration
        slow = numSquareSum(slow);
 
        fast = numSquareSum(numSquareSum(fast));
 
    }
    while (slow != fast);
 		return (slow == 1);
}*/
int main()
{
	int n;
	cin>>n;
	int res=isHappyNumber(n);
	if(!res)
		cout<<-1;
	else
		cout<<res;
}
