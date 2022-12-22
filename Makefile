clean:
	find src -name "main"     | xargs rm -f
	find src -name "a.out"    | xargs rm -f
	find src -name "main.out" | xargs rm -f
