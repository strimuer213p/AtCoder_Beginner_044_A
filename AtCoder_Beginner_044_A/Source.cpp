/*
問題文
1 軒のホテルがあります。 このホテルの宿泊費は、次のようになっています。
最初の K 泊までは、1 泊あたり X 円
K+1 泊目以降は、1 泊あたり Y 円
高橋君は、このホテルに N 泊連続で宿泊することにしました。 高橋君の宿泊費は合計で何円になるか求めてください。
*/

#include<iostream>

int main() {
	int day, target, x, y;
	std::cin >> day >> target >> x >> y;

	if (day < target) {
		std::cout << day*x << std::endl;
	}
	else {
		std::cout << target*x + (day-target)*y;
	}

	return 0;
}