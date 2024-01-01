#include <iostream>
using namespace std;
int main()
{
    cout << " Simple Calculator!"<< '\n';
    cout << " Use Format (a + b | a - b | a * b | a / b)" << '\n';
    cout << " Enter 0 to stop  program" << '\n';
    
    double a{}, b{};
    char op{};
    
    while (true)
 {
	cout << '\n' <<">";
	cin >> a >> op >> b;
	
	if(a==0)
	break;
	
	switch (op) 
	{
		case'+':
			cout << a + b<<'\n';
		    break;
		case'-':
			cout << a - b<<'\n';
		    break;
		case'*':
			cout << a * b<<'\n';
		    break;
	    case'/':
			cout << a / b<<'\n';
		    break;
		default:
			cout << "Wrong Operation" <<'\n';
	}
 }
return 0;
}
