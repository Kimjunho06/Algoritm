#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[10];
	int x, y;
	cin >> x >> y;

	// x �̻� y ������ �� ã��
	upper_bound(arr, arr + 10, y) - lower_bound(arr, arr + 10, x);
	// x�� ����
	upper_bound(arr, arr + 10, y) - lower_bound(arr, arr + 10, y);
}

// k�� �۰� ū���� �Ǻ��ϴ� ��