/*
��蕶
1 ���̃z�e��������܂��B ���̃z�e���̏h����́A���̂悤�ɂȂ��Ă��܂��B
�ŏ��� K ���܂ł́A1 �������� X �~
K+1 ���ڈȍ~�́A1 �������� Y �~
�����N�́A���̃z�e���� N ���A���ŏh�����邱�Ƃɂ��܂����B �����N�̏h����͍��v�ŉ��~�ɂȂ邩���߂Ă��������B
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