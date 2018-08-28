def solution(T):

	s = len(T)//4
	ans = None
	max_diff = None
	season_index = 0

	for i in range(0, len(T), s):
		_max = T[i]
		_min = T[i]

		for j in range(0, s):
			if _max < T[i+j]:
				_max = T[i+j]
			if _min > T[i+j]:
				_min = T[i+j]
		diff = _max - _min

		# for the first time
		if not max_diff:
			max_diff = diff
			ans = season_index
		else:
			if max_diff < diff:
				max_diff = diff
				ans = season_index

		season_index += 1



	return ['WINTER', 'SPRING', 'SUMMER', 'AUTUMN'][ans]




print solution([-3, -14, -5, 7, 8, 42, 8, 3])
print solution([2, -3, 3, 1, 10 ,8, 2, 5, 13, -5, 3, -18])
print solution([2, 1, 1, 10, 2, 13, 3, -18])