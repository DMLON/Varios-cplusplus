#pragma once

template<class A, class B>
A& Maximo(A& a, B& b) {
	if (a > b)
		return (A&)a;
	else
		return (A&)b;
}

template<class A>
A& Maximo(A& a, A& b) {
	if (a > b)
		return a;
	else
		return b;
}

