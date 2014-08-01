function solve(limit){
	var sum = 0;
	for (var i = 0; i < limit; ++i) {
		if (i % 3 == 0 || i % 5 == 0) sum += i;
	}
	alert(sum);
}

solve(1000);
